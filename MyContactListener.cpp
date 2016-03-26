#include "MyContactListener.h"


using namespace std;
void MyContactListener::BeginContact(b2Contact* contact) {

    //Get first body and print

    void* bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();
    if ( bodyUserData )
    {
        cout<< "Body " << (int) bodyUserData<< " began contact with ";
    }

    void* fixtureUserData = contact->GetFixtureA()->GetUserData();
    if ( (int)fixtureUserData == 3 )
    {
        engine->player->numFootContacts++;
        cout << " fixture " << (int) fixtureUserData << " contacts " << engine->player->numFootContacts << endl;

    }
    //left and right fixtures
    if ( (int)fixtureUserData == 1 )
    {
       engine->player->numFootContacts++;
        cout << " fixture " << (int) fixtureUserData << " contacts " << engine->player->numFootContacts << endl;

    }
        if ( (int)fixtureUserData == 9 )
    {
        //cant move in middle of world step
       // engine->player->respawn(0);
        engine->player->dead = true;
        cout << " fixture " << (int) fixtureUserData << " contacts " << endl;

    }

        //if fixture a has damage property && fixture b is player
    //or fixture b has damage && fixture a is player
        //get damage from fixture minus from player health
    if( (engine->json.hasCustomInt(contact->GetFixtureA(), "damage") && (int)contact->GetFixtureB()->GetUserData() == 2 ) ||
        (engine->json.hasCustomInt(contact->GetFixtureB(), "damage") && (int)contact->GetFixtureA()->GetUserData() == 2 )  )
    {
        cout << "FixtureA Has Damage Property";
        int damage = engine->json.getCustomInt(contact->GetFixtureA(), "damage");
        if(damage == 0)
            damage = engine->json.getCustomInt(contact->GetFixtureB(), "damage");
        cout << " Damage = " << damage << endl;
        engine->player->health -= damage;
        //bounce player off enemy
        //big bounce if there is lots of velocity on impact, impulse needs cap
        engine->player->body->SetLinearVelocity(-engine->player->body->GetLinearVelocity());

    }

        if( (engine->json.hasCustomVector(contact->GetFixtureA()->GetBody(),"camera_pos") && (int)contact->GetFixtureB()->GetUserData() == 2 ) ||
        (engine->json.hasCustomVector(contact->GetFixtureB()->GetBody(),"camera_pos") && (int)contact->GetFixtureA()->GetUserData() == 2 )  )
        {

            b2Vec2 camera_pos;
            if(engine->json.hasCustomVector(contact->GetFixtureA()->GetBody(),"camera_pos"))
                camera_pos = engine->json.getCustomVector(contact->GetFixtureA()->GetBody(), "camera_pos");

            if(engine->json.hasCustomVector(contact->GetFixtureB()->GetBody(),"camera_pos"))
                camera_pos = engine->json.getCustomVector(contact->GetFixtureB()->GetBody(), "camera_pos");


//            if(engine->camera_hold)
//            {
//                engine->camera_hold = false;
//                std::cout << "camera hold false" << std::endl;
//
//
//            }
//            else
            {
                engine->camera_hold = true;
                engine->camera_pos.x = camera_pos.x;
                engine->camera_pos.y = camera_pos.y;
                std::cout << "camera hold true " << camera_pos.x << " " << camera_pos.y << std::endl;
            }

            if(camera_pos.x == 0 && camera_pos.y == 0)
                engine->camera_hold = false;

        }



/////////////////////////////////////////////////////////////////////////////////

    //Get second body and print

    bodyUserData = contact->GetFixtureB()->GetBody()->GetUserData();
    if ( bodyUserData )
        cout<< "Body " << (int) bodyUserData<< endl;

    fixtureUserData = contact->GetFixtureB()->GetUserData();
    if ( (int)fixtureUserData == 3 )
    {
        engine->player->numFootContacts++;
        cout << " fixture " << (int) fixtureUserData<< " contacts " << engine->player->numFootContacts << endl;
    }

    if ( (int)fixtureUserData == 1 )
    {
        engine->player->numFootContacts++;
        cout << " fixture " << (int) fixtureUserData << " contacts " << engine->player->numFootContacts << endl;

    }

    if ( (int)fixtureUserData == 9 )
    {
        engine->player->dead = true;
       // engine->player->respawn(0);
        cout << " fixture " << (int) fixtureUserData << endl;

    }

    //if fixtureUserData has damage property &&
    //get damage property from fixture

}

void MyContactListener::EndContact(b2Contact* contact) {


    void* bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();
    if ( bodyUserData )
        cout<< "Body " << (int) bodyUserData<< " ended contact with ";

    void* fixtureUserData = contact->GetFixtureA()->GetUserData();
    if ( (int)fixtureUserData == 3 )
    {
        cout << " fixture " << (int) fixtureUserData << " contacts " << engine->player->numFootContacts << endl;
        engine->player->numFootContacts--;

    }

    if ( (int)fixtureUserData == 1 )
    {
        engine->player->numFootContacts--;
        cout << " fixture " << (int) fixtureUserData << " contacts " << engine->player->numFootContacts << endl;

    }



    ////////////////////////////////////////////////////////////////////////////////////////////

    bodyUserData = contact->GetFixtureB()->GetBody()->GetUserData();
    if ( bodyUserData )
        cout<< "Body " << (int) bodyUserData<< endl;



    fixtureUserData = contact->GetFixtureB()->GetUserData();
    if ( (int)fixtureUserData == 3 )
    {
        cout << " fixture " << (int) fixtureUserData << " contacts " << engine->player->numFootContacts << endl;
        engine->player->numFootContacts--;
    }

    if ( (int)fixtureUserData == 1 )
    {
        engine->player->numFootContacts--;
        cout << " fixture " << (int) fixtureUserData << " contacts " << engine->player->numFootContacts << endl;

    }

        //if player collides with camera_hold body name
    //engine camera_hold toggle

}



MyContactListener::MyContactListener(Engine* engine){
    this->engine = engine;
}
MyContactListener::~MyContactListener(){}
