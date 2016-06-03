#ifndef BenchmarkScene_h
#define BenchmarkScene_h



#include "cocos2d.h"
using namespace cocos2d;
using namespace std;

struct BunnyObj{
    int vx,vy;
    Sprite *bunny;
};

class BenchmarkScene : public cocos2d::Layer
{
public:
    CREATE_FUNC(BenchmarkScene);
    static cocos2d::Scene* createScene();
    virtual bool init();
    
    virtual void onEnter();
    
    Sprite *bunny;
    vector<BunnyObj> allOfBunnyObjects;
    void more100Bunny();
    
    int minX;
    int maxX;
    int minY;
    int maxY;
    
private:
    void update(float deltaTime);
};


#endif //End of BenchmarkScene.h
