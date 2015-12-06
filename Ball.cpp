
#include "Ball.hpp"
#include "../../object/Task.hpp"
#include "../../device/Device.hpp"


Ball::Ball() {
	mPos = ci::Vec3f(0, 0, 0);
	mSize = ci::Vec3f(50, 50, 2);

	setColliderType(Collider::Rect);

}

void Ball::setup(){}

void Ball::update() {
	static bool touch = true;
	mPos.x += touch ? 1 : 0;

	if (!dowa::Device::isTouchBegan()) return;
	touch = !touch;
}

void Ball::draw() {
	ci::gl::pushModelView();
	ci::gl::translate(mPos);
	ci::gl::color(1, 1, 1);
	ci::gl::drawCube(ci::Vec3f::zero(), mSize);
	ci::gl::popModelView();
}


void Ball::onCollisionUpdate(const std::shared_ptr<Object>& compare) {
	compare->setState(State::Active);

}