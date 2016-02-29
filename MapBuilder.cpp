#include "MapBuilder.h"

MapBuilder::MapBuilder(Engine* engine)
{
    this->engine = engine;

    controlDot1.setRadius(5);
    anchorDot1.setRadius(5);
    anchorDot2.setRadius(5);
    blackDot.setRadius(2);

    greenDot.setFillColor(sf::Color::Green);
    anchorDot1.setFillColor(sf::Color::Blue);
    anchorDot2.setFillColor(sf::Color::Blue);
    controlDot1.setFillColor(sf::Color::Cyan);
    blackDot.setFillColor(sf::Color::Black);

    blackDot.setOrigin(1,1);



//    anchorPoint1.x = 100;
//    anchorPoint1.y = 100;
//    anchorPoint2.x = 100;
//    anchorPoint2.y = 100;

};

MapBuilder::~MapBuilder() {};

void MapBuilder::render(int mouse_x, int mouse_y)
{
    //draw anchor points and mouse control point
    controlPoint1.x = mouse_x;
    controlPoint1.y = mouse_y;
    controlDot1.setPosition(controlPoint1.x,controlPoint1.y);
    engine->Window->draw(controlDot1);

    if(anchor1)
    {
        anchorDot1.setPosition(anchorPoint1.x,anchorPoint1.y);
        engine->Window->draw(anchorDot1);
    }


    if(anchor2)
    {
        anchorDot2.setPosition(anchorPoint2.x,anchorPoint2.y);
        engine->Window->draw(anchorDot2);
    }

    if(anchor1 && anchor2)
    {
        //for how many points you want to generate
        for( float i = 0 ; i <= 1.1 ; i += 0.1)
        {
            // The Green Line
            xa = getPt( anchorPoint1.x , controlPoint1.x , i );
            ya = getPt( anchorPoint1.y , controlPoint1.y , i );
            xb = getPt( controlPoint1.x , anchorPoint2.x, i );
            yb = getPt( controlPoint1.y , anchorPoint2.y , i );

//    greenDot.setPosition(xa,ya);
//    Window->draw(greenDot);
//    greenDot.setPosition(xb,yb);
//    Window->draw(greenDot);

            // The Black Dot
            curvePoint.x = getPt( xa , xb , i );
            curvePoint.y = getPt( ya , yb , i );

            //   engine->Window->mapPixelToCoords(sf::Vector2i(-curvePointPrev.x,-curvePointPrev.y));
            sf::Vector2f center(curvePoint.x, curvePoint.y);
            sf::Vector2f vec(curvePointPrev.x-curvePoint.x, curvePointPrev.y-curvePoint.y);
            float length = sqrt(vec.x * vec.x + vec.y * vec.y);

            //   std::cout << vec.x << " " << vec.y << std::endl;
            sf::Vector2f perp(-vec.y,vec.x);
            // sf::Vector2f rightperp(-vec.y,vec.x);
            //normalize?
            perp.x /= length;
            perp.y /= length;

            //top vector line
            sf::Vertex top[] =
            {
                sf::Vertex(sf::Vector2f(curvePoint.x, curvePoint.y),sf::Color::Red),
                sf::Vertex(sf::Vector2f((perp.x*20)+center.x,(perp.y)*20+center.y),sf::Color::Blue)
            };
            //bottom vector line
            sf::Vertex bottom[] =
            {
                sf::Vertex(sf::Vector2f(curvePoint.x, curvePoint.y),sf::Color::Red),
                sf::Vertex(sf::Vector2f(center.x-(perp.x*15),center.y-(perp.y)*15),sf::Color::Blue)
            };


            sf::Vertex curve[] =
            {
                sf::Vertex(sf::Vector2f(curvePoint.x, curvePoint.y),sf::Color::Green),
                sf::Vertex(sf::Vector2f(curvePointPrev.x,curvePointPrev.y),sf::Color::Green)
            };


            engine->Window->draw(top, 2, sf::Lines);
            engine->Window->draw(bottom, 2, sf::Lines);
                if(i > .1)
                    engine->Window->draw(curve, 2, sf::Lines);


            blackDot.setPosition(curvePoint.x,curvePoint.y);
            engine->Window->draw(blackDot);
            curvePointPrev = curvePoint;
        }

    }

}

int MapBuilder::getPt( int n1 , int n2 , float perc )
{
    int diff = n2 - n1;

    return n1 + ( diff * perc );
}
