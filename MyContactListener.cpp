#include "MyContactListener.h"


using namespace std;
void MyContactListener::BeginContact(b2Contact* contact) {

    //Get first body and print
    void* fixtureUserData = contact->GetFixtureA()->GetUserData();
    void* bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();
    if ( bodyUserData )
        cout<< "Body " << (int) bodyUserData<< " began contact with ";

    if ( (int)fixtureUserData == 3 )
        engine->player->numFootContacts++;

/////////////////////////////////////////////////////////////////////////////////

    //Get second body and print
    fixtureUserData = contact->GetFixtureB()->GetUserData();
    bodyUserData = contact->GetFixtureB()->GetBody()->GetUserData();
    if ( bodyUserData )
        cout<< "Body " << (int) bodyUserData<< endl;

    if ( (int)fixtureUserData == 3 )
        engine->player->numFootContacts++;
}

void MyContactListener::EndContact(b2Contact* contact) {

    void* fixtureUserData = contact->GetFixtureA()->GetUserData();
    void* bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();
    if ( bodyUserData )
        cout<< "Body " << (int) bodyUserData<< " ended contact with ";

    if ( (int)fixtureUserData == 3 )
        engine->player->numFootContacts--;

    ////////////////////////////////////////////////////////////////////////////////////////////

    bodyUserData = contact->GetFixtureB()->GetBody()->GetUserData();
    fixtureUserData = contact->GetFixtureB()->GetUserData();
    if ( bodyUserData )
        cout<< "Body " << (int) bodyUserData<< endl;

    if ( (int)fixtureUserData == 3 )
        engine->player->numFootContacts--;

}



MyContactListener::MyContactListener(Engine* engine){
    this->engine = engine;
}
MyContactListener::~MyContactListener(){}
