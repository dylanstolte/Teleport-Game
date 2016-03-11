vertex[] verticies = getAllVertices();
select(verticies);

for(uint i = 0; i < verticies.length; i ++)
{
	fixture tempFix = verticies[i].getFixture();
	body tempBody = tempFix.getBody();
	vec2 posBody = tempBody.getWorldCenter();

	verticies[i].setWorldPos(verticies[i].wpos.x,
						-(verticies[i].wpos.y) + posBody.y*2 );
}