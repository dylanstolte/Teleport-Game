#include "scriptBuiltMap.h" 
 scriptBuiltMap::scriptBuiltMap(Engine* engine){this->engine = engine;}; 
 scriptBuiltMap::~scriptBuiltMap(){delete this->engine;}; 
 void scriptBuiltMap::load() { 
 engine->joints = (b2Joint**)b2Alloc(0 * sizeof(b2Joint*)); 
 engine->bodies = (b2Body**)b2Alloc(1 * sizeof(b2Body*)); 
 
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(7.943987846374512e+000f, 1.483801746368408e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[0] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578563690185547e-001f, -6.602773666381836e-001f);
    vs[1].Set(2.578563690185547e-001f, 5.886354446411133e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886354446411133e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602773666381836e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578563690185547e-001f, 5.886354446411133e-001f);
    vs[1].Set(-2.336411476135254e-001f, 5.886354446411133e-001f);
    vs[2].Set(-2.336411476135254e-001f, -6.602773666381836e-001f);
    vs[3].Set(2.578554153442383e-001f, -6.602773666381836e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(7.946992874145508e+000f, 1.587162685394287e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[1] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 2.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.344876289367676e+000f, -1.130397796630859e+000f);
    vs[1].Set(2.344876289367676e+000f, -1.441793441772461e-001f);
    vs[2].Set(-2.301702022552490e+000f, -1.441793441772461e-001f);
    vs[3].Set(-2.301702022552490e+000f, -1.130397796630859e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[1]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578563690185547e-001f, 5.886354446411133e-001f);
    vs[1].Set(-2.336411476135254e-001f, 5.886354446411133e-001f);
    vs[2].Set(-2.336411476135254e-001f, -6.602764129638672e-001f);
    vs[3].Set(2.578554153442383e-001f, -6.602764129638672e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[1]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578563690185547e-001f, -6.602764129638672e-001f);
    vs[1].Set(2.578563690185547e-001f, 5.886354446411133e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886354446411133e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602764129638672e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[1]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(7.943238735198975e+000f, 1.390236091613770e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[2] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578558921813965e-001f, -6.602783203125000e-001f);
    vs[1].Set(2.578558921813965e-001f, 5.886335372924805e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886335372924805e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602783203125000e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[2]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578558921813965e-001f, -6.602783203125000e-001f);
    vs[1].Set(2.578558921813965e-001f, 5.886335372924805e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886335372924805e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602783203125000e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[2]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(7.946930885314941e+000f, 1.184706497192383e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[3] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578563690185547e-001f, 5.886354446411133e-001f);
    vs[1].Set(-2.336411476135254e-001f, 5.886354446411133e-001f);
    vs[2].Set(-2.336411476135254e-001f, -6.602764129638672e-001f);
    vs[3].Set(2.578554153442383e-001f, -6.602764129638672e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[3]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578563690185547e-001f, -6.602764129638672e-001f);
    vs[1].Set(2.578563690185547e-001f, 5.886354446411133e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886354446411133e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602764129638672e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[3]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(7.949935913085938e+000f, 1.288067436218262e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[4] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578563690185547e-001f, 5.886335372924805e-001f);
    vs[1].Set(-2.336411476135254e-001f, 5.886335372924805e-001f);
    vs[2].Set(-2.336411476135254e-001f, -6.602783203125000e-001f);
    vs[3].Set(2.578554153442383e-001f, -6.602783203125000e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578563690185547e-001f, -6.602783203125000e-001f);
    vs[1].Set(2.578563690185547e-001f, 5.886335372924805e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886335372924805e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602783203125000e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[4]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(7.946181774139404e+000f, 1.091140842437744e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[5] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578558921813965e-001f, -6.602773666381836e-001f);
    vs[1].Set(2.578558921813965e-001f, 5.886344909667969e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886344909667969e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602773666381836e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[5]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578558921813965e-001f, -6.602773666381836e-001f);
    vs[1].Set(2.578558921813965e-001f, 5.886344909667969e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886344909667969e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602773666381836e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[5]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(7.943176746368408e+000f, 9.877799987792969e+000f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[6] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578558921813965e-001f, -6.602773666381836e-001f);
    vs[1].Set(2.578558921813965e-001f, 5.886344909667969e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886344909667969e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602773666381836e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[6]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.578558921813965e-001f, -6.602773666381836e-001f);
    vs[1].Set(2.578558921813965e-001f, 5.886344909667969e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886344909667969e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602773666381836e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[6]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(-1.730979919433594e+001f, -1.382857990264893e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[7] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2CircleShape shape;
    shape.m_radius = 1.614880204200745e+000f;
    shape.m_p.Set(5.194664001464844e-002f, 2.680587768554688e-002f);

    fd.shape = &shape;

    engine->bodies[7]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(-1.740609931945801e+001f, -1.377650833129883e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[8] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.613229751586914e+000f, -2.577238082885742e+000f);
    vs[1].Set(2.613229751586914e+000f, 2.577225685119629e+000f);
    vs[2].Set(-2.613229751586914e+000f, 2.577225685119629e+000f);
    vs[3].Set(-2.613229751586914e+000f, -2.577238082885742e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[8]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(1.778070068359375e+001f, -1.382857990264893e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[9] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2CircleShape shape;
    shape.m_radius = 1.614880204200745e+000f;
    shape.m_p.Set(5.194664001464844e-002f, 2.680587768554688e-002f);

    fd.shape = &shape;

    engine->bodies[9]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.768440055847168e+001f, -1.377650833129883e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[10] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.613229751586914e+000f, -2.577238082885742e+000f);
    vs[1].Set(2.613229751586914e+000f, 2.577225685119629e+000f);
    vs[2].Set(-2.613229751586914e+000f, 2.577225685119629e+000f);
    vs[3].Set(-2.613229751586914e+000f, -2.577238082885742e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[10]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.890740275382996e-001f, -1.377650833129883e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[11] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.613230228424072e+000f, 2.577225685119629e+000f);
    vs[1].Set(-2.613229751586914e+000f, 2.577225685119629e+000f);
    vs[2].Set(-2.613230228424072e+000f, -2.577238082885742e+000f);
    vs[3].Set(2.613229751586914e+000f, -2.577238082885742e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[11]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(9.853739738464355e-001f, -1.382857990264893e+001f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[12] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2CircleShape shape;
    shape.m_radius = 1.614880204200745e+000f;
    shape.m_p.Set(5.194568634033203e-002f, 2.680587768554688e-002f);

    fd.shape = &shape;

    engine->bodies[12]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(1.956760025024414e+001f, -2.066789627075195e+000f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[13] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(7.019190979003906e+001f, 5.870060443878174e+000f);
    vs[1].Set(6.687330627441406e+001f, 5.783736228942871e+000f);
    vs[2].Set(2.969630050659180e+001f, -1.260520839691162e+001f);
    vs[3].Set(2.933739852905273e+001f, -2.315887451171875e+001f);
    vs[4].Set(3.022579574584961e+001f, -2.884553337097168e+001f);
    vs[5].Set(4.846809768676758e+001f, -5.624329376220703e+001f);
    shape.Set(vs, 6);

    fd.shape = &shape;

    engine->bodies[13]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(6.699820709228516e+001f, 9.690597534179688e+000f);
    vs[1].Set(5.195399856567383e+001f, 9.689494132995605e+000f);
    vs[2].Set(5.191960525512695e+001f, 5.815049648284912e+000f);
    vs[3].Set(6.687330627441406e+001f, 5.783736228942871e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[13]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(6.687330627441406e+001f, 5.783736228942871e+000f);
    vs[1].Set(5.191960525512695e+001f, 5.815049648284912e+000f);
    vs[2].Set(2.969630050659180e+001f, -1.260520839691162e+001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[13]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(4.846809768676758e+001f, -5.624329376220703e+001f);
    vs[1].Set(3.018619537353516e+001f, -4.946685409545898e+001f);
    vs[2].Set(1.555749511718750e+001f, -4.951330947875977e+001f);
    vs[3].Set(1.555749511718750e+001f, -5.630670547485352e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[13]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(4.846809768676758e+001f, -5.624329376220703e+001f);
    vs[1].Set(3.022579574584961e+001f, -2.884553337097168e+001f);
    vs[2].Set(3.018619537353516e+001f, -4.946685409545898e+001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[13]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(3.022579574584961e+001f, -2.884553337097168e+001f);
    vs[1].Set(2.933739852905273e+001f, -2.315887451171875e+001f);
    vs[2].Set(1.389299774169922e+001f, -2.311094284057617e+001f);
    vs[3].Set(1.384009933471680e+001f, -2.898439216613770e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[13]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(5.191960525512695e+001f, 5.815049648284912e+000f);
    vs[1].Set(8.628520965576172e+000f, 5.777242183685303e+000f);
    vs[2].Set(1.228380012512207e+001f, 4.066244125366211e+000f);
    vs[3].Set(2.513529968261719e+001f, 3.637551784515381e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[13]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(5.191960525512695e+001f, 5.815049648284912e+000f);
    vs[1].Set(2.513529968261719e+001f, 3.637551784515381e+000f);
    vs[2].Set(2.969630050659180e+001f, -1.260520839691162e+001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[13]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(1.956760025024414e+001f, -2.066789627075195e+000f);
  bd.angle = 3.141592741012573e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[14] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.602855682373047e+000f, -3.767015457153320e+001f);
    vs[1].Set(2.533569335937500e+000f, -1.156237411499023e+001f);
    vs[2].Set(8.837909698486328e-001f, -4.814698696136475e+000f);
    vs[3].Set(-8.658180236816406e+000f, 1.951932787895203e+000f);
    vs[4].Set(-8.664405822753906e+000f, -6.700997924804688e+001f);
    vs[5].Set(2.552173614501953e+000f, -6.497846221923828e+001f);
    shape.Set(vs, 6);

    fd.shape = &shape;

    engine->bodies[14]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(4.731179428100586e+001f, -6.723275756835938e+001f);
    vs[1].Set(4.729659652709961e+001f, -6.523654937744141e+001f);
    vs[2].Set(2.552173614501953e+000f, -6.497846221923828e+001f);
    vs[3].Set(-8.664405822753906e+000f, -6.700997924804688e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[14]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(8.837909698486328e-001f, -4.814698696136475e+000f);
    vs[1].Set(8.387660980224609e-001f, 1.938095211982727e+000f);
    vs[2].Set(-8.658180236816406e+000f, 1.951932787895203e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[14]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.045959854125977e+001f, -1.164018917083740e+001f);
    vs[1].Set(5.166049957275391e+000f, -4.693709850311279e+000f);
    vs[2].Set(8.837909698486328e-001f, -4.814698696136475e+000f);
    vs[3].Set(2.533569335937500e+000f, -1.156237411499023e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[14]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.052519989013672e+001f, -2.906517505645752e+000f);
    vs[1].Set(5.177900314331055e+000f, -2.939791679382324e+000f);
    vs[2].Set(5.166049957275391e+000f, -4.693709850311279e+000f);
    vs[3].Set(2.045959854125977e+001f, -1.164018917083740e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[14]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.612966537475586e+000f, -3.957336807250977e+001f);
    vs[1].Set(2.602855682373047e+000f, -3.767015457153320e+001f);
    vs[2].Set(2.552173614501953e+000f, -6.497846221923828e+001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[14]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.198349761962891e+001f, -3.758257675170898e+001f);
    vs[1].Set(2.602855682373047e+000f, -3.767015457153320e+001f);
    vs[2].Set(2.612966537475586e+000f, -3.957336807250977e+001f);
    vs[3].Set(2.194519805908203e+001f, -3.958924102783203e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[14]->CreateFixture(&fd);
  }
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[9];
  jd.bodyB = engine->bodies[10];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.441716998815536e-001f, -3.693709671497345e-001f);
  jd.localAnchorB.Set(6.936070043593645e-003f, 2.154974266886711e-003f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
  jd.motorSpeed = -1.745329946279526e-001f;
  jd.maxMotorTorque = 1.800000000000000e+002f;
  engine->joints[0] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[12];
  jd.bodyB = engine->bodies[11];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.199559941887856e-001f, -8.279787749052048e-002f);
  jd.localAnchorB.Set(6.936070043593645e-003f, 2.154974266886711e-003f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
  jd.motorSpeed = -1.745329946279526e-001f;
  jd.maxMotorTorque = 1.700000000000000e+002f;
  engine->joints[1] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[7];
  jd.bodyB = engine->bodies[8];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.199559941887856e-001f, -8.279787749052048e-002f);
  jd.localAnchorB.Set(6.936070043593645e-003f, 2.154974266886711e-003f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
  jd.motorSpeed = -1.745329946279526e-001f;
  jd.maxMotorTorque = 1.500000000000000e+002f;
  engine->joints[2] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[3];
  jd.bodyB = engine->bodies[4];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(3.381098434329033e-002f, -5.562183856964111e-001f);
  jd.localAnchorB.Set(5.104831978678703e-002f, 4.637328386306763e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[3] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[5];
  jd.bodyB = engine->bodies[3];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.505262615159154e-003f, -4.567014575004578e-001f);
  jd.localAnchorB.Set(6.587909883819520e-004f, 4.630591273307800e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[4] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[2];
  jd.bodyB = engine->bodies[4];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(4.255966842174530e-002f, 4.904420971870422e-001f);
  jd.localAnchorB.Set(-6.293046288192272e-003f, -5.412643551826477e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[5] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[6];
  jd.bodyB = engine->bodies[14];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(3.424076363444328e-002f, 4.710270464420319e-001f);
  jd.localAnchorB.Set(1.165466785430908e+001f, -1.146378993988037e+001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[6] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[2];
  jd.bodyB = engine->bodies[0];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(5.586870387196541e-002f, -4.732661545276642e-001f);
  jd.localAnchorB.Set(2.718759514391422e-002f, 4.478741586208344e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[7] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[0];
  jd.bodyB = engine->bodies[1];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.018584124743938e-002f, -5.423172712326050e-001f);
  jd.localAnchorB.Set(3.777937218546867e-002f, 4.789177775382996e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[8] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[5];
  jd.bodyB = engine->bodies[6];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(5.343775078654289e-002f, 4.869407415390015e-001f);
  jd.localAnchorB.Set(3.456206247210503e-002f, -5.388407707214355e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[9] = engine->World->CreateJoint(&jd);
}
b2Free(engine->joints);
b2Free(engine->bodies);

}