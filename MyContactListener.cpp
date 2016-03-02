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
}



MyContactListener::MyContactListener(Engine* engine){
    this->engine = engine;
}
MyContactListener::~MyContactListener(){}
