//
//  Player.hpp
//  ArrowShot
//
//  Created by xixi on 16/9/17.
//
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "cocos2d.h"
USING_NS_CC;
class Player:public Sprite
{
public:
    Player();
    static Player* create(Vec2 playerPos);
    bool init(Vec2 playerPos);
private:
    Size winSize;
    Vec2 playerPos;
    Size playerSize;
};

#endif /* Player_hpp */
