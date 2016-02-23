#ifndef ANIMATION_H_INCLUDED
#define ANIMATION_H_INCLUDED

#include <SFML/graphics.hpp>

class Animation{

public:
Animation();
Animation(int totalFrame,sf::Texture texture);
~Animation();
bool flip = false;
bool isRunning = false;
int currentFrame = 0;
int totalFrames;
sf::Texture animationTexture;
sf::Vector2i frameSize;
sf::Vector2i framePos;
void setTexture(sf::Texture texture);
void start();
void stop();
sf::IntRect nextFrame();
void previousFrame();
void setFrame(int x_pos, int y_pos,int x_size, int y_size);

};
#endif // ANIMATION_H_INCLUDED
