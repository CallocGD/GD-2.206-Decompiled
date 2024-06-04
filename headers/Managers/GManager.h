#ifndef __GMANAGER_H__
#define __GMANAGER_H__


#include "../includes.h"


/// @brief The Base Class of almost all the different Managers out there.
class GManager: public cocos2d::CCNode {

public:
    GManager():
        m_setup(false),
        m_saved(false),
        m_fileName(""),
        m_quickSave(false)
    {}

    /// @brief Encodes Save Data to the given dictionary
    /// @param dsdict the data to save from the manager
    virtual void encodeDataTo(DS_Dictionary *dsdict);

    /// @brief Loads the data to our dictionary
    /// @param dsdict the dictionary to send our save data to 
    /// @return true if data was loaded successfully false if failure occured.
    virtual bool dataLoaded(DS_Dictionary *dsdict);
    
    /// @brief Loads up Geometry Dash Savedata as 
    /// if it were our first time playing it.
    virtual void firstLoad();

    /// @brief Obtains the File path to our savedata
    /// @return a string of the path were looking for 
    std::string getCompressedSaveString();

    /// @brief obtains a compressed version of our Save Data
    /// @return the compressed string we need to decompress
    std::string getcompressedString();

    /// @brief Gets a decompressed version of our Save Data
    /// @return a string of our save data which will be in XML form
    std::string getSaveString();

    /// @brief Initalizes GManager 
    /// @return true if initalization was successful 
    bool init();
    
    /// @brief Loads our save data to our manager
    /// @return true if data was able to load successfully
    bool load();

    /// @brief Loads our save data to our manager by filename
    /// @param fileName the filename we wish to load our data from
    /// @return  true if data was able to load successfully
    bool loadDataFromFile(std::string &const fileName);

    /// @brief Loads in our data from a compressed string
    /// @param compressedStr the compressed version of our savedata
    void loadFromCompressedString(std::string& compressedStr);
    
    /// @brief Loads data from string
    /// @param data the data we wish to load
    void loadFromString(std::string& data);
    
    /// @brief Attempts to save our data 
    void save();
    /// @brief Saves data back to our savefile
    /// @param dsdict the savedata to store 
    /// @param fileName the filename to store our savedata to
    /// @return weather or not we were able to save our data
    bool saveData(DS_Dictionary *dsdict, std::string fileName);

    /// @brief Used primarly to save the Manager's data 
    /// @param fileName the filename to save the manager's data to
    void saveGMTo(std::string fileName);

    /// @brief Used to initalize the Manager's sturctures
    void setup();
    
    /// @brief Attempts to load up our savedata
    /// @param dsdict the dictionary of our stored savedata
    /// @param fileName the filename to attempt to get data from
    /// @return weather or not loading succeeded.
    bool tryLoadData(DS_Dictionary* dsdict, std::string fileName);

	std::string m_fileName;
	bool m_setup;
	bool m_saved;
	bool m_quickSave;

    /* If were on android we would have another dummy object here... 
     * SEE: https://www.youtube.com/watch?v=T-ap51Lg8Tw 
     */
};


#endif /* __GMANAGER_H__ */