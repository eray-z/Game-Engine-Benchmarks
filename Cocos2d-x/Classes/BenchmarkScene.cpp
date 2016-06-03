
#include "BenchmarkScene.h"

USING_NS_CC;


cocos2d::Scene* BenchmarkScene::createScene()
{
    auto scene = Scene::create();
    auto layer = BenchmarkScene::create(); 
    scene->addChild(layer);
    
    return scene; 
    
}
bool BenchmarkScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    bunny=Sprite::create("wabbit_alpha.png");
    this->addChild(bunny);
    
    Size size=Director::getInstance()->getVisibleSize();
    Vec2 origin=Director::getInstance()->getVisibleOrigin();
    
    minX=origin.x+bunny->getBoundingBox().size.width;
    maxX=origin.x+size.width-bunny->getBoundingBox().size.width;
    minY=origin.y+bunny->getBoundingBox().size.height;
    maxY=origin.y+size.height-bunny->getBoundingBox().size.height;
    
    CCLOG("minX %d minY %d | maxX %d maxY %d",minX,minY,maxX,maxY);
    CCLOG("randomPosX %d",RandomHelper::random_int(minX, maxX));
    CCLOG("randomPosX %d",RandomHelper::random_int(minY, maxY));
    
    return true; 
    
}
void BenchmarkScene::onEnter(){
    Layer::onEnter();
    string tempStr="Bunny Count: %d";
    auto bunnyInfo=Label::createWithSystemFont(StringUtils::format(tempStr.c_str(),0), "Arial", 16);
    bunnyInfo->setAlignment(TextHAlignment::RIGHT);
    bunnyInfo->setPositionY(maxY-bunnyInfo->getContentSize().height);
    bunnyInfo->setPositionX(maxX-bunnyInfo->getContentSize().width);
    this->addChild(bunnyInfo);
    bunnyInfo->setGlobalZOrder(99999999999999);
    
    auto listener=EventListenerTouchOneByOne::create();
    listener->onTouchBegan=[](Touch *touch,Event *event){
        return true;
    };
    listener->onTouchEnded=[=](Touch *touch,Event *event){
        this->more100Bunny();
        int bunnyCount=(int)allOfBunnyObjects.size();
        bunnyInfo->setString(StringUtils::format(tempStr.c_str(),bunnyCount));
    };
    _eventDispatcher->addEventListenerWithFixedPriority(listener, 1);
    this->scheduleUpdate();
    
}
void BenchmarkScene::more100Bunny(){
    for(int i=0;i<100;i++){
        BunnyObj bObj;
        bObj.bunny=Sprite::createWithTexture(bunny->getTexture());
        bObj.bunny->setPosition(RandomHelper::random_int(minX, maxX),RandomHelper::random_int(minY, maxY));
        bObj.vx=RandomHelper::random_int(5, 40)-20;
        bObj.vy=RandomHelper::random_int(5, 40)-20;
        this->addChild(bObj.bunny);
        allOfBunnyObjects.push_back(bObj);
    }
}

void BenchmarkScene::update(float deltaTime){
    Layer::update(deltaTime);
    for(BunnyObj &nBunny:allOfBunnyObjects){
        int n_posX=nBunny.bunny->getPositionX()+nBunny.vx;
        int n_posY=nBunny.bunny->getPositionY()+nBunny.vy;
        if(n_posX<minX || n_posX>maxX){
            nBunny.vx=-nBunny.vx;
        }
        if(n_posY<minY || n_posY>maxY){
            nBunny.vy=-nBunny.vy;
        }
        nBunny.bunny->setPositionX(nBunny.bunny->getPositionX()+nBunny.vx);
        nBunny.bunny->setPositionY(nBunny.bunny->getPositionY()+nBunny.vy);
        
    }
}