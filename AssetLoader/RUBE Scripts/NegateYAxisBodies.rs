body[] bodies = getAllBodies();
select(bodies);

for(uint i = 0; i < bodies.length; i ++)
{

vec2 pos = bodies[i].getWorldCenter();
bodies[i].setPosition(pos.x,-pos.y);

}