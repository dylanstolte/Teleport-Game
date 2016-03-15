vertex[] verticies = getAllVertices();
select(verticies);

for(uint i = 0; i < verticies.length; i ++)
{
<<<<<<< HEAD
	fixture tempFix = verticies[i].getFixture();
	body tempBody = tempFix.getBody();
	vec2 posBody = tempBody.getWorldCenter();

	verticies[i].setWorldPos(verticies[i].wpos.x,
						-(verticies[i].wpos.y) + posBody.y*2 );
}
=======
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
>>>>>>> dace70afd60b65a76d1b47e45eb4b72b91f08c17
