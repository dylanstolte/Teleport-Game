vertex[] verticies = getAllVertices();
select(verticies);

for(uint i = 0; i < verticies.length; i ++)
{
	fixture fix = verticies[i].getFixture();
	body bod = fix.getBody();
	vec2 pos = bod.getWorldCenter();
	verticies[i].setWorldPos(verticies[i].wpos.x,
					-(verticies[i].wpos.y));
}

image[] img = getAllImages();
for(uint i = 0; i < img.length; i ++)
{
//	img[i].setAngle(img[i].getAngle() + 180);
}
