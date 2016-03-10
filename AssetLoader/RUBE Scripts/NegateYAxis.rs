vertex[] verticies = getAllVertices();
select(verticies);

for(uint i = 0; i < verticies.length; i ++)
{
	verticies[i].setWorldPos(verticies[i].wpos.x,
						-(verticies[i].wpos.y));
}