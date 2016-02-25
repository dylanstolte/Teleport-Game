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
float runningTime = 0;
float totalTime = 5;
sf::IntRect frame;
   	//THE MAGICAL CLOCK
    sf::Clock clock;
    float frameCounter = 0;
    float switchFrame = 1;
    float frameSpeed = 8;

sf::Texture animationTexture;
sf::Vector2i frameSize;
sf::Vector2i framePos;

void setTexture(sf::Texture texture);
void start();
void stop();
void restart();
sf::IntRect nextFrame();
void previousFrame();
void setFrame(int x_pos, int y_pos,int x_size, int y_size);

};
#endif // ANIMATION_H_INCLUDED
