//Source code dump of Box2D scene: untitled1.rube
//
//  Created by R.U.B.E 1.7.3
//  Using Box2D version 2.3.0
//  Sun March 6 2016 00:05:41
//
//  This code is originally intended for use in the Box2D testbed,
//  but you can easily use it in other applications by providing
//  a b2World for use as the 'm_world' variable in the code below.

b2Vec2 g(0.000000000000000e+000f, -1.000000000000000e+001f);
m_world->SetGravity(g);
b2Body** bodies = (b2Body**)b2Alloc(8 * sizeof(b2Body*));
b2Joint** joints = (b2Joint**)b2Alloc(3 * sizeof(b2Joint*));
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(-1.730982971191406e+001f, 4.144722747802734e+001f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[0] = m_world->CreateBody(&bd);

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
    shape.m_radius = 1.637444496154785e+000f;
    shape.m_p.Set(-5.194568634033203e-002f, 2.717971801757812e-002f);

    fd.shape = &shape;

    bodies[0]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(-1.740612983703613e+001f, 4.139442825317383e+001f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[1] = m_world->CreateBody(&bd);

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
    vs[0].Set(2.613234519958496e+000f, -2.613235473632812e+000f);
    vs[1].Set(2.613234519958496e+000f, 2.613231658935547e+000f);
    vs[2].Set(-2.613233566284180e+000f, 2.613231658935547e+000f);
    vs[3].Set(-2.613233566284180e+000f, -2.613235473632812e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(1.778065681457520e+001f, 4.144722747802734e+001f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[2] = m_world->CreateBody(&bd);

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
    shape.m_radius = 1.637444496154785e+000f;
    shape.m_p.Set(-5.194568634033203e-002f, 2.717971801757812e-002f);

    fd.shape = &shape;

    bodies[2]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.768435668945312e+001f, 4.139442825317383e+001f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[3] = m_world->CreateBody(&bd);

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
    vs[0].Set(2.613234519958496e+000f, -2.613235473632812e+000f);
    vs[1].Set(2.613234519958496e+000f, 2.613231658935547e+000f);
    vs[2].Set(-2.613233566284180e+000f, 2.613231658935547e+000f);
    vs[3].Set(-2.613233566284180e+000f, -2.613235473632812e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[3]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.890736103057861e-001f, 4.139442825317383e+001f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[4] = m_world->CreateBody(&bd);

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
    vs[0].Set(2.613234519958496e+000f, -2.613235473632812e+000f);
    vs[1].Set(2.613234519958496e+000f, 2.613231658935547e+000f);
    vs[2].Set(-2.613233566284180e+000f, 2.613231658935547e+000f);
    vs[3].Set(-2.613233566284180e+000f, -2.613235473632812e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(9.853737354278564e-001f, 4.144722747802734e+001f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[5] = m_world->CreateBody(&bd);

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
    shape.m_radius = 1.637444496154785e+000f;
    shape.m_p.Set(-5.194568634033203e-002f, 2.717971801757812e-002f);

    fd.shape = &shape;

    bodies[5]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(1.956759071350098e+001f, 2.952106094360352e+001f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[6] = m_world->CreateBody(&bd);

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
    vs[0].Set(-2.933740997314453e+001f, -2.348236465454102e+001f);
    vs[1].Set(-2.969633865356445e+001f, -1.278131866455078e+001f);
    vs[2].Set(-6.687325286865234e+001f, 5.864540100097656e+000f);
    vs[3].Set(-3.022578620910645e+001f, -2.924847602844238e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[6]->CreateFixture(&fd);
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
    vs[0].Set(-1.384006977081299e+001f, -2.938931274414062e+001f);
    vs[1].Set(-1.389299011230469e+001f, -2.343380546569824e+001f);
    vs[2].Set(-2.933740997314453e+001f, -2.348236465454102e+001f);
    vs[3].Set(-3.022578620910645e+001f, -2.924847602844238e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[6]->CreateFixture(&fd);
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
    vs[0].Set(-3.018616104125977e+001f, -5.015785598754883e+001f);
    vs[1].Set(-3.022578620910645e+001f, -2.924847602844238e+001f);
    vs[2].Set(-6.687325286865234e+001f, 5.864540100097656e+000f);
    vs[3].Set(-7.019190216064453e+001f, 5.952072143554688e+000f);
    vs[4].Set(-4.846810150146484e+001f, -5.702902221679688e+001f);
    shape.Set(vs, 5);

    fd.shape = &shape;

    bodies[6]->CreateFixture(&fd);
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
    vs[0].Set(-1.555750846862793e+001f, -5.709333801269531e+001f);
    vs[1].Set(-1.555750846862793e+001f, -5.020503234863281e+001f);
    vs[2].Set(-3.018616104125977e+001f, -5.015785598754883e+001f);
    vs[3].Set(-4.846810150146484e+001f, -5.702902221679688e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[6]->CreateFixture(&fd);
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
    vs[0].Set(-2.513533592224121e+001f, 3.688365936279297e+000f);
    vs[1].Set(-5.191959381103516e+001f, 5.896289825439453e+000f);
    vs[2].Set(-6.687325286865234e+001f, 5.864540100097656e+000f);
    vs[3].Set(-2.969633865356445e+001f, -1.278131866455078e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[6]->CreateFixture(&fd);
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
    vs[0].Set(-5.191959381103516e+001f, 5.896289825439453e+000f);
    vs[1].Set(-5.195402526855469e+001f, 9.824863433837891e+000f);
    vs[2].Set(-6.699818420410156e+001f, 9.825984954833984e+000f);
    vs[3].Set(-6.687325286865234e+001f, 5.864540100097656e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[6]->CreateFixture(&fd);
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
    vs[0].Set(-8.628524780273438e+000f, 5.857952117919922e+000f);
    vs[1].Set(-5.191959381103516e+001f, 5.896289825439453e+000f);
    vs[2].Set(-2.513533592224121e+001f, 3.688365936279297e+000f);
    vs[3].Set(-1.228377342224121e+001f, 4.123050689697266e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[6]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(1.956759071350098e+001f, 2.952106094360352e+001f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[7] = m_world->CreateBody(&bd);

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
    vs[0].Set(-2.602857589721680e+000f, -3.819637298583984e+001f);
    vs[1].Set(-2.198354721069336e+001f, -3.810764312744141e+001f);
    vs[2].Set(-2.194519805908203e+001f, -4.014229583740234e+001f);
    vs[3].Set(-2.612972259521484e+000f, -4.012619781494141e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[7]->CreateFixture(&fd);
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
    vs[0].Set(-2.552179336547852e+000f, -6.588619995117188e+001f);
    vs[1].Set(-2.602857589721680e+000f, -3.819637298583984e+001f);
    vs[2].Set(-2.612972259521484e+000f, -4.012619781494141e+001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[7]->CreateFixture(&fd);
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
    vs[0].Set(8.664400100708008e+000f, -6.794612884521484e+001f);
    vs[1].Set(-8.837909698486328e-001f, -4.881959915161133e+000f);
    vs[2].Set(-2.533567428588867e+000f, -1.172386932373047e+001f);
    vs[3].Set(-2.602857589721680e+000f, -3.819637298583984e+001f);
    vs[4].Set(-2.552179336547852e+000f, -6.588619995117188e+001f);
    shape.Set(vs, 5);

    fd.shape = &shape;

    bodies[7]->CreateFixture(&fd);
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
    vs[0].Set(-8.837909698486328e-001f, -4.881959915161133e+000f);
    vs[1].Set(-5.166045188903809e+000f, -4.759281158447266e+000f);
    vs[2].Set(-2.045962905883789e+001f, -1.180281448364258e+001f);
    vs[3].Set(-2.533567428588867e+000f, -1.172386932373047e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[7]->CreateFixture(&fd);
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
    vs[0].Set(-5.166045188903809e+000f, -4.759281158447266e+000f);
    vs[1].Set(-5.177901268005371e+000f, -2.980861663818359e+000f);
    vs[2].Set(-2.052515983581543e+001f, -2.947118759155273e+000f);
    vs[3].Set(-2.045962905883789e+001f, -1.180281448364258e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[7]->CreateFixture(&fd);
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
    vs[0].Set(8.664400100708008e+000f, -6.794612884521484e+001f);
    vs[1].Set(8.658178329467773e+000f, 1.979204177856445e+000f);
    vs[2].Set(-8.387660980224609e-001f, 1.965171813964844e+000f);
    vs[3].Set(-8.837909698486328e-001f, -4.881959915161133e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[7]->CreateFixture(&fd);
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
    vs[0].Set(8.664400100708008e+000f, -6.794612884521484e+001f);
    vs[1].Set(-2.552179336547852e+000f, -6.588619995117188e+001f);
    vs[2].Set(-4.729656219482422e+001f, -6.614787292480469e+001f);
    vs[3].Set(-4.731180572509766e+001f, -6.817197418212891e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[7]->CreateFixture(&fd);
  }
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[2];
  jd.bodyB = bodies[3];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-1.199557781219482e-001f, -8.395504951477051e-002f);
  jd.localAnchorB.Set(-6.936073303222656e-003f, 2.185821533203125e-003f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
  jd.motorSpeed = 1.745329201221466e-001f;
  jd.maxMotorTorque = 1.800000000000000e+002f;
  joints[0] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[5];
  jd.bodyB = bodies[4];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-1.199557781219482e-001f, -8.395504951477051e-002f);
  jd.localAnchorB.Set(-6.936073303222656e-003f, 2.185821533203125e-003f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
  jd.motorSpeed = 1.745329201221466e-001f;
  jd.maxMotorTorque = 1.700000000000000e+002f;
  joints[1] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[0];
  jd.bodyB = bodies[1];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-1.199557781219482e-001f, -8.395504951477051e-002f);
  jd.localAnchorB.Set(-6.936073303222656e-003f, 2.185821533203125e-003f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
  jd.motorSpeed = 1.745329201221466e-001f;
  jd.maxMotorTorque = 1.500000000000000e+002f;
  joints[2] = m_world->CreateJoint(&jd);
}
b2Free(joints);
b2Free(bodies);
joints = NULL;
bodies = NULL;

