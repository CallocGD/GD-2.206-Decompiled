
#include "includes.h"


bool GJRewardObject::canEncode()
{
    return true;
}


GJRewardObject* GJRewardObject::create()
{
    return create(SpecialRewardItem::None, 0, 0);
}


GJRewardObject* GJRewardObject::create(SpecialRewardItem specialRewardItem, int total, int itemID)
{
    GJRewardObject* ro = new GJRewardObject();
    if (ro != nullptr && ro->init(specialRewardItem, total, itemID)){
        ro->autorelease();
        return ro;
    }
    CC_SAFE_DELETE(ro);
    return nullptr;
}



GJRewardObject* GJRewardObject::createItemUnlock(UnlockType itemtype, int itemID){
    GJRewardObject *ro = create(SpecialRewardItem::CustomItem, 1, itemID);
    ro->m_unlockType = itemtype;
    return ro;
};


GJRewardObject * GJRewardObject::createWithCoder(DS_Dictionary *dsdict)
{
    auto ro = create();
    ro->dataLoaded(dsdict);
    return ro;
}

void __thiscall GJRewardObject::dataLoaded(DS_Dictionary *dsdict) {
    m_specialRewardItem = static_cast<SpecialRewardItem>(dsdict->getIntegerForKey("1"));
    m_itemID = dsdict->getIntegerForKey("2");
    m_total = dsdict->getIntegerForKey("3");
    m_unlockType = static_cast<UnlockType>(dsdict->getIntegerForKey("4"));
}


void GJRewardObject::encodeWithCoder(DS_Dictionary* dsdict)
{
    dsdict->setIntegerForKey("kCEK", 9);
    dsdict->setIntegerForKey("1", static_cast<int>(m_specialRewardItem));
    dsdict->setIntegerForKey("2", m_itemID);
    dsdict->setIntegerForKey("3", m_total);
    dsdict->setIntegerForKey("4", static_cast<int>(m_unlockType));
}   


bool GJRewardObject::init(SpecialRewardItem specialRewardItem, int total, int itemID){
    this->m_specialRewardItem = specialRewardItem;
    this->m_itemID = itemID;
    this->m_total = total;
    return true;
}


bool GJRewardObject::isSpecialType()
{
    unsigned int item = (int)(m_specialRewardItem) - 1;
    return (item < 0xe) && 1 << (item & 0xff) & 0x3e3f;
}
