#include "MyContactListener.h"


using namespace std;
void MyContactListener::BeginContact(b2Contact* contact) {
   //check if fixture A was a ball
      void* bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();
      if ( bodyUserData )
        cout<< "From begin contact " << (int) bodyUserData<< endl;

      //check if fixture B was a ball
      bodyUserData = contact->GetFixtureB()->GetBody()->GetUserData();
      if ( bodyUserData )
        cout<< "From begin contact " << (int) bodyUserData<< endl;
      }

void MyContactListener::EndContact(b2Contact* contact) {    }

MyContactListener::MyContactListener(){}
MyContactListener::~MyContactListener(){}
