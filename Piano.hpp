
#pragma once
#include "../../object/Object.hpp"
#include "../../device/Device.hpp"
#include "cinder/app/AppNative.h"
#include "../../resource/ResourceManager.hpp"


class Piano: public Object {
private:
	
	bool isHitPiano;
	bool isPlayMusicPiano;

	

public:
	Piano();

	void setup();
	void update();
	void draw();

	int getX() { return mPos.x; }

	void onCollisionUpdate(const std::shared_ptr<Object>& compare);
};
