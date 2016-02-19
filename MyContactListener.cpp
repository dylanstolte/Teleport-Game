#include "MyContactListener.h"

  class MyContactListener : public b2ContactListener
  {
    void BeginContact(b2Contact* contact) {

      //check if fixture A was a ball
      void* bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();

        std::cout<<bodyUserData<<std::endl;



    }

    void EndContact(b2Contact* contact) {



    }
  };
