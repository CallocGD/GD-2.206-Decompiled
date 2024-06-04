
#include "includes.h"
#include "cocos2dx/support/zip_support/ZipUtils.h"


/* Virtual Call */
bool GManager::dataLoaded(DS_Dictionary *dsdict)
{}

/* Virtual Call */
void GManager::encodeDataTo(DS_Dictionary* dsdict)
{}

/* Virtual Call */
void GManager::firstLoad()
{}


std::string GManager::getcompressedString(){
    return cocos2d::ZipUtils::compressString(getSaveString(), false, 0);
}

std::string GManager::getSaveString(){
    DS_Dictionary* dsdict = new DS_Dictionary;
    encodeDataTo(dsdict);
    std::string saveString = dsdict->saveRootSubDictToString();
    delete dsdict;
    return saveString;
}

bool GManager::init(){
    m_setup = true;
    m_saved = false;
    return true;
}

bool GManager::load() {
   return loadDataFromFile(m_fileName);
}

bool GManager::loadDataFromFile(std::string &const fileName){
    bool loadedData;
    std::string backup;
    /* I Think Robtop should've made dsdict into a RAII Styled variable TBH... */
    DS_Dictionary *dsdict = new DS_Dictionary();
    if (!tryLoadData(dsdict, fileName)) {
        backup = fileName + "2.dat";
        /* Create a backup */
        if (tryLoadData(dsdict, backup)) {
            dsdict->copyFile(backup.c_str(), fileName.c_str());
            loadedData = true;
        }
        else {
            /* Failed the second time so now try loading the backup file */
            loadedData = tryLoadData(dsdict, fileName + ".dat.bak");
        }
        if (!loadedData) {
            firstLoad();
        }
    }
    loadedData = dataLoaded(dsdict);
    delete dsdict;
    return loadedData;
}

void GManager::loadFromCompressedString(std::string& compressedStr)
{
    return loadFromString(cocos2d::ZipUtils::decompressString(compressedStr, false, 0));
}   


void GManager::loadFromString(std::string& compressedStr)
{
    DS_Dictionary *dsdict = new DS_Dictionary();
    if (dsdict->loadRootSubDictFromString(compressedStr)) {
        dataLoaded(dsdict);
    }
    delete dsdict;
}



bool GManager::saveData(DS_Dictionary *dsdict, std::string fileName){
    return dsdict->saveRootSubDictToCompressedFile(fileName.c_str());
}

void GManager::saveGMTo(std::string fileName){
    DS_Dictionary *dsdict = new DS_Dictionary();
    encodeDataTo(dsdict);
    saveData(dsdict, fileName);
    m_saved = true;
    delete dsdict;
}



void GManager::setup(){
    m_setup = true;
    load();
}


bool GManager::tryLoadData(DS_Dictionary *dsdict, std::string data){
    return dsdict->loadRootSubDictFromCompressedFile(data.c_str());
}