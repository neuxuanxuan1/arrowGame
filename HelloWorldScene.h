#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
USING_NS_CC;
class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void addGameBg();
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
private:
    Size winSize;
    TMXTiledMap* map;
    TMXObjectGroup* objectGroup;
    float objectPosOffX;
    
};

#endif // __HELLOWORLD_SCENE_H__
