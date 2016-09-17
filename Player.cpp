//
//  Player.cpp
//  ArrowShot
//
//  Created by xixi on 16/9/17.
//
//

#include "Player.hpp"

Player* Player::create(Vec2 playerPos){
    Player* pRet=new Player();
    if(pRet && pRet->init(playerPos))
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        delete pRet;
        pRet=nullptr;
        return nullptr;
    }
}
bool Player::init(cocos2d::Vec2 playerPos){
    if (!Sprite::init()) {
        return false;
    }
    winSize=Director::getInstance()->getVisibleSize();
    this->playerPos=playerPos;
    
    return true;
}
