#ifndef __TEST_H__
#define __TEST_H__

#include "cocos2d.h"

USING_NS_CC;

class Test : public cocos2d::Layer {
public:
	static cocos2d::Scene* createScene();
	static Test* create(PhysicsWorld* pw);
	virtual bool init(PhysicsWorld* pw);
	void updateTime(float dt);
	void setStartTime();
	float getTouchTime();
	void touchEvent();
	void contactEvent();
	Vec2 AIselectTarget();
	void AIshoot();
	void playShoot();
	void doPause();

	Vec2 touchLocation, AItarget;
	bool isTouch, isHit;
	cocos2d::Label *scoreLabel, *timeLabel, *testLabel;
	int playScore, AIScore;
	Sprite *arrow, *background, *shooter, *AIshooter;
private:
	Size visibleSize;
	Sprite *gift, *AIgift;
	float currentTime, startTime;
	float AIshootTime;
	EventListenerTouchOneByOne* touchListener;
};

#endif // !__TEST_H__

