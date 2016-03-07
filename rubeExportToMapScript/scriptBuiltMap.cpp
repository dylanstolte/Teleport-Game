#include "scriptBuiltMap.h" 
 scriptBuiltMap::scriptBuiltMap(Engine* engine){this->engine = engine;}; 
 scriptBuiltMap::~scriptBuiltMap(){delete this->engine;}; 
 void scriptBuiltMap::load() { 
 
engine->bodies = (b2Body**)b2Alloc(43 * sizeof(b2Body*));
engine->joints = (b2Joint**)b2Alloc(36 * sizeof(b2Joint*));
{
  b2BodyDef bd;
<<<<<<< HEAD
  bd.type = b2BodyType(2);
  bd.position.Set(1.098179244995117e+001f, 7.962408447265625e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
<<<<<<< HEAD
  bd.type = b2BodyType(2);
  bd.position.Set(7.943987846374512e+000f, 1.483801746368408e+001f);
=======
  bd.type = b2BodyType(0);
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
  engine->bodies[0] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
=======
    vs[0].Set(2.578563690185547e-001f, -6.602773666381836e-001f);
    vs[1].Set(2.578563690185547e-001f, 5.886354446411133e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886354446411133e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602773666381836e-001f);
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
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
=======
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
    shape.m_radius = 1.801556944847107e+000f;
    shape.m_p.Set(5.194664001464844e-002f, 2.990341186523438e-002f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651

    fd.shape = &shape;

    engine->bodies[0]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
<<<<<<< HEAD
  bd.position.Set(1.098499298095703e+001f, 8.119393920898438e+001f);
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
  engine->bodies[1] = engine->World->CreateBody(&bd);

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
<<<<<<< HEAD
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
=======
    fd.isSensor = bool(0);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692406952381134e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
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

    engine->bodies[1]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
<<<<<<< HEAD
  bd.type = b2BodyType(2);
  bd.position.Set(1.097928237915039e+001f, 8.200833129882812e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
<<<<<<< HEAD
  bd.type = b2BodyType(2);
  bd.position.Set(7.943238735198975e+000f, 1.390236091613770e+001f);
=======
  bd.type = b2BodyType(0);
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
  engine->bodies[2] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
=======
    vs[0].Set(2.578558921813965e-001f, -6.602783203125000e-001f);
    vs[1].Set(2.578558921813965e-001f, 5.886335372924805e-001f);
    vs[2].Set(-2.336411476135254e-001f, 5.886335372924805e-001f);
    vs[3].Set(-2.336411476135254e-001f, -6.602783203125000e-001f);
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
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
=======
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
    shape.m_radius = 1.801556944847107e+000f;
    shape.m_p.Set(5.194664001464844e-002f, 2.990341186523438e-002f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651

    fd.shape = &shape;

    engine->bodies[2]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
<<<<<<< HEAD
  bd.position.Set(1.097923278808594e+001f, 7.880014801025391e+001f);
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
  engine->bodies[3] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
<<<<<<< HEAD
    fd.isSensor = bool(1);
=======
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
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
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

    engine->bodies[3]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
<<<<<<< HEAD
  bd.position.Set(1.097992134094238e+001f, 8.275424194335938e+001f);
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
  engine->bodies[4] = engine->World->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
<<<<<<< HEAD
    fd.isSensor = bool(1);
=======
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
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
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
    engine->bodies[11]->CreateFixture(&fd);
=======
    engine->bodies[4]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  }
<<<<<<< HEAD
=======
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
<<<<<<< HEAD
  bd.position.Set(9.853739738464355e-001f, -1.382857990264893e+001f);
=======
  bd.position.Set(9.853737354278564e-001f, -4.560126495361328e+001f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
<<<<<<< HEAD
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.197163403034210e-001f, 4.692434370517731e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692445099353790e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[4]->CreateFixture(&fd);
=======
    b2CircleShape shape;
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
<<<<<<< HEAD
  bd.type = b2BodyType(2);
  bd.position.Set(1.098243141174316e+001f, 8.036990356445312e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
  bd.type = b2BodyType(0);
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
  engine->bodies[5] = engine->World->CreateBody(&bd);
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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[5]->CreateFixture(&fd);
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
    shape.Set(vs, 6);

    fd.shape = &shape;

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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
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
    engine->bodies[5]->CreateFixture(&fd);
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
<<<<<<< HEAD
    vs[0].Set(5.000000000000000e-001f, -4.762287139892578e-001f);
    vs[1].Set(5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[2].Set(-5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[3].Set(-5.000000000000000e-001f, -4.762287139892578e-001f);
    shape.Set(vs, 4);
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
    shape.Set(vs, 3);
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[13]->CreateFixture(&fd);
=======
    engine->bodies[6]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
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
<<<<<<< HEAD
    vs[0].Set(5.000000000000000e-001f, -5.172710418701172e+000f);
    vs[1].Set(5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[2].Set(-5.000000000000000e-001f, 4.762306213378906e-001f);
    vs[3].Set(-5.000000000000000e-001f, -5.172710418701172e+000f);
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
    engine->bodies[7]->CreateFixture(&fd);
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
<<<<<<< HEAD
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[8]->CreateFixture(&fd);
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
    shape.Set(vs, 3);

    fd.shape = &shape;

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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263532996177673e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263506174087524e-001f);
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
    engine->bodies[8]->CreateFixture(&fd);
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
<<<<<<< HEAD
    vs[0].Set(2.197182476520538e-001f, 4.692377150058746e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
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
    engine->bodies[9]->CreateFixture(&fd);
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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197182476520538e-001f, 4.692377150058746e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692387878894806e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[9]->CreateFixture(&fd);
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
    shape.Set(vs, 3);

    fd.shape = &shape;

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
<<<<<<< HEAD
  bd.type = b2BodyType(2);
  bd.position.Set(1.097966384887695e+001f, 8.680879211425781e+001f);
  bd.angle = 3.141590118408203e+000f;
=======
  bd.type = b2BodyType(0);
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
  engine->bodies[10] = engine->World->CreateBody(&bd);
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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[10]->CreateFixture(&fd);
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
    shape.Set(vs, 6);

    fd.shape = &shape;

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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263552069664001e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
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
    engine->bodies[10]->CreateFixture(&fd);
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
<<<<<<< HEAD
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[11]->CreateFixture(&fd);
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
    shape.Set(vs, 3);

    fd.shape = &shape;

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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197163403034210e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197156548500061e-001f, -5.263525247573853e-001f);
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
    engine->bodies[11]->CreateFixture(&fd);
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
<<<<<<< HEAD
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
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
    engine->bodies[12]->CreateFixture(&fd);
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
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
<<<<<<< HEAD
    vs[0].Set(2.197182476520538e-001f, 4.692415297031403e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692426025867462e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263513922691345e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263525247573853e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    engine->bodies[12]->CreateFixture(&fd);
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
    shape.Set(vs, 3);

    fd.shape = &shape;

<<<<<<< HEAD
    engine->bodies[14]->CreateFixture(&fd);
=======
    engine->bodies[7]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
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
<<<<<<< HEAD
    vs[0].Set(2.197182476520538e-001f, 4.692453444004059e-001f);
    vs[1].Set(-1.990821063518524e-001f, 4.692464172840118e-001f);
    vs[2].Set(-1.990808844566345e-001f, -5.263475775718689e-001f);
    vs[3].Set(2.197175621986389e-001f, -5.263487100601196e-001f);
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
=======
<<<<<<< HEAD
    engine->bodies[14]->CreateFixture(&fd);
=======
    engine->bodies[7]->CreateFixture(&fd);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  }
}
{
  b2RevoluteJointDef jd;
<<<<<<< HEAD
  jd.bodyA = engine->bodies[9];
  jd.bodyB = engine->bodies[10];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.441716998815536e-001f, -3.693709671497345e-001f);
  jd.localAnchorB.Set(6.936070043593645e-003f, 2.154974266886711e-003f);
=======
  jd.bodyA = engine->bodies[2];
  jd.bodyB = engine->bodies[3];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.199557706713676e-001f, -9.236958622932434e-002f);
  jd.localAnchorB.Set(6.936073303222656e-003f, 2.400123048573732e-003f);
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
<<<<<<< HEAD
  jd.motorSpeed = -1.745329946279526e-001f;
=======
  jd.motorSpeed = -1.745329201221466e-001f;
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  jd.maxMotorTorque = 1.800000000000000e+002f;
  engine->joints[0] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
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
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
<<<<<<< HEAD
  jd.motorSpeed = -1.745329946279526e-001f;
=======
  jd.motorSpeed = -1.745329201221466e-001f;
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
  jd.maxMotorTorque = 1.700000000000000e+002f;
  engine->joints[1] = engine->World->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
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
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(1);
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
  jd.maxMotorTorque = 1.500000000000000e+002f;
  engine->joints[2] = engine->World->CreateJoint(&jd);
}
>>>>>>> c0c8bfa... Changed In Air control(no decel on direction change)//Fixed double jump,jump,wallclibm, no bounce on press and ground collision no floating//Added first prototype map w/ rotating box platforms//Refactor File structure, After pull open codeblocks default.workspace not .cbp file//Workspace contains rubeExportToMapScript project, this scipt takes rubeExport.txt gui source code and creates scriptBuiltMap.ccp then gets auto loaded in engine, DONT FORGET TO NEGATIVE SCALE ACROSS X AXIS BEFORE EXPORT//
b2Free(engine->joints);
b2Free(engine->bodies);

}
>>>>>>> 6b672ea3bc13586057e283e4b602043823ed7651
