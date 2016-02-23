#include "MyContactListener.h"


using namespace std;
void MyContactListener::BeginContact(b2Contact* contact) {

    //Get first body and print
    void* bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();
    if ( bodyUserData )
        cout<< "Body " << (int) bodyUserData<< " began contact with ";

    //Get second body and print
    bodyUserData = contact->GetFixtureB()->GetBody()->GetUserData();
    if ( bodyUserData )
        cout<< "Body " << (int) bodyUserData<< endl;
    }

void MyContactListener::EndContact(b2Contact* contact) {

    void* bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();
    if ( bodyUserData )
        cout<< "Body " << (int) bodyUserData<< " ended contact with ";

    bodyUserData = contact->GetFixtureB()->GetBody()->GetUserData();
    if ( bodyUserData )
        cout<< "Body " << (int) bodyUserData<< endl;

}

MyContactListener::MyContactListener(){}
MyContactListener::~MyContactListener(){}
