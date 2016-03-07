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
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.197182476520538e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263475775718689e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263487100601196e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[13]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(2.862452125549316e+001f, 2.641697883605957e+001f);
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
    vs[0].Set(5.000000000000000e-001f, -4.762287139892578e-001f);
    vs[1].Set(5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[2].Set(-5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[3].Set(-5.000000000000000e-001f, -4.762287139892578e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[14]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.860810089111328e+001f, 2.722749519348145e+001f);
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
  engine->bodies[15] = engine->World->CreateBody(&bd);

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

    engine->bodies[15]->CreateFixture(&fd);
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

    engine->bodies[15]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.861386108398438e+001f, 2.962128639221191e+001f);
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
  engine->bodies[16] = engine->World->CreateBody(&bd);

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

    engine->bodies[16]->CreateFixture(&fd);
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
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[16]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.860815048217773e+001f, 3.043567848205566e+001f);
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
  engine->bodies[17] = engine->World->CreateBody(&bd);

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

    engine->bodies[17]->CreateFixture(&fd);
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

    engine->bodies[17]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.860878944396973e+001f, 3.118159294128418e+001f);
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
  engine->bodies[18] = engine->World->CreateBody(&bd);

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

    engine->bodies[18]->CreateFixture(&fd);
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

    engine->bodies[18]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.861066055297852e+001f, 2.805143547058105e+001f);
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
  engine->bodies[19] = engine->World->CreateBody(&bd);

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

    engine->bodies[19]->CreateFixture(&fd);
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

    engine->bodies[19]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.861129951477051e+001f, 2.879725265502930e+001f);
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
  engine->bodies[20] = engine->World->CreateBody(&bd);

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

    engine->bodies[20]->CreateFixture(&fd);
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

    engine->bodies[20]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.861168098449707e+001f, 3.359770965576172e+001f);
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
  engine->bodies[21] = engine->World->CreateBody(&bd);

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
    vs[3].Set(2.197156548500061e-001f, -5.263487100601196e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[21]->CreateFixture(&fd);
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
    vs[0].Set(2.197182476520538e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263475775718689e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263487100601196e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[21]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.861424255371094e+001f, 3.442174530029297e+001f);
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
  engine->bodies[22] = engine->World->CreateBody(&bd);

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

    engine->bodies[22]->CreateFixture(&fd);
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

    engine->bodies[22]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.860917091369629e+001f, 3.598205184936523e+001f);
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
  engine->bodies[23] = engine->World->CreateBody(&bd);

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

    engine->bodies[23]->CreateFixture(&fd);
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

    engine->bodies[23]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.860853195190430e+001f, 3.523613739013672e+001f);
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
  engine->bodies[24] = engine->World->CreateBody(&bd);

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

    engine->bodies[24]->CreateFixture(&fd);
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

    engine->bodies[24]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.860848236083984e+001f, 3.202795028686523e+001f);
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
  engine->bodies[25] = engine->World->CreateBody(&bd);

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

    engine->bodies[25]->CreateFixture(&fd);
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

    engine->bodies[25]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.861104202270508e+001f, 3.285189056396484e+001f);
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
  engine->bodies[26] = engine->World->CreateBody(&bd);

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

    engine->bodies[26]->CreateFixture(&fd);
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

    engine->bodies[26]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.863312339782715e+001f, 3.680042648315430e+001f);
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
  engine->bodies[27] = engine->World->CreateBody(&bd);

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

    engine->bodies[27]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.039699554443359e+000f, 6.052334213256836e+001f);
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
  engine->bodies[28] = engine->World->CreateBody(&bd);

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
    vs[1].Set(-1.990830600261688e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[28]->CreateFixture(&fd);
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
    vs[1].Set(-1.990830600261688e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197147011756897e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[28]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.042260169982910e+000f, 6.134727859497070e+001f);
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
  engine->bodies[29] = engine->World->CreateBody(&bd);

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
    vs[0].Set(1.998039841651917e+000f, -1.149344369769096e-001f);
    vs[1].Set(-1.961250185966492e+000f, -1.149354949593544e-001f);
    vs[2].Set(-1.961249828338623e+000f, -9.011178612709045e-001f);
    vs[3].Set(1.998039722442627e+000f, -9.011168479919434e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[29]->CreateFixture(&fd);
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
    vs[0].Set(2.197163403034210e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990830600261688e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197147011756897e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[29]->CreateFixture(&fd);
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
    vs[0].Set(2.197163403034210e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990830600261688e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[29]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.039059638977051e+000f, 5.977743148803711e+001f);
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
  engine->bodies[30] = engine->World->CreateBody(&bd);

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
    vs[1].Set(-1.990830600261688e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[30]->CreateFixture(&fd);
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
    vs[1].Set(-1.990830600261688e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[30]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.042209625244141e+000f, 5.813900375366211e+001f);
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
  engine->bodies[31] = engine->World->CreateBody(&bd);

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
    vs[0].Set(2.197172939777374e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990830600261688e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263475775718689e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263487100601196e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[31]->CreateFixture(&fd);
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
    vs[0].Set(2.197175621986389e-001f, -5.263487100601196e-001f);
    vs[1].Set(2.197172939777374e-001f, 4.692453444004059e-001f);
    vs[2].Set(-1.990830600261688e-001f, 4.692464172840118e-001f);
    vs[3].Set(-1.990818381309509e-001f, -5.263475775718689e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[31]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.044770240783691e+000f, 5.896303558349609e+001f);
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
  engine->bodies[32] = engine->World->CreateBody(&bd);

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
    vs[0].Set(2.197172939777374e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990830600261688e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263487100601196e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[32]->CreateFixture(&fd);
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
    vs[0].Set(2.197175621986389e-001f, -5.263487100601196e-001f);
    vs[1].Set(2.197172939777374e-001f, 4.692415297031403e-001f);
    vs[2].Set(-1.990830600261688e-001f, 4.692426025867462e-001f);
    vs[3].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[32]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.041569709777832e+000f, 5.739318466186523e+001f);
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
  engine->bodies[33] = engine->World->CreateBody(&bd);

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
    vs[0].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    vs[1].Set(2.197172939777374e-001f, 4.692453444004059e-001f);
    vs[2].Set(-1.990821063518524e-001f, 4.692464172840118e-001f);
    vs[3].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[33]->CreateFixture(&fd);
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
    vs[0].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    vs[1].Set(2.197172939777374e-001f, 4.692453444004059e-001f);
    vs[2].Set(-1.990821063518524e-001f, 4.692464172840118e-001f);
    vs[3].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[33]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.039010047912598e+000f, 5.656924819946289e+001f);
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
  engine->bodies[34] = engine->World->CreateBody(&bd);

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
    vs[1].Set(-1.990830600261688e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[34]->CreateFixture(&fd);
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
    vs[1].Set(-1.990830600261688e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[34]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
<<<<<<< HEAD
  bd.type = b2BodyType(2);
  bd.position.Set(7.943987846374512e+000f, 1.483801746368408e+001f);
=======
  bd.type = b2BodyType(0);
<<<<<<< HEAD
  bd.position.Set(-1.347869968414307e+001f, 3.767120742797852e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
  bd.position.Set(-1.730982971191406e+001f, -4.560126495361328e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  bd.angle = 3.141592741012573e+000f;
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[35] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
<<<<<<< HEAD
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
=======
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2CircleShape shape;
<<<<<<< HEAD
    shape.m_radius = 1.287333250045776e+000f;
    shape.m_p.Set(4.426294192671776e-002f, 2.137363143265247e-002f);
=======
    shape.m_radius = 1.801556944847107e+000f;
    shape.m_p.Set(5.194664001464844e-002f, 2.990341186523438e-002f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651

    fd.shape = &shape;

    engine->bodies[35]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
<<<<<<< HEAD
  bd.position.Set(-1.356079959869385e+001f, 3.771271896362305e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
<<<<<<< HEAD
  bd.position.Set(7.946992874145508e+000f, 1.587162685394287e+001f);
=======
  bd.position.Set(-1.740612983703613e+001f, -4.554317474365234e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  bd.angle = 3.141592741012573e+000f;
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[36] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
<<<<<<< HEAD
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
=======
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.226700305938721e+000f, -2.054498672485352e+000f);
    vs[1].Set(2.226699352264404e+000f, 2.054479598999023e+000f);
    vs[2].Set(-2.226700305938721e+000f, 2.054479598999023e+000f);
    vs[3].Set(-2.226699352264404e+000f, -2.054498672485352e+000f);
=======
<<<<<<< HEAD
    vs[0].Set(2.578563690185547e-001f, -6.602764129638672e-001f);
    vs[1].Set(2.578563690185547e-001f, 5.886354446411133e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886354446411133e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602764129638672e-001f);
=======
    vs[0].Set(2.613233566284180e+000f, -2.875144958496094e+000f);
    vs[1].Set(2.613233566284180e+000f, 2.875141143798828e+000f);
    vs[2].Set(-2.613233566284180e+000f, 2.875141143798828e+000f);
    vs[3].Set(-2.613235473632812e+000f, -2.875144958496094e+000f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[36]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
<<<<<<< HEAD
  bd.type = b2BodyType(2);
  bd.position.Set(7.943238735198975e+000f, 1.390236091613770e+001f);
=======
  bd.type = b2BodyType(0);
<<<<<<< HEAD
  bd.position.Set(1.642140007019043e+001f, 3.767120742797852e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
  bd.position.Set(1.778065681457520e+001f, -4.560126495361328e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  bd.angle = 3.141592741012573e+000f;
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[37] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
<<<<<<< HEAD
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
=======
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2CircleShape shape;
<<<<<<< HEAD
    shape.m_radius = 1.287333250045776e+000f;
    shape.m_p.Set(4.426198825240135e-002f, 2.137363143265247e-002f);
=======
    shape.m_radius = 1.801556944847107e+000f;
    shape.m_p.Set(5.194664001464844e-002f, 2.990341186523438e-002f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651

    fd.shape = &shape;

    engine->bodies[37]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
<<<<<<< HEAD
  bd.position.Set(1.633939933776855e+001f, 3.771271896362305e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
<<<<<<< HEAD
  bd.position.Set(7.946930885314941e+000f, 1.184706497192383e+001f);
=======
  bd.position.Set(1.768435668945312e+001f, -4.554317474365234e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  bd.angle = 3.141592741012573e+000f;
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[38] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
<<<<<<< HEAD
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
=======
    fd.isSensor = bool(0);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.226700305938721e+000f, -2.054498672485352e+000f);
    vs[1].Set(2.226699352264404e+000f, 2.054479598999023e+000f);
    vs[2].Set(-2.226700305938721e+000f, 2.054479598999023e+000f);
    vs[3].Set(-2.226699352264404e+000f, -2.054498672485352e+000f);
=======
<<<<<<< HEAD
    vs[0].Set(2.578563690185547e-001f, -6.602764129638672e-001f);
    vs[1].Set(2.578563690185547e-001f, 5.886354446411133e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886354446411133e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602764129638672e-001f);
=======
    vs[0].Set(2.613233566284180e+000f, -2.875144958496094e+000f);
    vs[1].Set(2.613233566284180e+000f, 2.875141143798828e+000f);
    vs[2].Set(-2.613234519958496e+000f, 2.875141143798828e+000f);
    vs[3].Set(-2.613234519958496e+000f, -2.875144958496094e+000f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[38]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
<<<<<<< HEAD
  bd.position.Set(2.028290033340454e+000f, 3.771271896362305e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
<<<<<<< HEAD
  bd.position.Set(7.949935913085938e+000f, 1.288067436218262e+001f);
=======
  bd.position.Set(8.890736103057861e-001f, -4.554317474365234e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  bd.angle = 3.141592741012573e+000f;
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  engine->bodies[39] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
<<<<<<< HEAD
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
<<<<<<< HEAD
    vs[0].Set(2.226700544357300e+000f, -2.054498672485352e+000f);
    vs[1].Set(2.226699590682983e+000f, 2.054479598999023e+000f);
    vs[2].Set(-2.226700544357300e+000f, 2.054479598999023e+000f);
    vs[3].Set(-2.226699590682983e+000f, -2.054498672485352e+000f);
=======
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
=======
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.613230228424072e+000f, 2.577225685119629e+000f);
    vs[1].Set(-2.613229751586914e+000f, 2.577225685119629e+000f);
    vs[2].Set(-2.613230228424072e+000f, -2.577238082885742e+000f);
    vs[3].Set(2.613229751586914e+000f, -2.577238082885742e+000f);
=======
    vs[0].Set(2.613233804702759e+000f, 2.875141143798828e+000f);
    vs[1].Set(-2.613234281539917e+000f, 2.875141143798828e+000f);
    vs[2].Set(-2.613234758377075e+000f, -2.875144958496094e+000f);
    vs[3].Set(2.613233327865601e+000f, -2.875144958496094e+000f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 4);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[39]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[11]->CreateFixture(&fd);
=======
    engine->bodies[4]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
<<<<<<< HEAD
  bd.position.Set(2.110349893569946e+000f, 3.767120742797852e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
<<<<<<< HEAD
  bd.position.Set(9.853739738464355e-001f, -1.382857990264893e+001f);
=======
  bd.position.Set(9.853737354278564e-001f, -4.560126495361328e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  bd.angle = 3.141592741012573e+000f;
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
<<<<<<< HEAD
  engine->bodies[40] = engine->World->CreateBody(&bd);
=======
<<<<<<< HEAD
  engine->bodies[12] = engine->World->CreateBody(&bd);
=======
  engine->bodies[5] = engine->World->CreateBody(&bd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651

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
<<<<<<< HEAD
    shape.m_radius = 1.287333250045776e+000f;
    shape.m_p.Set(4.426222667098045e-002f, 2.137363143265247e-002f);

    fd.shape = &shape;

    engine->bodies[40]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    shape.m_radius = 1.614880204200745e+000f;
    shape.m_p.Set(5.194568634033203e-002f, 2.680587768554688e-002f);

    fd.shape = &shape;

    engine->bodies[12]->CreateFixture(&fd);
=======
    shape.m_radius = 1.801556944847107e+000f;
    shape.m_p.Set(5.194568634033203e-002f, 2.990341186523438e-002f);

    fd.shape = &shape;

    engine->bodies[5]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
<<<<<<< HEAD
  bd.position.Set(1.794400024414062e+001f, 4.704735183715820e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
<<<<<<< HEAD
  bd.position.Set(1.956760025024414e+001f, -2.066789627075195e+000f);
=======
  bd.position.Set(1.956759071350098e+001f, -3.247980117797852e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  bd.angle = 3.141592741012573e+000f;
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
<<<<<<< HEAD
  engine->bodies[41] = engine->World->CreateBody(&bd);
=======
<<<<<<< HEAD
  engine->bodies[13] = engine->World->CreateBody(&bd);
=======
  engine->bodies[6] = engine->World->CreateBody(&bd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651

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
<<<<<<< HEAD
    vs[0].Set(5.980969619750977e+001f, 4.679419994354248e+000f);
    vs[1].Set(5.698189926147461e+001f, 4.610599040985107e+000f);
    vs[2].Set(2.530390167236328e+001f, -1.004845237731934e+001f);
    vs[3].Set(2.499800300598145e+001f, -1.846156501770020e+001f);
    vs[4].Set(2.575500297546387e+001f, -2.299475860595703e+001f);
    vs[5].Set(4.129910278320312e+001f, -4.483541488647461e+001f);
=======
<<<<<<< HEAD
    vs[0].Set(7.019190979003906e+001f, 5.870060443878174e+000f);
    vs[1].Set(6.687330627441406e+001f, 5.783736228942871e+000f);
    vs[2].Set(2.969630050659180e+001f, -1.260520839691162e+001f);
    vs[3].Set(2.933739852905273e+001f, -2.315887451171875e+001f);
    vs[4].Set(3.022579574584961e+001f, -2.884553337097168e+001f);
    vs[5].Set(4.846809768676758e+001f, -5.624329376220703e+001f);
=======
    vs[0].Set(7.019190216064453e+001f, 6.548608779907227e+000f);
    vs[1].Set(6.687325286865234e+001f, 6.452302932739258e+000f);
    vs[2].Set(2.969633674621582e+001f, -1.406232452392578e+001f);
    vs[3].Set(2.933740806579590e+001f, -2.583588027954102e+001f);
    vs[4].Set(3.022578239440918e+001f, -3.217989730834961e+001f);
    vs[5].Set(4.846809768676758e+001f, -6.274474716186523e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 6);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[41]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[13]->CreateFixture(&fd);
=======
    engine->bodies[6]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(5.708839797973633e+001f, 7.725031852722168e+000f);
    vs[1].Set(4.426939773559570e+001f, 7.724157333374023e+000f);
    vs[2].Set(4.424010467529297e+001f, 4.635560989379883e+000f);
    vs[3].Set(5.698189926147461e+001f, 4.610599040985107e+000f);
=======
<<<<<<< HEAD
    vs[0].Set(6.699820709228516e+001f, 9.690597534179688e+000f);
    vs[1].Set(5.195399856567383e+001f, 9.689494132995605e+000f);
    vs[2].Set(5.191960525512695e+001f, 5.815049648284912e+000f);
    vs[3].Set(6.687330627441406e+001f, 5.783736228942871e+000f);
=======
    vs[0].Set(6.699818420410156e+001f, 1.081078338623047e+001f);
    vs[1].Set(5.195402526855469e+001f, 1.080955314636230e+001f);
    vs[2].Set(5.191959381103516e+001f, 6.487239837646484e+000f);
    vs[3].Set(6.687325286865234e+001f, 6.452302932739258e+000f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 4);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[41]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[13]->CreateFixture(&fd);
=======
    engine->bodies[6]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(5.698189926147461e+001f, 4.610599040985107e+000f);
    vs[1].Set(4.424010467529297e+001f, 4.635560989379883e+000f);
    vs[2].Set(2.530390167236328e+001f, -1.004845237731934e+001f);
=======
<<<<<<< HEAD
    vs[0].Set(6.687330627441406e+001f, 5.783736228942871e+000f);
    vs[1].Set(5.191960525512695e+001f, 5.815049648284912e+000f);
    vs[2].Set(2.969630050659180e+001f, -1.260520839691162e+001f);
=======
    vs[0].Set(6.687325286865234e+001f, 6.452302932739258e+000f);
    vs[1].Set(5.191959381103516e+001f, 6.487239837646484e+000f);
    vs[2].Set(2.969633674621582e+001f, -1.406232452392578e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 3);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[41]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[13]->CreateFixture(&fd);
=======
    engine->bodies[6]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(4.129910278320312e+001f, -4.483541488647461e+001f);
    vs[1].Set(2.572130393981934e+001f, -3.943346405029297e+001f);
    vs[2].Set(1.325640869140625e+001f, -3.947051239013672e+001f);
    vs[3].Set(1.325640678405762e+001f, -4.488602828979492e+001f);
=======
<<<<<<< HEAD
    vs[0].Set(4.846809768676758e+001f, -5.624329376220703e+001f);
    vs[1].Set(3.018619537353516e+001f, -4.946685409545898e+001f);
    vs[2].Set(1.555749511718750e+001f, -4.951330947875977e+001f);
    vs[3].Set(1.555749511718750e+001f, -5.630670547485352e+001f);
=======
    vs[0].Set(4.846809768676758e+001f, -6.274474716186523e+001f);
    vs[1].Set(3.018615531921387e+001f, -5.518491744995117e+001f);
    vs[2].Set(1.555750465393066e+001f, -5.523682022094727e+001f);
    vs[3].Set(1.555750465393066e+001f, -6.281550216674805e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 4);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[41]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[13]->CreateFixture(&fd);
=======
    engine->bodies[6]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(4.129910278320312e+001f, -4.483541488647461e+001f);
    vs[1].Set(2.575500297546387e+001f, -2.299475860595703e+001f);
    vs[2].Set(2.572130393981934e+001f, -3.943346405029297e+001f);
=======
<<<<<<< HEAD
    vs[0].Set(4.846809768676758e+001f, -5.624329376220703e+001f);
    vs[1].Set(3.022579574584961e+001f, -2.884553337097168e+001f);
    vs[2].Set(3.018619537353516e+001f, -4.946685409545898e+001f);
=======
    vs[0].Set(4.846809768676758e+001f, -6.274474716186523e+001f);
    vs[1].Set(3.022578239440918e+001f, -3.217989730834961e+001f);
    vs[2].Set(3.018615531921387e+001f, -5.518491744995117e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 3);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[41]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[13]->CreateFixture(&fd);
=======
    engine->bodies[6]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(2.575500297546387e+001f, -2.299475860595703e+001f);
    vs[1].Set(2.499800300598145e+001f, -1.846156501770020e+001f);
    vs[2].Set(1.183810329437256e+001f, -1.842338562011719e+001f);
    vs[3].Set(1.179300308227539e+001f, -2.310543632507324e+001f);
=======
<<<<<<< HEAD
    vs[0].Set(3.022579574584961e+001f, -2.884553337097168e+001f);
    vs[1].Set(2.933739852905273e+001f, -2.315887451171875e+001f);
    vs[2].Set(1.389299774169922e+001f, -2.311094284057617e+001f);
    vs[3].Set(1.384009933471680e+001f, -2.898439216613770e+001f);
=======
    vs[0].Set(3.022578239440918e+001f, -3.217989730834961e+001f);
    vs[1].Set(2.933740806579590e+001f, -2.583588027954102e+001f);
    vs[2].Set(1.389298820495605e+001f, -2.578245544433594e+001f);
    vs[3].Set(1.384006690979004e+001f, -3.233485031127930e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 4);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[41]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[13]->CreateFixture(&fd);
=======
    engine->bodies[6]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(4.424010467529297e+001f, 4.635560989379883e+000f);
    vs[1].Set(7.352259635925293e+000f, 4.605437755584717e+000f);
    vs[2].Set(1.046689891815186e+001f, 3.241481065750122e+000f);
    vs[3].Set(2.141749954223633e+001f, 2.899735689163208e+000f);
=======
<<<<<<< HEAD
    vs[0].Set(5.191960525512695e+001f, 5.815049648284912e+000f);
    vs[1].Set(8.628520965576172e+000f, 5.777242183685303e+000f);
    vs[2].Set(1.228380012512207e+001f, 4.066244125366211e+000f);
    vs[3].Set(2.513529968261719e+001f, 3.637551784515381e+000f);
=======
    vs[0].Set(5.191959381103516e+001f, 6.487239837646484e+000f);
    vs[1].Set(8.628524780273438e+000f, 6.445064544677734e+000f);
    vs[2].Set(1.228377342224121e+001f, 4.536281585693359e+000f);
    vs[3].Set(2.513533592224121e+001f, 4.058027267456055e+000f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 4);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[41]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[13]->CreateFixture(&fd);
=======
    engine->bodies[6]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(4.424010467529297e+001f, 4.635560989379883e+000f);
    vs[1].Set(2.141749954223633e+001f, 2.899735689163208e+000f);
    vs[2].Set(2.530390167236328e+001f, -1.004845237731934e+001f);
=======
<<<<<<< HEAD
    vs[0].Set(5.191960525512695e+001f, 5.815049648284912e+000f);
    vs[1].Set(2.513529968261719e+001f, 3.637551784515381e+000f);
    vs[2].Set(2.969630050659180e+001f, -1.260520839691162e+001f);
=======
    vs[0].Set(5.191959381103516e+001f, 6.487239837646484e+000f);
    vs[1].Set(2.513533592224121e+001f, 4.058027267456055e+000f);
    vs[2].Set(2.969633674621582e+001f, -1.406232452392578e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 3);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[41]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[13]->CreateFixture(&fd);
=======
    engine->bodies[6]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
<<<<<<< HEAD
  bd.position.Set(1.794400024414062e+001f, 4.704735183715820e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
<<<<<<< HEAD
  bd.position.Set(1.956760025024414e+001f, -2.066789627075195e+000f);
=======
  bd.position.Set(1.956759071350098e+001f, -3.247980117797852e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  bd.angle = 3.141592741012573e+000f;
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
<<<<<<< HEAD
  engine->bodies[42] = engine->World->CreateBody(&bd);
=======
<<<<<<< HEAD
  engine->bodies[14] = engine->World->CreateBody(&bd);
=======
  engine->bodies[7] = engine->World->CreateBody(&bd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651

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
<<<<<<< HEAD
    vs[0].Set(2.217866182327271e+000f, -3.002951812744141e+001f);
    vs[1].Set(2.158821821212769e+000f, -9.217180252075195e+000f);
    vs[2].Set(7.530702948570251e-001f, -3.838140487670898e+000f);
    vs[3].Set(-7.377530574798584e+000f, 1.556019067764282e+000f);
    vs[4].Set(-7.382820129394531e+000f, -5.341831970214844e+001f);
    vs[5].Set(2.174689769744873e+000f, -5.179889297485352e+001f);
=======
<<<<<<< HEAD
    vs[0].Set(2.602855682373047e+000f, -3.767015457153320e+001f);
    vs[1].Set(2.533569335937500e+000f, -1.156237411499023e+001f);
    vs[2].Set(8.837909698486328e-001f, -4.814698696136475e+000f);
    vs[3].Set(-8.658180236816406e+000f, 1.951932787895203e+000f);
    vs[4].Set(-8.664405822753906e+000f, -6.700997924804688e+001f);
    vs[5].Set(2.552173614501953e+000f, -6.497846221923828e+001f);
=======
    vs[0].Set(2.602853775024414e+000f, -4.202459335327148e+001f);
    vs[1].Set(2.533565521240234e+000f, -1.289889144897461e+001f);
    vs[2].Set(8.837909698486328e-001f, -5.371253967285156e+000f);
    vs[3].Set(-8.658178329467773e+000f, 2.177572250366211e+000f);
    vs[4].Set(-8.664405822753906e+000f, -7.475600433349609e+001f);
    vs[5].Set(2.552173614501953e+000f, -7.248963165283203e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 6);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[42]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[14]->CreateFixture(&fd);
=======
    engine->bodies[7]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(4.031381225585938e+001f, -5.359590148925781e+001f);
    vs[1].Set(4.030091094970703e+001f, -5.200462341308594e+001f);
    vs[2].Set(2.174689769744873e+000f, -5.179889297485352e+001f);
    vs[3].Set(-7.382820129394531e+000f, -5.341831970214844e+001f);
=======
<<<<<<< HEAD
    vs[0].Set(4.731179428100586e+001f, -6.723275756835938e+001f);
    vs[1].Set(4.729659652709961e+001f, -6.523654937744141e+001f);
    vs[2].Set(2.552173614501953e+000f, -6.497846221923828e+001f);
    vs[3].Set(-8.664405822753906e+000f, -6.700997924804688e+001f);
=======
    vs[0].Set(4.731179809570312e+001f, -7.500449371337891e+001f);
    vs[1].Set(4.729655456542969e+001f, -7.277752685546875e+001f);
    vs[2].Set(2.552173614501953e+000f, -7.248963165283203e+001f);
    vs[3].Set(-8.664405822753906e+000f, -7.475600433349609e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 4);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[42]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[14]->CreateFixture(&fd);
=======
    engine->bodies[7]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(7.530702948570251e-001f, -3.838140487670898e+000f);
    vs[1].Set(7.147028446197510e-001f, 1.544988632202148e+000f);
    vs[2].Set(-7.377530574798584e+000f, 1.556019067764282e+000f);
=======
<<<<<<< HEAD
    vs[0].Set(8.837909698486328e-001f, -4.814698696136475e+000f);
    vs[1].Set(8.387660980224609e-001f, 1.938095211982727e+000f);
    vs[2].Set(-8.658180236816406e+000f, 1.951932787895203e+000f);
=======
    vs[0].Set(8.837909698486328e-001f, -5.371253967285156e+000f);
    vs[1].Set(8.387660980224609e-001f, 2.162130355834961e+000f);
    vs[2].Set(-8.658178329467773e+000f, 2.177572250366211e+000f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 3);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[42]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[14]->CreateFixture(&fd);
=======
    engine->bodies[7]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(1.743340110778809e+001f, -9.279209136962891e+000f);
    vs[1].Set(4.401929855346680e+000f, -3.741687774658203e+000f);
    vs[2].Set(7.530702948570251e-001f, -3.838140487670898e+000f);
    vs[3].Set(2.158821821212769e+000f, -9.217180252075195e+000f);
=======
<<<<<<< HEAD
    vs[0].Set(2.045959854125977e+001f, -1.164018917083740e+001f);
    vs[1].Set(5.166049957275391e+000f, -4.693709850311279e+000f);
    vs[2].Set(8.837909698486328e-001f, -4.814698696136475e+000f);
    vs[3].Set(2.533569335937500e+000f, -1.156237411499023e+001f);
=======
    vs[0].Set(2.045962715148926e+001f, -1.298575210571289e+001f);
    vs[1].Set(5.166044235229492e+000f, -5.236278533935547e+000f);
    vs[2].Set(8.837909698486328e-001f, -5.371253967285156e+000f);
    vs[3].Set(2.533565521240234e+000f, -1.289889144897461e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 4);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[42]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[14]->CreateFixture(&fd);
=======
    engine->bodies[7]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(1.748930168151855e+001f, -2.316997528076172e+000f);
    vs[1].Set(4.412030696868896e+000f, -2.343513488769531e+000f);
    vs[2].Set(4.401929855346680e+000f, -3.741687774658203e+000f);
    vs[3].Set(1.743340110778809e+001f, -9.279209136962891e+000f);
=======
<<<<<<< HEAD
    vs[0].Set(2.052519989013672e+001f, -2.906517505645752e+000f);
    vs[1].Set(5.177900314331055e+000f, -2.939791679382324e+000f);
    vs[2].Set(5.166049957275391e+000f, -4.693709850311279e+000f);
    vs[3].Set(2.045959854125977e+001f, -1.164018917083740e+001f);
=======
    vs[0].Set(2.052515983581543e+001f, -3.242496490478516e+000f);
    vs[1].Set(5.177900314331055e+000f, -3.279617309570312e+000f);
    vs[2].Set(5.166044235229492e+000f, -5.236278533935547e+000f);
    vs[3].Set(2.045962715148926e+001f, -1.298575210571289e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 4);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[42]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[14]->CreateFixture(&fd);
=======
    engine->bodies[7]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(2.226485490798950e+000f, -3.154670143127441e+001f);
    vs[1].Set(2.217866182327271e+000f, -3.002951812744141e+001f);
    vs[2].Set(2.174689769744873e+000f, -5.179889297485352e+001f);
=======
<<<<<<< HEAD
    vs[0].Set(2.612966537475586e+000f, -3.957336807250977e+001f);
    vs[1].Set(2.602855682373047e+000f, -3.767015457153320e+001f);
    vs[2].Set(2.552173614501953e+000f, -6.497846221923828e+001f);
=======
    vs[0].Set(2.612968444824219e+000f, -4.414783859252930e+001f);
    vs[1].Set(2.602853775024414e+000f, -4.202459335327148e+001f);
    vs[2].Set(2.552173614501953e+000f, -7.248963165283203e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 3);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[42]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[14]->CreateFixture(&fd);
=======
    engine->bodies[7]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(1.873190498352051e+001f, -2.995973587036133e+001f);
    vs[1].Set(2.217866182327271e+000f, -3.002951812744141e+001f);
    vs[2].Set(2.226485490798950e+000f, -3.154670143127441e+001f);
    vs[3].Set(1.869920539855957e+001f, -3.155932998657227e+001f);
=======
<<<<<<< HEAD
    vs[0].Set(2.198349761962891e+001f, -3.758257675170898e+001f);
    vs[1].Set(2.602855682373047e+000f, -3.767015457153320e+001f);
    vs[2].Set(2.612966537475586e+000f, -3.957336807250977e+001f);
    vs[3].Set(2.194519805908203e+001f, -3.958924102783203e+001f);
=======
    vs[0].Set(2.198354530334473e+001f, -4.192697525024414e+001f);
    vs[1].Set(2.602853775024414e+000f, -4.202459335327148e+001f);
    vs[2].Set(2.612968444824219e+000f, -4.414783859252930e+001f);
    vs[3].Set(2.194519615173340e+001f, -4.416554641723633e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    shape.Set(vs, 4);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[42]->CreateFixture(&fd);
=======
<<<<<<< HEAD
    engine->bodies[14]->CreateFixture(&fd);
=======
    engine->bodies[7]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  }
}
{
  b2RevoluteJointDef jd;
<<<<<<< HEAD
  jd.bodyA = engine->bodies[6];
  jd.bodyB = engine->bodies[3];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.245161425322294e-002f, -3.918170630931854e-001f);
  jd.localAnchorB.Set(1.114532165229321e-002f, 3.995004892349243e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[0] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[5];
  jd.bodyB = engine->bodies[1];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.881022170186043e-002f, -4.434035718441010e-001f);
  jd.localAnchorB.Set(4.349816218018532e-002f, 3.696691691875458e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[1] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
=======
<<<<<<< HEAD
  jd.bodyA = engine->bodies[9];
  jd.bodyB = engine->bodies[10];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.441716998815536e-001f, -3.693709671497345e-001f);
  jd.localAnchorB.Set(6.936070043593645e-003f, 2.154974266886711e-003f);
=======
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  jd.bodyA = engine->bodies[2];
  jd.bodyB = engine->bodies[1];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(3.626487031579018e-002f, 3.909606635570526e-001f);
  jd.localAnchorB.Set(-5.361885298043489e-003f, -4.314840137958527e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[2] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[0];
  jd.bodyB = engine->bodies[3];
  jd.collideConnected = bool(0);
<<<<<<< HEAD
  jd.localAnchorA.Set(4.553437232971191e-002f, 3.881711363792419e-001f);
  jd.localAnchorB.Set(2.945042401552200e-002f, -4.295505285263062e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[3] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[0];
  jd.bodyB = engine->bodies[5];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.135296585038304e-003f, -3.640715479850769e-001f);
  jd.localAnchorB.Set(5.617645219899714e-004f, 3.691332638263702e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
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
  jd.localAnchorA.Set(4.760523140430450e-002f, -3.772779703140259e-001f);
  jd.localAnchorB.Set(2.316616103053093e-002f, 3.570269644260406e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[5] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[7];
  jd.bodyB = engine->bodies[11];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(3.766563534736633e-002f, 3.368861973285675e-001f);
  jd.localAnchorB.Set(4.047033563256264e-002f, -4.050207436084747e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[6] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[8];
  jd.bodyB = engine->bodies[4];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.215239614248276e-002f, 3.750351965427399e-001f);
  jd.localAnchorB.Set(6.865760777145624e-003f, -4.505034089088440e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[7] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[10];
  jd.bodyB = engine->bodies[11];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(4.760523140430450e-002f, -3.772761523723602e-001f);
  jd.localAnchorB.Set(2.316616103053093e-002f, 3.570287823677063e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[8] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[12];
  jd.bodyB = engine->bodies[8];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(4.553437232971191e-002f, 3.881691396236420e-001f);
  jd.localAnchorB.Set(2.945042401552200e-002f, -4.295525252819061e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[9] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[13];
  jd.bodyB = engine->bodies[9];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.881022170186043e-002f, -4.434036612510681e-001f);
  jd.localAnchorB.Set(4.349816218018532e-002f, 3.696709871292114e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[10] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[10];
  jd.bodyB = engine->bodies[9];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(3.626487031579018e-002f, 3.909624814987183e-001f);
  jd.localAnchorB.Set(-5.361884832382202e-003f, -4.314821958541870e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[11] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[12];
  jd.bodyB = engine->bodies[13];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.135296585038304e-003f, -3.640735447406769e-001f);
  jd.localAnchorB.Set(5.617645219899714e-004f, 3.691331744194031e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[12] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[37];
  jd.bodyB = engine->bodies[38];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.228469535708427e-001f, -2.944543361663818e-001f);
  jd.localAnchorB.Set(5.910060368478298e-003f, 1.715372083708644e-003f);
=======
  jd.localAnchorA.Set(1.199557706713676e-001f, -9.236958622932434e-002f);
  jd.localAnchorB.Set(6.936073303222656e-003f, 2.400123048573732e-003f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
<<<<<<< HEAD
  jd.motorSpeed = -1.745329946279526e-001f;
=======
<<<<<<< HEAD
  jd.motorSpeed = -1.745329946279526e-001f;
=======
  jd.motorSpeed = -1.745329201221466e-001f;
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  jd.maxMotorTorque = 1.800000000000000e+002f;
  engine->joints[13] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
<<<<<<< HEAD
  jd.bodyA = engine->bodies[40];
  jd.bodyB = engine->bodies[39];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.022129878401756e-001f, -6.600714474916458e-002f);
  jd.localAnchorB.Set(5.910200532525778e-003f, 1.715372083708644e-003f);
=======
<<<<<<< HEAD
  jd.bodyA = engine->bodies[12];
  jd.bodyB = engine->bodies[11];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.199559941887856e-001f, -8.279787749052048e-002f);
  jd.localAnchorB.Set(6.936070043593645e-003f, 2.154974266886711e-003f);
=======
  jd.bodyA = engine->bodies[5];
  jd.bodyB = engine->bodies[4];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.199557706713676e-001f, -9.236958622932434e-002f);
  jd.localAnchorB.Set(6.936073303222656e-003f, 2.400123048573732e-003f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
<<<<<<< HEAD
  jd.motorSpeed = -1.745329946279526e-001f;
=======
<<<<<<< HEAD
  jd.motorSpeed = -1.745329946279526e-001f;
=======
  jd.motorSpeed = -1.745329201221466e-001f;
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  jd.maxMotorTorque = 1.700000000000000e+002f;
  engine->joints[14] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
<<<<<<< HEAD
  jd.bodyA = engine->bodies[35];
  jd.bodyB = engine->bodies[36];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.022129878401756e-001f, -6.600714474916458e-002f);
  jd.localAnchorB.Set(5.910400301218033e-003f, 1.715372083708644e-003f);
=======
<<<<<<< HEAD
  jd.bodyA = engine->bodies[7];
  jd.bodyB = engine->bodies[8];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.199559941887856e-001f, -8.279787749052048e-002f);
  jd.localAnchorB.Set(6.936070043593645e-003f, 2.154974266886711e-003f);
=======
  jd.bodyA = engine->bodies[0];
  jd.bodyB = engine->bodies[1];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.199557706713676e-001f, -9.236958622932434e-002f);
  jd.localAnchorB.Set(6.936073303222656e-003f, 2.400123048573732e-003f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
<<<<<<< HEAD
  jd.motorSpeed = -1.745329946279526e-001f;
=======
<<<<<<< HEAD
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
=======
  jd.motorSpeed = -1.745329201221466e-001f;
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
  jd.maxMotorTorque = 1.500000000000000e+002f;
  engine->joints[15] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[14];
  jd.bodyB = engine->bodies[15];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.245161425322294e-002f, -3.918170630931854e-001f);
  jd.localAnchorB.Set(1.114532165229321e-002f, 3.995004892349243e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[16] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[20];
  jd.bodyB = engine->bodies[16];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.881022170186043e-002f, -4.434035718441010e-001f);
  jd.localAnchorB.Set(4.349816218018532e-002f, 3.696691691875458e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[17] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[17];
  jd.bodyB = engine->bodies[16];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(3.626487031579018e-002f, 3.909606635570526e-001f);
  jd.localAnchorB.Set(-5.361885298043489e-003f, -4.314840137958527e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[18] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[19];
  jd.bodyB = engine->bodies[15];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(4.553437232971191e-002f, 3.881711363792419e-001f);
  jd.localAnchorB.Set(2.945042401552200e-002f, -4.295505285263062e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[19] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[19];
  jd.bodyB = engine->bodies[20];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.135296585038304e-003f, -3.640715479850769e-001f);
  jd.localAnchorB.Set(5.617645219899714e-004f, 3.691332638263702e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[20] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[17];
  jd.bodyB = engine->bodies[18];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(4.760523140430450e-002f, -3.772779703140259e-001f);
  jd.localAnchorB.Set(2.316616103053093e-002f, 3.570269644260406e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[21] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[27];
  jd.bodyB = engine->bodies[23];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(3.766563534736633e-002f, 3.368861973285675e-001f);
  jd.localAnchorB.Set(4.047033563256264e-002f, -4.050207436084747e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[22] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[25];
  jd.bodyB = engine->bodies[18];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.215239614248276e-002f, 3.750351965427399e-001f);
  jd.localAnchorB.Set(6.865760777145624e-003f, -4.505034089088440e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[23] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[24];
  jd.bodyB = engine->bodies[23];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(4.760523140430450e-002f, -3.772761523723602e-001f);
  jd.localAnchorB.Set(2.316616103053093e-002f, 3.570287823677063e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[24] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[26];
  jd.bodyB = engine->bodies[25];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(4.553437232971191e-002f, 3.881691396236420e-001f);
  jd.localAnchorB.Set(2.945042401552200e-002f, -4.295525252819061e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[25] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[21];
  jd.bodyB = engine->bodies[22];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.881022170186043e-002f, -4.434036612510681e-001f);
  jd.localAnchorB.Set(4.349816218018532e-002f, 3.696709871292114e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[26] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[24];
  jd.bodyB = engine->bodies[22];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(3.626487031579018e-002f, 3.909624814987183e-001f);
  jd.localAnchorB.Set(-5.361884832382202e-003f, -4.314821958541870e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[27] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[26];
  jd.bodyB = engine->bodies[21];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.135296585038304e-003f, -3.640735447406769e-001f);
  jd.localAnchorB.Set(5.617645219899714e-004f, 3.691331744194031e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = -0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[28] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[31];
  jd.bodyB = engine->bodies[32];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.881022170186043e-002f, -4.434051513671875e-001f);
  jd.localAnchorB.Set(4.349816218018532e-002f, 3.696693181991577e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[29] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[33];
  jd.bodyB = engine->bodies[31];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.135296585038304e-003f, -3.640732765197754e-001f);
  jd.localAnchorB.Set(5.617645219899714e-004f, 3.691316843032837e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[30] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[30];
  jd.bodyB = engine->bodies[32];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(3.626487031579018e-002f, 3.909647166728973e-001f);
  jd.localAnchorB.Set(-5.361885298043489e-003f, -4.314838647842407e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[31] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[34];
  jd.bodyB = engine->bodies[42];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.917676605284214e-002f, 3.754854500293732e-001f);
  jd.localAnchorB.Set(9.930798530578613e+000f, -9.138586997985840e+000f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[32] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[30];
  jd.bodyB = engine->bodies[28];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(4.760523140430450e-002f, -3.772739171981812e-001f);
  jd.localAnchorB.Set(2.316616103053093e-002f, 3.570252358913422e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[33] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[28];
  jd.bodyB = engine->bodies[29];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.719992421567440e-002f, -4.323249757289886e-001f);
  jd.localAnchorB.Set(3.219136223196983e-002f, 3.817712962627411e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[34] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[33];
  jd.bodyB = engine->bodies[34];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(4.553437232971191e-002f, 3.881694376468658e-001f);
  jd.localAnchorB.Set(2.945042401552200e-002f, -4.295502007007599e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[35] = engine->World->CreateJoint(&jd);
}
<<<<<<< HEAD
=======
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
b2Free(engine->joints);
b2Free(engine->bodies);
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651

}