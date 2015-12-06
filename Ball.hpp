
#pragma once
#include "../../object/Object.hpp"


class Ball : public Object {
private:

public:
	Ball();

	void setup();
	void update();
	void draw();

	void onCollisionUpdate(const std::shared_ptr<Object>& compare);
};