#include "Animation.h"

Animation::Animation(){};
Animation::~Animation(){};
Animation::Animation(int totalFrames,sf::Texture texture)
{
    this->totalFrames = totalFrames;
    this->animationTexture = texture;
    this->currentFrame = 0;
};

void Animation::setTexture(sf::Texture texture){};

void Animation::restart(){};

void Animation::stop(){};

void Animation::nextFrame(){};

void Animation::previousFrame(){};
