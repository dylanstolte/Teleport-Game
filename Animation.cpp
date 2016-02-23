#include "Animation.h"

Animation::Animation() {};
Animation::~Animation() {};
Animation::Animation(int totalFrames,sf::Texture texture)
{
    this->totalFrames = totalFrames;
    this->animationTexture = texture;
    this->currentFrame = 0;
};

void Animation::setTexture(sf::Texture texture) {};

void Animation::start() {};

void Animation::stop() {};

sf::IntRect Animation::nextFrame()
{

    if(currentFrame >= totalFrames)
        currentFrame = 0;
   // sf::IntRect frame = sf::IntRect(framePos.x + flip == false ? (frameSize.x*currentFrame) : -(frameSize.x*currentFrame),framePos.y,flip == false ? frameSize.x : -(frameSize.x),frameSize.y);
    sf::IntRect frame = sf::IntRect(framePos.x + frameSize.x*currentFrame,framePos.y,frameSize.x,frameSize.y);

    currentFrame++;
    return frame;
};

void Animation::previousFrame() {};

void Animation::setFrame(int x_pos, int y_pos,int x_size, int y_size)
{
    framePos.x = x_pos;
    framePos.y = y_pos;
    frameSize.x = x_size;
    frameSize.y = y_size;
};
