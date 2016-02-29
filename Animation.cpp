#include "Animation.h"
#include <iostream>
Animation::Animation() {};
Animation::~Animation() {};
Animation::Animation(int totalFrames,sf::Texture texture)
{
    this->totalFrames = totalFrames;
    this->animationTexture = texture;
    this->currentFrame = 0;
};

void Animation::setTexture(sf::Texture texture) {animationTexture = texture;};

void Animation::start()
{
    isRunning = true;

};

void Animation::restart()
{
    currentFrame = 0;
};

void Animation::stop()
{
    isRunning = false;
};

sf::IntRect Animation::nextFrame()
{
    float elapsed = clock.restart().asSeconds();//
    frameCounter += elapsed;
    start();
    if(frameCounter >= switchFrame/frameSpeed)
    {
        // std::cout << "frame counter:  " << frameCounter << "  Frame speed: " << switchFrame/frameSpeed << "  clock.restart.asSeconds: " << elapsed << std::endl;
        //check to restart animation loop
        if(currentFrame >= totalFrames)
        {
            currentFrame = 0;
            stop();
        }

        // sf::IntRect frame = sf::IntRect(framePos.x + flip == false ? (frameSize.x*currentFrame) : -(frameSize.x*currentFrame),framePos.y,flip == false ? frameSize.x : -(frameSize.x),frameSize.y);
        frame = sf::IntRect(framePos.x + frameSize.x*currentFrame,framePos.y,frameSize.x,frameSize.y);
        currentFrame++;
        frameCounter = 0;
    }

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
