#include "scriptBuiltMap.h" 
 scriptBuiltMap::scriptBuiltMap(Engine* engine){this->engine = engine;}; 
 scriptBuiltMap::~scriptBuiltMap(){delete this->engine;}; 
 void scriptBuiltMap::load() { 
 
engine->bodies = (b2Body**)b2Alloc(44 * sizeof(b2Body*));
engine->joints = (b2Joint**)b2Alloc(36 * sizeof(b2Joint*));
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(4.561740112304688e+001f, 1.342930030822754e+001f);
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
  engine->bodies[0] = engine->World->CreateBody(&bd);

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
    vs[0].Set(4.371166229248047e+000f, 3.182430267333984e-001f);
    vs[1].Set(2.954948425292969e+000f, 1.249440193176270e+000f);
    vs[2].Set(2.577255249023438e+000f, 1.479109764099121e+000f);
    vs[3].Set(-2.335357666015625e-001f, 1.460820198059082e+000f);
    vs[4].Set(1.758060455322266e+000f, -1.454110145568848e+000f);
    vs[5].Set(2.190502166748047e+000f, -1.442500114440918e+000f);
    vs[6].Set(2.515331268310547e+000f, -1.265419960021973e+000f);
    shape.Set(vs, 7);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(1.758060455322266e+000f, -1.454110145568848e+000f);
    vs[1].Set(-2.335357666015625e-001f, 1.460820198059082e+000f);
    vs[2].Set(-8.821945190429688e-001f, 1.449749946594238e+000f);
    vs[3].Set(-1.052112579345703e+000f, -1.256389617919922e+000f);
    vs[4].Set(-6.744346618652344e-001f, -1.498780250549316e+000f);
    vs[5].Set(-6.203842163085938e-001f, -1.498909950256348e+000f);
    shape.Set(vs, 6);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(2.577255249023438e+000f, 1.479109764099121e+000f);
    vs[1].Set(2.361225128173828e+000f, 1.543199539184570e+000f);
    vs[2].Set(1.712631225585938e+000f, 1.557550430297852e+000f);
    vs[3].Set(-2.335357666015625e-001f, 1.460820198059082e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(1.712631225585938e+000f, 1.557550430297852e+000f);
    vs[1].Set(1.280868530273438e+000f, 1.787360191345215e+000f);
    vs[2].Set(1.172832489013672e+000f, 1.813050270080566e+000f);
    vs[3].Set(7.405281066894531e-001f, 1.852270126342773e+000f);
    vs[4].Set(-2.335357666015625e-001f, 1.460820198059082e+000f);
    shape.Set(vs, 5);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(1.172832489013672e+000f, 1.813050270080566e+000f);
    vs[1].Set(1.118892669677734e+000f, 1.851309776306152e+000f);
    vs[2].Set(7.405281066894531e-001f, 1.852270126342773e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(4.371166229248047e+000f, 3.182430267333984e-001f);
    vs[1].Set(4.304039001464844e+000f, 4.708976745605469e-001f);
    vs[2].Set(3.873619079589844e+000f, 1.170869827270508e+000f);
    vs[3].Set(3.657588958740234e+000f, 1.234950065612793e+000f);
    vs[4].Set(2.954948425292969e+000f, 1.249440193176270e+000f);
    shape.Set(vs, 5);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(4.304347991943359e+000f, 5.725507736206055e-001f);
    vs[1].Set(4.183750152587891e+000f, 9.286518096923828e-001f);
    vs[2].Set(3.873619079589844e+000f, 1.170869827270508e+000f);
    vs[3].Set(4.304039001464844e+000f, 4.708976745605469e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(4.963279724121094e+000f, -5.473260879516602e-001f);
    vs[1].Set(4.465473175048828e+000f, 2.163496017456055e-001f);
    vs[2].Set(4.371166229248047e+000f, 3.182430267333984e-001f);
    vs[3].Set(2.515331268310547e+000f, -1.265419960021973e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(4.963279724121094e+000f, -5.473260879516602e-001f);
    vs[1].Set(4.627368927001953e+000f, 1.269912719726562e-001f);
    vs[2].Set(4.465473175048828e+000f, 2.163496017456055e-001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(4.963279724121094e+000f, -5.473260879516602e-001f);
    vs[1].Set(4.937831878662109e+000f, 1.184272766113281e-002f);
    vs[2].Set(4.843513488769531e+000f, 1.010322570800781e-001f);
    vs[3].Set(4.627368927001953e+000f, 1.269912719726562e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(5.164665222167969e+000f, -1.005290031433105e+000f);
    vs[1].Set(5.151725769042969e+000f, -8.019409179687500e-001f);
    vs[2].Set(4.963279724121094e+000f, -5.473260879516602e-001f);
    vs[3].Set(2.515331268310547e+000f, -1.265419960021973e+000f);
    vs[4].Set(5.110492706298828e+000f, -1.043270111083984e+000f);
    shape.Set(vs, 5);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(1.541698455810547e+000f, -1.504389762878418e+000f);
    vs[1].Set(5.428054332733154e-001f, -1.477000355720520e+000f);
    vs[2].Set(-6.203842163085938e-001f, -1.498909950256348e+000f);
    vs[3].Set(-5.664405822753906e-001f, -1.537170410156250e+000f);
    vs[4].Set(1.379398345947266e+000f, -1.554800033569336e+000f);
    shape.Set(vs, 5);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(1.758060455322266e+000f, -1.454110145568848e+000f);
    vs[1].Set(5.428054332733154e-001f, -1.477000355720520e+000f);
    vs[2].Set(1.541698455810547e+000f, -1.504389762878418e+000f);
    vs[3].Set(1.595756530761719e+000f, -1.504529953002930e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(-3.152248382568359e+000f, 1.506330490112305e+000f);
    vs[1].Set(-3.476589202880859e+000f, 1.494449615478516e+000f);
    vs[2].Set(-4.438915252685547e+000f, 4.930372238159180e-001f);
    vs[3].Set(-4.574909210205078e+000f, 1.884126663208008e-001f);
    vs[4].Set(-4.617042541503906e+000f, -3.705844879150391e-001f);
    vs[5].Set(-4.617774963378906e+000f, -6.247205734252930e-001f);
    vs[6].Set(-4.605728149414062e+000f, -1.133029937744141e+000f);
    shape.Set(vs, 7);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(-8.821945190429688e-001f, 1.449749946594238e+000f);
    vs[1].Set(-2.827941894531250e+000f, 1.505510330200195e+000f);
    vs[2].Set(-3.152248382568359e+000f, 1.506330490112305e+000f);
    vs[3].Set(-4.605728149414062e+000f, -1.133029937744141e+000f);
    vs[4].Set(-4.511375427246094e+000f, -1.222219467163086e+000f);
    vs[5].Set(-1.052112579345703e+000f, -1.256389617919922e+000f);
    shape.Set(vs, 6);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(-4.605728149414062e+000f, -1.133029937744141e+000f);
    vs[1].Set(-4.617774963378906e+000f, -6.247205734252930e-001f);
    vs[2].Set(-4.631877899169922e+000f, -8.279991149902344e-001f);
    vs[3].Set(-4.632026672363281e+000f, -8.788251876831055e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(-4.605728149414062e+000f, -1.133029937744141e+000f);
    vs[1].Set(-4.632026672363281e+000f, -8.788251876831055e-001f);
    vs[2].Set(-4.659175872802734e+000f, -9.295845031738281e-001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(-4.617774963378906e+000f, -6.247205734252930e-001f);
    vs[1].Set(-4.658603668212891e+000f, -7.262725830078125e-001f);
    vs[2].Set(-4.658740997314453e+000f, -7.771015167236328e-001f);
    vs[3].Set(-4.631877899169922e+000f, -8.279991149902344e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(-4.574909210205078e+000f, 1.884126663208008e-001f);
    vs[1].Set(-4.723979949951172e+000f, 3.630638122558594e-002f);
    vs[2].Set(-4.724281311035156e+000f, -6.534671783447266e-002f);
    vs[3].Set(-4.617042541503906e+000f, -3.705844879150391e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(-3.152248382568359e+000f, 1.506330490112305e+000f);
    vs[1].Set(-3.260242462158203e+000f, 1.544719696044922e+000f);
    vs[2].Set(-3.314289093017578e+000f, 1.544859886169434e+000f);
    vs[3].Set(-3.476589202880859e+000f, 1.494449615478516e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(-8.821945190429688e-001f, 1.449749946594238e+000f);
    vs[1].Set(-1.854854583740234e+000f, 1.553870201110840e+000f);
    vs[2].Set(-2.773723602294922e+000f, 1.556200027465820e+000f);
    vs[3].Set(-2.827941894531250e+000f, 1.505510330200195e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
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
    vs[0].Set(-8.821945190429688e-001f, 1.449749946594238e+000f);
    vs[1].Set(-1.205970764160156e+000f, 1.641180038452148e+000f);
    vs[2].Set(-1.530246734619141e+000f, 1.654709815979004e+000f);
    vs[3].Set(-1.854854583740234e+000f, 1.553870201110840e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.796171188354492e+001f, 4.853170394897461e+001f);
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
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
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
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
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
  bd.position.Set(1.796491241455078e+001f, 5.010155868530273e+001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692406952381134e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692406952381134e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[2]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.795920181274414e+001f, 5.091595077514648e+001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[3]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.795915222167969e+001f, 4.770776748657227e+001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692396223545074e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263544321060181e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692396223545074e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263544321060181e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[4]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.795984077453613e+001f, 5.166186141967773e+001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[5]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.796235084533691e+001f, 4.927752304077148e+001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[6]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(1.797557258605957e+001f, 4.689725112915039e+001f);
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
    vs[0].Set(5.000000000000000e-001f, -4.762287139892578e-001f);
    vs[1].Set(5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[2].Set(-5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[3].Set(-5.000000000000000e-001f, -4.762287139892578e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[7]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.798417472839355e+001f, 5.728069686889648e+001f);
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
    vs[0].Set(5.000000000000000e-001f, -5.172710418701172e+000f);
    vs[1].Set(5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[2].Set(-5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[3].Set(-5.000000000000000e-001f, -5.172710418701172e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[8]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.795953369140625e+001f, 5.250822067260742e+001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[9]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.796529388427734e+001f, 5.490201950073242e+001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692377150058746e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692377150058746e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
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
  bd.position.Set(1.795958328247070e+001f, 5.571641159057617e+001f);
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
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
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
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[11]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.796022224426270e+001f, 5.646232223510742e+001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[12]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.796209335327148e+001f, 5.333216476440430e+001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[13]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.796273231506348e+001f, 5.407798385620117e+001f);
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
  engine->bodies[14] = engine->World->CreateBody(&bd);

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

    engine->bodies[14]->CreateFixture(&fd);
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

    engine->bodies[14]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(3.560443878173828e+001f, -4.675401687622070e+000f);
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
  engine->bodies[15] = engine->World->CreateBody(&bd);

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

    engine->bodies[15]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.558802032470703e+001f, -3.864885330200195e+000f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692396223545074e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263544321060181e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692396223545074e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263544321060181e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[16]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.559378051757812e+001f, -1.471094131469727e+000f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692406952381134e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692406952381134e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[17]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.558806991577148e+001f, -6.567020416259766e-001f);
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
  bd.position.Set(3.558870697021484e+001f, 8.921241760253906e-002f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[19]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.559057998657227e+001f, -3.040945053100586e+000f);
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
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
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
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[20]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.559121704101562e+001f, -2.295127868652344e+000f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[21]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.559159851074219e+001f, 2.505329132080078e+000f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263475775718689e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263487100601196e-001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263475775718689e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263487100601196e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[22]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.559416198730469e+001f, 3.329364776611328e+000f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692377150058746e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197182476520538e-001f, 4.692377150058746e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[23]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.558908843994141e+001f, 4.889671325683594e+000f);
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
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
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
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[24]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.558845138549805e+001f, 4.143756866455078e+000f);
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
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
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
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[25]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.558840179443359e+001f, 9.355697631835938e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[26]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.559096145629883e+001f, 1.759510040283203e+000f);
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
  engine->bodies[27] = engine->World->CreateBody(&bd);

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

    engine->bodies[27]->CreateFixture(&fd);
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

    engine->bodies[27]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(3.561304473876953e+001f, 5.708045959472656e+000f);
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
  engine->bodies[28] = engine->World->CreateBody(&bd);

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

    engine->bodies[28]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.501961898803711e+001f, 2.943096160888672e+001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990830600261688e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197147011756897e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[29]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.502217960357666e+001f, 3.025489807128906e+001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990830600261688e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197147011756897e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[30]->CreateFixture(&fd);
  }
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
    vs[0].Set(2.197163403034210e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990830600261688e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[30]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.501897907257080e+001f, 2.868505096435547e+001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990830600261688e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
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
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990830600261688e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[31]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.502212905883789e+001f, 2.704662322998047e+001f);
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
    vs[0].Set(2.197172939777374e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990830600261688e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263475775718689e-001f);
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
    vs[1].Set(2.197172939777374e-001f, 4.692453444004059e-001f);
    vs[2].Set(-1.990830600261688e-001f, 4.692464172840118e-001f);
    vs[3].Set(-1.990818381309509e-001f, -5.263475775718689e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[32]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.502468967437744e+001f, 2.787065505981445e+001f);
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
    vs[0].Set(2.197175621986389e-001f, -5.263487100601196e-001f);
    vs[1].Set(2.197172939777374e-001f, 4.692415297031403e-001f);
    vs[2].Set(-1.990830600261688e-001f, 4.692426025867462e-001f);
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
    vs[0].Set(2.197172939777374e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990830600261688e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263487100601196e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[33]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.502148914337158e+001f, 2.630080413818359e+001f);
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
    vs[0].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    vs[1].Set(2.197172939777374e-001f, 4.692453444004059e-001f);
    vs[2].Set(-1.990821063518524e-001f, 4.692464172840118e-001f);
    vs[3].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
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
    vs[0].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    vs[1].Set(2.197172939777374e-001f, 4.692453444004059e-001f);
    vs[2].Set(-1.990821063518524e-001f, 4.692464172840118e-001f);
    vs[3].Set(-1.990818381309509e-001f, -5.263513922691345e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[34]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.501892948150635e+001f, 2.547686767578125e+001f);
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
  engine->bodies[35] = engine->World->CreateBody(&bd);

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

    engine->bodies[35]->CreateFixture(&fd);
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

    engine->bodies[35]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(-6.498780250549316e+000f, 6.578826904296875e+000f);
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
  engine->bodies[36] = engine->World->CreateBody(&bd);

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
    shape.m_radius = 1.287333250045776e+000f;
    shape.m_p.Set(4.426294192671776e-002f, 2.137363143265247e-002f);

    fd.shape = &shape;

    engine->bodies[36]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(-6.580880165100098e+000f, 6.620338439941406e+000f);
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
  engine->bodies[37] = engine->World->CreateBody(&bd);

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
    vs[0].Set(2.226700305938721e+000f, -2.054498672485352e+000f);
    vs[1].Set(2.226699352264404e+000f, 2.054479598999023e+000f);
    vs[2].Set(-2.226700305938721e+000f, 2.054479598999023e+000f);
    vs[3].Set(-2.226699352264404e+000f, -2.054498672485352e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[37]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(2.340131950378418e+001f, 6.578826904296875e+000f);
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
  engine->bodies[38] = engine->World->CreateBody(&bd);

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
    shape.m_radius = 1.287333250045776e+000f;
    shape.m_p.Set(4.426198825240135e-002f, 2.137363143265247e-002f);

    fd.shape = &shape;

    engine->bodies[38]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.331931877136230e+001f, 6.620338439941406e+000f);
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
  engine->bodies[39] = engine->World->CreateBody(&bd);

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
    vs[0].Set(2.226700305938721e+000f, -2.054498672485352e+000f);
    vs[1].Set(2.226699352264404e+000f, 2.054479598999023e+000f);
    vs[2].Set(-2.226700305938721e+000f, 2.054479598999023e+000f);
    vs[3].Set(-2.226699352264404e+000f, -2.054498672485352e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[39]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(9.008209228515625e+000f, 6.620338439941406e+000f);
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
  engine->bodies[40] = engine->World->CreateBody(&bd);

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
    vs[0].Set(2.226700544357300e+000f, -2.054498672485352e+000f);
    vs[1].Set(2.226699590682983e+000f, 2.054479598999023e+000f);
    vs[2].Set(-2.226700544357300e+000f, 2.054479598999023e+000f);
    vs[3].Set(-2.226699590682983e+000f, -2.054498672485352e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[40]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(9.090269088745117e+000f, 6.578826904296875e+000f);
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
  engine->bodies[41] = engine->World->CreateBody(&bd);

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
    shape.m_radius = 1.287333250045776e+000f;
    shape.m_p.Set(4.426222667098045e-002f, 2.137363143265247e-002f);

    fd.shape = &shape;

    engine->bodies[41]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(2.492391967773438e+001f, 1.595497131347656e+001f);
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
  engine->bodies[42] = engine->World->CreateBody(&bd);

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
    vs[0].Set(5.980969619750977e+001f, 4.679419994354248e+000f);
    vs[1].Set(5.698189926147461e+001f, 4.610599040985107e+000f);
    vs[2].Set(2.530390167236328e+001f, -1.004845237731934e+001f);
    vs[3].Set(2.499800300598145e+001f, -1.846156501770020e+001f);
    vs[4].Set(2.575500297546387e+001f, -2.299475860595703e+001f);
    vs[5].Set(4.129910278320312e+001f, -4.483541488647461e+001f);
    shape.Set(vs, 6);

    fd.shape = &shape;

    engine->bodies[42]->CreateFixture(&fd);
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
    vs[0].Set(5.708839797973633e+001f, 7.725031852722168e+000f);
    vs[1].Set(4.426939773559570e+001f, 7.724157333374023e+000f);
    vs[2].Set(4.424010467529297e+001f, 4.635560989379883e+000f);
    vs[3].Set(5.698189926147461e+001f, 4.610599040985107e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[42]->CreateFixture(&fd);
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
    vs[0].Set(5.698189926147461e+001f, 4.610599040985107e+000f);
    vs[1].Set(4.424010467529297e+001f, 4.635560989379883e+000f);
    vs[2].Set(2.530390167236328e+001f, -1.004845237731934e+001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[42]->CreateFixture(&fd);
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
    vs[0].Set(4.129910278320312e+001f, -4.483541488647461e+001f);
    vs[1].Set(2.572130393981934e+001f, -3.943346405029297e+001f);
    vs[2].Set(1.325640869140625e+001f, -3.947051239013672e+001f);
    vs[3].Set(1.325640678405762e+001f, -4.488602828979492e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[42]->CreateFixture(&fd);
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
    vs[0].Set(4.129910278320312e+001f, -4.483541488647461e+001f);
    vs[1].Set(2.575500297546387e+001f, -2.299475860595703e+001f);
    vs[2].Set(2.572130393981934e+001f, -3.943346405029297e+001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[42]->CreateFixture(&fd);
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
    vs[0].Set(2.575500297546387e+001f, -2.299475860595703e+001f);
    vs[1].Set(2.499800300598145e+001f, -1.846156501770020e+001f);
    vs[2].Set(1.183810329437256e+001f, -1.842338562011719e+001f);
    vs[3].Set(1.179300308227539e+001f, -2.310543632507324e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[42]->CreateFixture(&fd);
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
    vs[0].Set(4.424010467529297e+001f, 4.635560989379883e+000f);
    vs[1].Set(7.352259635925293e+000f, 4.605437755584717e+000f);
    vs[2].Set(1.046689891815186e+001f, 3.241481065750122e+000f);
    vs[3].Set(2.141749954223633e+001f, 2.899735689163208e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[42]->CreateFixture(&fd);
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
    vs[0].Set(4.424010467529297e+001f, 4.635560989379883e+000f);
    vs[1].Set(2.141749954223633e+001f, 2.899735689163208e+000f);
    vs[2].Set(2.530390167236328e+001f, -1.004845237731934e+001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[42]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(2.492391967773438e+001f, 1.595497131347656e+001f);
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
  engine->bodies[43] = engine->World->CreateBody(&bd);

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
    vs[0].Set(2.217866182327271e+000f, -3.002951812744141e+001f);
    vs[1].Set(2.158821821212769e+000f, -9.217180252075195e+000f);
    vs[2].Set(7.530702948570251e-001f, -3.838140487670898e+000f);
    vs[3].Set(-7.377530574798584e+000f, 1.556019067764282e+000f);
    vs[4].Set(-7.382820129394531e+000f, -5.341831970214844e+001f);
    vs[5].Set(2.174689769744873e+000f, -5.179889297485352e+001f);
    shape.Set(vs, 6);

    fd.shape = &shape;

    engine->bodies[43]->CreateFixture(&fd);
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
    vs[0].Set(4.031381225585938e+001f, -5.359590148925781e+001f);
    vs[1].Set(4.030091094970703e+001f, -5.200462341308594e+001f);
    vs[2].Set(2.174689769744873e+000f, -5.179889297485352e+001f);
    vs[3].Set(-7.382820129394531e+000f, -5.341831970214844e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[43]->CreateFixture(&fd);
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
    vs[0].Set(7.530702948570251e-001f, -3.838140487670898e+000f);
    vs[1].Set(7.147028446197510e-001f, 1.544988632202148e+000f);
    vs[2].Set(-7.377530574798584e+000f, 1.556019067764282e+000f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[43]->CreateFixture(&fd);
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
    vs[0].Set(1.743340110778809e+001f, -9.279209136962891e+000f);
    vs[1].Set(4.401929855346680e+000f, -3.741687774658203e+000f);
    vs[2].Set(7.530702948570251e-001f, -3.838140487670898e+000f);
    vs[3].Set(2.158821821212769e+000f, -9.217180252075195e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[43]->CreateFixture(&fd);
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
    vs[0].Set(1.748930168151855e+001f, -2.316997528076172e+000f);
    vs[1].Set(4.412030696868896e+000f, -2.343513488769531e+000f);
    vs[2].Set(4.401929855346680e+000f, -3.741687774658203e+000f);
    vs[3].Set(1.743340110778809e+001f, -9.279209136962891e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[43]->CreateFixture(&fd);
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
    vs[0].Set(2.226485490798950e+000f, -3.154670143127441e+001f);
    vs[1].Set(2.217866182327271e+000f, -3.002951812744141e+001f);
    vs[2].Set(2.174689769744873e+000f, -5.179889297485352e+001f);
    shape.Set(vs, 3);

    fd.shape = &shape;

    engine->bodies[43]->CreateFixture(&fd);
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
    vs[0].Set(1.873190498352051e+001f, -2.995973587036133e+001f);
    vs[1].Set(2.217866182327271e+000f, -3.002951812744141e+001f);
    vs[2].Set(2.226485490798950e+000f, -3.154670143127441e+001f);
    vs[3].Set(1.869920539855957e+001f, -3.155932998657227e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[43]->CreateFixture(&fd);
  }
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[7];
  jd.bodyB = engine->bodies[4];
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
  jd.bodyA = engine->bodies[6];
  jd.bodyB = engine->bodies[2];
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
  jd.bodyA = engine->bodies[3];
  jd.bodyB = engine->bodies[2];
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
  jd.bodyA = engine->bodies[1];
  jd.bodyB = engine->bodies[4];
  jd.collideConnected = bool(0);
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
  jd.bodyA = engine->bodies[1];
  jd.bodyB = engine->bodies[6];
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
  jd.bodyA = engine->bodies[3];
  jd.bodyB = engine->bodies[5];
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
  jd.bodyA = engine->bodies[8];
  jd.bodyB = engine->bodies[12];
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
  jd.bodyA = engine->bodies[9];
  jd.bodyB = engine->bodies[5];
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
  jd.bodyA = engine->bodies[11];
  jd.bodyB = engine->bodies[12];
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
  jd.bodyA = engine->bodies[13];
  jd.bodyB = engine->bodies[9];
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
  jd.bodyA = engine->bodies[14];
  jd.bodyB = engine->bodies[10];
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
  jd.bodyA = engine->bodies[11];
  jd.bodyB = engine->bodies[10];
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
  jd.bodyA = engine->bodies[13];
  jd.bodyB = engine->bodies[14];
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
  jd.bodyA = engine->bodies[28];
  jd.bodyB = engine->bodies[24];
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
  engine->joints[13] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[26];
  jd.bodyB = engine->bodies[19];
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
  engine->joints[14] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[15];
  jd.bodyB = engine->bodies[16];
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
  engine->joints[15] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[18];
  jd.bodyB = engine->bodies[19];
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
  engine->joints[16] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[20];
  jd.bodyB = engine->bodies[16];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(4.553437232971191e-002f, 3.881711363792419e-001f);
  jd.localAnchorB.Set(2.945042401552200e-002f, -4.295505285263062e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerAngle = -1.745329201221466e-001f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  engine->joints[17] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[21];
  jd.bodyB = engine->bodies[17];
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
  engine->joints[18] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[18];
  jd.bodyB = engine->bodies[17];
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
  engine->joints[19] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[20];
  jd.bodyB = engine->bodies[21];
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
  engine->joints[20] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[27];
  jd.bodyB = engine->bodies[26];
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
  engine->joints[21] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[22];
  jd.bodyB = engine->bodies[23];
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
  engine->joints[22] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[25];
  jd.bodyB = engine->bodies[24];
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
  engine->joints[23] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[25];
  jd.bodyB = engine->bodies[23];
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
  engine->joints[24] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[27];
  jd.bodyB = engine->bodies[22];
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
  engine->joints[25] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[31];
  jd.bodyB = engine->bodies[33];
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
  engine->joints[26] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[34];
  jd.bodyB = engine->bodies[35];
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
  engine->joints[27] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[29];
  jd.bodyB = engine->bodies[30];
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
  engine->joints[28] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[31];
  jd.bodyB = engine->bodies[29];
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
  engine->joints[29] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[34];
  jd.bodyB = engine->bodies[32];
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
  jd.bodyA = engine->bodies[35];
  jd.bodyB = engine->bodies[43];
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
  engine->joints[31] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[32];
  jd.bodyB = engine->bodies[33];
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
  engine->joints[32] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[36];
  jd.bodyB = engine->bodies[37];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.022129878401756e-001f, -6.600714474916458e-002f);
  jd.localAnchorB.Set(5.910400301218033e-003f, 1.715372083708644e-003f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
  jd.motorSpeed = -1.745329946279526e-001f;
  jd.maxMotorTorque = 1.500000000000000e+002f;
  engine->joints[33] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[38];
  jd.bodyB = engine->bodies[39];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.228469535708427e-001f, -2.944543361663818e-001f);
  jd.localAnchorB.Set(5.910060368478298e-003f, 1.715372083708644e-003f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
  jd.motorSpeed = -1.745329946279526e-001f;
  jd.maxMotorTorque = 1.800000000000000e+002f;
  engine->joints[34] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = engine->bodies[41];
  jd.bodyB = engine->bodies[40];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.022129878401756e-001f, -6.600714474916458e-002f);
  jd.localAnchorB.Set(5.910200532525778e-003f, 1.715372083708644e-003f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
  jd.motorSpeed = -1.745329946279526e-001f;
  jd.maxMotorTorque = 1.700000000000000e+002f;
  engine->joints[35] = engine->World->CreateJoint(&jd);
}

}