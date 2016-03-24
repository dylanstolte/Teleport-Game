//Source code dump of Box2D scene: untitled1
//
//  Created by R.U.B.E 1.7.3
//  Using Box2D version 2.3.0
//  Tue March 22 2016 18:24:18
//
//  This code is originally intended for use in the Box2D testbed,
//  but you can easily use it in other applications by providing
//  a b2World for use as the 'm_world' variable in the code below.

b2Vec2 g(0.000000000000000e+000f, -1.500000000000000e+001f);
m_world->SetGravity(g);
b2Body** bodies = (b2Body**)b2Alloc(5 * sizeof(b2Body*));
b2Joint** joints = (b2Joint**)b2Alloc(0 * sizeof(b2Joint*));
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(5.745598983764648e+001f, 5.458573532104492e+001f);
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
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(3.097137451171875e+000f, -1.765462398529053e+000f);
    vs[1].Set(3.097137451171875e+000f, 2.149971961975098e+000f);
    vs[2].Set(-2.879350662231445e+000f, 2.149971961975098e+000f);
    vs[3].Set(-2.879350662231445e+000f, -1.765462398529053e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[0]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(3.718174362182617e+001f, 3.269842147827148e+001f);
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
    vs[0].Set(7.836959838867188e+000f, 7.730844497680664e+000f);
    vs[1].Set(4.176149368286133e+000f, 8.593753814697266e+000f);
    vs[2].Set(4.196886062622070e+000f, 6.636984825134277e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(7.676876068115234e+000f, 5.789602279663086e+000f);
    vs[1].Set(4.016065597534180e+000f, 6.652511596679688e+000f);
    vs[2].Set(4.036801338195801e+000f, 4.695742130279541e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(7.677614212036133e+000f, 1.766973018646240e+000f);
    vs[1].Set(4.016804695129395e+000f, 2.629882574081421e+000f);
    vs[2].Set(4.037539482116699e+000f, 6.731138229370117e-001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(7.618149757385254e+000f, 3.792260646820068e+000f);
    vs[1].Set(3.957339286804199e+000f, 4.655170440673828e+000f);
    vs[2].Set(3.978074073791504e+000f, 2.698401212692261e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(7.677618026733398e+000f, 1.766926527023315e+000f);
    vs[1].Set(4.016807556152344e+000f, 2.629892110824585e+000f);
    vs[2].Set(4.037536621093750e+000f, 6.731429100036621e-001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(7.721385955810547e+000f, 9.660392761230469e+000f);
    vs[1].Set(4.060575485229492e+000f, 1.052330303192139e+001f);
    vs[2].Set(4.081310272216797e+000f, 8.566534042358398e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(4.535931777954102e+001f, -1.760007858276367e+000f);
    vs[1].Set(4.427129364013672e+001f, 1.881799697875977e+000f);
    vs[2].Set(4.340253829956055e+001f, -1.777641296386719e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(3.791046142578125e+001f, -1.619354724884033e+000f);
    vs[1].Set(3.682236099243164e+001f, 2.022445201873779e+000f);
    vs[2].Set(3.595365905761719e+001f, -1.636994838714600e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(3.396095275878906e+001f, -1.743127822875977e+000f);
    vs[1].Set(3.287292861938477e+001f, 1.898679733276367e+000f);
    vs[2].Set(3.200417327880859e+001f, -1.760761260986328e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(2.993835830688477e+001f, -1.737499713897705e+000f);
    vs[1].Set(2.885025787353516e+001f, 1.904300332069397e+000f);
    vs[2].Set(2.798155784606934e+001f, -1.755139827728271e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(3.598073196411133e+001f, -1.731876850128174e+000f);
    vs[1].Set(3.489263153076172e+001f, 1.909923195838928e+000f);
    vs[2].Set(3.402393341064453e+001f, -1.749516963958740e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(4.184869384765625e+001f, -1.844395160675049e+000f);
    vs[1].Set(4.076059341430664e+001f, 1.797404885292053e+000f);
    vs[2].Set(3.989189147949219e+001f, -1.862035274505615e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(2.606764221191406e+001f, -1.686867237091064e+000f);
    vs[1].Set(2.497954177856445e+001f, 1.954932808876038e+000f);
    vs[2].Set(2.411084175109863e+001f, -1.704507350921631e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(3.193560409545898e+001f, -1.799385547637939e+000f);
    vs[1].Set(3.084750366210938e+001f, 1.842414498329163e+000f);
    vs[2].Set(2.997880363464355e+001f, -1.817025661468506e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(3.396098327636719e+001f, -1.743124485015869e+000f);
    vs[1].Set(3.287288284301758e+001f, 1.898675560951233e+000f);
    vs[2].Set(3.200418090820312e+001f, -1.760764479637146e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(4.387407302856445e+001f, -1.788134098052979e+000f);
    vs[1].Set(4.278597259521484e+001f, 1.853665947914124e+000f);
    vs[2].Set(4.191727447509766e+001f, -1.805774092674255e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(4.387404251098633e+001f, -1.788137435913086e+000f);
    vs[1].Set(4.278601837158203e+001f, 1.853670120239258e+000f);
    vs[2].Set(4.191726303100586e+001f, -1.805770874023438e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(3.985144805908203e+001f, -1.782509326934814e+000f);
    vs[1].Set(3.876334762573242e+001f, 1.859290719032288e+000f);
    vs[2].Set(3.789464569091797e+001f, -1.800149440765381e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(2.799737167358398e+001f, -1.574345111846924e+000f);
    vs[1].Set(2.690927124023438e+001f, 2.067454814910889e+000f);
    vs[2].Set(2.604057121276855e+001f, -1.591985225677490e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(2.198881149291992e+001f, -2.013170719146729e+000f);
    vs[1].Set(2.090071105957031e+001f, 1.628629326820374e+000f);
    vs[2].Set(2.003201103210449e+001f, -2.030810832977295e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(2.401416015625000e+001f, -1.956912994384766e+000f);
    vs[1].Set(2.292613601684570e+001f, 1.684894561767578e+000f);
    vs[2].Set(2.205738067626953e+001f, -1.974546432495117e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(1.999156570434570e+001f, -1.951284885406494e+000f);
    vs[1].Set(1.890346527099609e+001f, 1.690515160560608e+000f);
    vs[2].Set(1.803476524353027e+001f, -1.968924999237061e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(1.612084960937500e+001f, -1.900652408599854e+000f);
    vs[1].Set(1.503274822235107e+001f, 1.741147637367249e+000f);
    vs[2].Set(1.416404914855957e+001f, -1.918292522430420e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(1.805057907104492e+001f, -1.788130283355713e+000f);
    vs[1].Set(1.696247863769531e+001f, 1.853669762611389e+000f);
    vs[2].Set(1.609377861022949e+001f, -1.805770397186279e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(2.401419067382812e+001f, -1.956909656524658e+000f);
    vs[1].Set(2.292609024047852e+001f, 1.684890389442444e+000f);
    vs[2].Set(2.205739021301270e+001f, -1.974549651145935e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(6.207758903503418e+000f, -1.855642795562744e+000f);
    vs[1].Set(5.119658470153809e+000f, 1.786157250404358e+000f);
    vs[2].Set(4.250959396362305e+000f, -1.873282909393311e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(8.137488365173340e+000f, -1.743120670318604e+000f);
    vs[1].Set(7.049387931823730e+000f, 1.898679375648499e+000f);
    vs[2].Set(6.180688858032227e+000f, -1.760760784149170e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(1.207572078704834e+001f, -1.968161106109619e+000f);
    vs[1].Set(1.098762035369873e+001f, 1.673638939857483e+000f);
    vs[2].Set(1.011892127990723e+001f, -1.985801219940186e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(1.007847499847412e+001f, -1.906275272369385e+000f);
    vs[1].Set(8.990374565124512e+000f, 1.735524773597717e+000f);
    vs[2].Set(8.121675491333008e+000f, -1.923915386199951e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(1.410109996795654e+001f, -1.911900043487549e+000f);
    vs[1].Set(1.301299953460693e+001f, 1.729900002479553e+000f);
    vs[2].Set(1.214430046081543e+001f, -1.929540038108826e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(1.410107040405273e+001f, -1.911903381347656e+000f);
    vs[1].Set(1.301304626464844e+001f, 1.729904174804688e+000f);
    vs[2].Set(1.214429092407227e+001f, -1.929536819458008e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(8.025646209716797e+001f, -5.152051544189453e+001f);
    vs[1].Set(8.002616882324219e+001f, -2.578162670135498e+000f);
    vs[2].Set(4.529074478149414e+001f, -1.794067382812500e+000f);
    vs[3].Set(4.056648254394531e+000f, -1.881428599357605e+000f);
    vs[4].Set(-4.627506256103516e+000f, -5.103079986572266e+001f);
    shape.Set(vs, 5);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(4.056648254394531e+000f, -1.881428599357605e+000f);
    vs[1].Set(4.056648254394531e+000f, 1.064413452148438e+001f);
    vs[2].Set(-4.627506256103516e+000f, 1.064413452148438e+001f);
    vs[3].Set(-4.627506256103516e+000f, -5.103079986572266e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(8.002616882324219e+001f, -2.578162670135498e+000f);
    vs[1].Set(5.327198410034180e+001f, 1.037005138397217e+001f);
    vs[2].Set(4.529074478149414e+001f, -1.794067382812500e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(5.337547302246094e+001f, 2.869808387756348e+001f);
    vs[1].Set(4.519280242919922e+001f, 2.879070281982422e+001f);
    vs[2].Set(4.529074478149414e+001f, -1.794067382812500e+000f);
    vs[3].Set(5.327198410034180e+001f, 1.037005138397217e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
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
    vs[0].Set(8.025332641601562e+001f, 1.063687419891357e+001f);
    vs[1].Set(5.327198410034180e+001f, 1.037005138397217e+001f);
    vs[2].Set(8.002616882324219e+001f, -2.578162670135498e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(2.821172142028809e+001f, 1.206411647796631e+001f);
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
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(3.097137451171875e+000f, -1.765462398529053e+000f);
    vs[1].Set(3.097137451171875e+000f, 2.149971961975098e+000f);
    vs[2].Set(-2.879350662231445e+000f, 2.149971961975098e+000f);
    vs[3].Set(-2.879350662231445e+000f, -1.765462398529053e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[2]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(5.694656372070312e-001f, -6.355618476867676e+000f);
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
    vs[0].Set(6.102602481842041e+000f, -1.477644920349121e+000f);
    vs[1].Set(6.102602481842041e+000f, 2.202175140380859e+000f);
    vs[2].Set(-6.688579559326172e+000f, 2.202175140380859e+000f);
    vs[3].Set(-6.688579559326172e+000f, -1.477644920349121e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[3]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(-2.347032546997070e+001f, -1.351979446411133e+001f);
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
    vs[0].Set(7.217029571533203e+000f, -1.477644920349121e+000f);
    vs[1].Set(7.217029571533203e+000f, 2.202175140380859e+000f);
    vs[2].Set(-6.688579559326172e+000f, 2.202175140380859e+000f);
    vs[3].Set(-6.688579559326172e+000f, -1.477644920349121e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
}
b2Free(joints);
b2Free(bodies);
joints = NULL;
bodies = NULL;

