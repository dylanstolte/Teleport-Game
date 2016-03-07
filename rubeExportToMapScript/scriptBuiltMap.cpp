#include "scriptBuiltMap.h" 
 scriptBuiltMap::scriptBuiltMap(Engine* engine){this->engine = engine;}; 
 scriptBuiltMap::~scriptBuiltMap(){delete this->engine;}; 
 void scriptBuiltMap::load() { 
 
engine->bodies = (b2Body**)b2Alloc(43 * sizeof(b2Body*));
engine->joints = (b2Joint**)b2Alloc(36 * sizeof(b2Joint*));
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.098179244995117e+001f, 7.962408447265625e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.098499298095703e+001f, 8.119393920898438e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692406952381134e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692406952381134e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[1]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.097928237915039e+001f, 8.200833129882812e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[2]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.097923278808594e+001f, 7.880014801025391e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    vs[0].Set(2.197163403034210e-001f, 4.692396223545074e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263544321060181e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692396223545074e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263544321060181e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[3]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.097992134094238e+001f, 8.275424194335938e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[4]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.098243141174316e+001f, 8.036990356445312e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[5]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(1.099565315246582e+001f, 7.798963165283203e+001f);
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
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(5.000000000000000e-001f, -4.762287139892578e-001f);
    vs[1].Set(5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[2].Set(-5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[3].Set(-5.000000000000000e-001f, -4.762287139892578e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[6]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.100425529479980e+001f, 8.837307739257812e+001f);
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
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(5.000000000000000e-001f, -5.172710418701172e+000f);
    vs[1].Set(5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[2].Set(-5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[3].Set(-5.000000000000000e-001f, -5.172710418701172e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[7]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.097961425781250e+001f, 8.360060119628906e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[8]->CreateFixture(&fd);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[8]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.098537445068359e+001f, 8.599440002441406e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.197182476520538e-001f, 4.692377150058746e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[9]->CreateFixture(&fd);
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
    vs[0].Set(2.197182476520538e-001f, 4.692377150058746e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[9]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.097966384887695e+001f, 8.680879211425781e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[10]->CreateFixture(&fd);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[10]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.098030281066895e+001f, 8.755470275878906e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[11]->CreateFixture(&fd);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[11]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.098217391967773e+001f, 8.442454528808594e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[12]->CreateFixture(&fd);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[12]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.098281288146973e+001f, 8.517036437988281e+001f);
  bd.angle = 3.141590118408203e+000f;
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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.197182476520538e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263475775718689e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263487100601196e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[13]->CreateFixture(&fd);
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
