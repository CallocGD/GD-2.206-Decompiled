
#include "includes.h"



cocos2d::CCObject* ObjectManager::animLoaded(char const* anim){
    return m_maybeLoadedAnimations->objectForKey(anim);
};


cocos2d::CCObject* ObjectManager::getDefinition(char const* definitionKey){
    return m_objectDefinitions->objectForKey(definitionKey);
};


cocos2d::CCObject* ObjectManager::getGlobalAnimCopy(char const* anim){
    return ((cocos2d::CCDictionary*)m_objectDefinitions->objectForKey("GlobalAnimations"))->objectForKey(anim);
};


bool ObjectManager::init()
{
    m_objectDefinitions = cocos2d::CCDictionary::createWithContentsOfFile("objectDefinitions.plist");
    m_objectDefinitions->retain();
    loadCopiedAnimations();
    loadCopiedSets();
    m_maybeLoadedAnimations = cocos2d::CCDictionary::create();
    m_maybeLoadedAnimations->retain();
    return true;
}

ObjectManager* GLOBAL_OBJECTMANAGER = nullptr;

ObjectManager* ObjectManager::instance(){
    if (GLOBAL_OBJECTMANAGER == nullptr){
        GLOBAL_OBJECTMANAGER = new ObjectManager;
        GLOBAL_OBJECTMANAGER->init();
    }
    return GLOBAL_OBJECTMANAGER;
};


void ObjectManager::loadCopiedAnimations(){


    cocos2d::CCArray* objectDefinitionKeys = m_objectDefinitions->allKeys();
    for (unsigned int i = 0;  i < objectDefinitionKeys->count(); i++) {
        cocos2d::CCDictionary * animations = (cocos2d::CCDictionary*)(
        (cocos2d::CCDictionary*)(m_objectDefinitions->objectForKey(
            ((cocos2d::CCString*)objectDefinitionKeys->objectAtIndex(i))->getCString()
            )))->objectForKey("animations");
        if (animations != nullptr) {
            cocos2d::CCArray* animationKeys = animations->allKeys();
            for (unsigned int j = 0; j < animationKeys->count(); j++) {
                cocos2d::CCString* copyStr = (cocos2d::CCString*)(((cocos2d::CCDictionary *)animations->objectForKey((((cocos2d::CCString*)(animationKeys->objectAtIndex(j)))->getCString())))->objectForKey("copy"));
                if (copyStr != nullptr) {
                    animations->setObject(getGlobalAnimCopy(copyStr->getCString()), copyStr->getCString());
                }
            }
        }
    }
};  



void ObjectManager::loadCopiedSets(){
    cocos2d::CCArray* objectDefinitionKeys = m_objectDefinitions->allKeys();
    for (unsigned int i = 0; i < objectDefinitionKeys->count(); i++) {
        cocos2d::CCString* objectDefinitionName = (cocos2d::CCString*)(objectDefinitionKeys->objectAtIndex(i));
        cocos2d::CCDictionary* objectDefinition = (cocos2d::CCDictionary *)m_objectDefinitions->objectForKey(objectDefinitionName->getCString());
      
        cocos2d::CCString* objectCopy = (cocos2d::CCString*)objectDefinition->objectForKey("copy");
        cocos2d::CCString* objectReplaceTag = (cocos2d::CCString*)objectDefinition->objectForKey("replaceTag");
      
        if (objectCopy != nullptr) {
            if (objectReplaceTag != nullptr) {
              objectDefinition = (cocos2d::CCDictionary *)m_objectDefinitions->objectForKey(objectReplaceTag->getCString());
            }
            m_objectDefinitions->setObject(replaceAllOccurencesOfString(cocos2d::CCString::create("xyz"), objectCopy, objectDefinition), objectDefinitionName->getCString());
        }
    }
};


void ObjectManager::purgeObjectManager(){
    if (GLOBAL_OBJECTMANAGER != nullptr) {
        GLOBAL_OBJECTMANAGER->release();
        GLOBAL_OBJECTMANAGER = nullptr;
    }
};


cocos2d::CCDictionary* ObjectManager::replaceAllOccurencesOfString(cocos2d::CCString* name, cocos2d::CCString* replace, cocos2d::CCDictionary* dict){
    std::string strName = name->getCString();
    std::string strReplace = replace->getCString();
    cocos2d::CCDictionary * new_dict = cocos2d::CCDictionary::createWithDictionary(dict);
    new_dict->retain();
    cocos2d::CCArray* dictKeys = new_dict->allKeys();
    for (unsigned int i = 0; i < dictKeys->count(); i++) {
        cocos2d::CCString* dictKey = (cocos2d::CCString*)dictKeys->objectAtIndex(i);
        std::string dictKeyStr = dictKey->getCString();
        /* This is a mistake Robtop IDK What the fuck your doing here but calling getCString again here seems kinda redundant... */
        strName = name->getCString();
        strReplace = replace->getCString();
        size_t pos = 0;
        while ((pos = dictKeyStr.find_first_of(strName)), pos != std::string::npos) {
            dictKeyStr.replace(pos, strName.length(), strReplace);
        }

   
        if (strReplace != dictKeyStr) {    
          new_dict->setObject(new_dict->objectForKey(dictKeyStr), strReplace);
          new_dict->removeObjectForKey(dictKeyStr);
        }

    }

    dictKeys = new_dict->allKeys();
    for (unsigned int i = 0;  i < dictKeys->count(); i++) {
        cocos2d::CCString* dictKey = (cocos2d::CCString*)dictKeys->objectAtIndex(i);
      
        cocos2d::CCObject* object = (new_dict->objectForKey(dictKey->getCString()));
        if (object != nullptr) {
            
            /* I will never Understand Robtop's Underlying
             * Fuckery with using dynamic_cast here... */
            
            cocos2d::CCDictionary* dictObject = dynamic_cast<cocos2d::CCDictionary*>(object);
            
            if (dictObject == nullptr) {
                std::string dictKeyStr = dictKey->getCString();
                std::string strName = name->getCString();
                size_t pos = 0;
                while ((pos = dictKeyStr.find_first_of(strName)), pos != std::string::npos) {
                    dictKeyStr.replace(pos, strName.length(), strReplace);
                }
                new_dict->setObject(cocos2d::CCString::create(strReplace), dictKey->getCString());
            }
            else {
                new_dict->setObject(replaceAllOccurencesOfString(name,replace, dictObject), dictKey->getCString());
            }
      }
    }
    return new_dict;
};

void ObjectManager::setLoaded(char const* objectName)
{
    return m_maybeLoadedAnimations->setObject(cocos2d::CCNode::create(), objectName);
}


void ObjectManager::setup(){
   
    cocos2d::CCArray* definitionKeys = m_objectDefinitions->allKeys();
    for (unsigned int i = 0; i < definitionKeys->count(); i++) {
        std::string definition = ((cocos2d::CCString*)(definitionKeys->objectAtIndex(i)))->getCString();

        if ((definition != "GlobalAnimations") || (definition.find("xyz") != std::string::npos)){
            /* SpriteAnimationManager::createAnimations looks to be a static function here... */
            SpriteAnimationManager::createAnimations(definition);
        }
    }
};

