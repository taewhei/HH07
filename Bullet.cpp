#include "Bullet.h"
#include"InputHandler.h"


Bullet::Bullet(const LoaderParams* pParams) : SDLGameObject(pParams)
{
}
void Bullet::draw()
{
	SDLGameObject::draw(); // we now use SDLGameObject
}
void Bullet::update()
{
	//m_position.setX(m_position.getX() + 1);
	//m_position.setY(m_position.getY() + 1);
	//
	//m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
	m_velocity.setX(1);
	SDLGameObject::update();
}

void Bullet::clean()
{
}
