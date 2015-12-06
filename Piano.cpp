
#include "Piano.hpp"


Piano::Piano() {
	mPos = ci::Vec3f(350, 0, 0);
	mSize = ci::Vec3f(50, 50, 2);

	isHitPiano = false;
	isPlayMusicPiano = false;
	
	//State::Active;
	setColliderType(Collider::Rect);
}

void Piano::setup(){}

void Piano::update() {

	if (isPlayMusicPiano)
	{
		//‰¼
		//dowa::ResourceManager::audio().get(CinderellaAudioKey::Town).bgm->enable();
		}
	
	

}

void Piano::draw() {
	ci::gl::pushModelView();
	ci::gl::translate(mPos);
	ci::gl::color(1, 0, 0);
	ci::gl::drawCube(ci::Vec3f::zero(), mSize);
	ci::gl::popModelView();

	if (isPlayMusicPiano)
	{
	//	dowa::ResourceManager::audio().get(CinderellaAudioKey::Town).bgm->enable();
		ci::gl::pushModelView();
		ci::gl::translate(mPos);
		ci::gl::color(1, 1, 0);
		ci::gl::drawCube(ci::Vec3f::zero(), mSize);
		ci::gl::popModelView();
		
	}


}


void Piano::onCollisionUpdate(const std::shared_ptr<Object>& compare) {
	
	

	if (compare->getName() == "Ball")
	{
		isHitPiano = true;
		isPlayMusicPiano = true;
	}
	
//	compare->setState(State::Active);
	
}