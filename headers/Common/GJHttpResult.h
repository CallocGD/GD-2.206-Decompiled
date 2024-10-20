#ifndef __GJHTTPRESULT_H__
#define __GJHTTPRESULT_H__


#include "../includes.h"

/// @brief Used primarly as a Carrier Node to prevent Http Items from deallocating during the initial response time
class GJHttpResult: public cocos2d::CCNode {
public:
    /// @brief Creates a Node for carrying response items
    /// @param success weather or not the http request succeeded
    /// @param response The Response data of the result
    /// @param tag the Download Tag of the request
    /// @param httptype The Type of http request that was made
    static GJHttpResult* create(bool success, std::string response, std::string tag, GJHttpType httptype);
    
    /// @brief initalizes a GJHttpResult for carrying response items
    /// @param success weather or not the http request succeeded
    /// @param response The Response data of the result
    /// @param tag the Download Tag of the request
    /// @param httptype The Type of http request that was made
    bool init(bool success, std::string response, std::string tag, GJHttpType httptype);

    bool success;
    std::string response;
    std::string tag;
    GJHttpType httptype;
};

#endif /* __GJHTTPRESULT_H__ */
