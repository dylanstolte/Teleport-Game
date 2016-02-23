#ifndef ANIMATION_H_INCLUDED
#define ANIMATION_H_INCLUDED

#include <SFML/graphics.hpp>

class Animation{

public:
Animation();
Animation(int totalFrame,sf::Texture texture);
~Animation();

int currentFrame;
int totalFrames;
sf::Texture animationTexture;

void setTexture(sf::Texture texture);
//void start();
void restart();
void stop();
void nextFrame();
void previousFrame();

};
#endif // ANIMATION_H_INCLUDED
