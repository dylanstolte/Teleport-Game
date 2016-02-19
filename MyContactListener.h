#ifndef MYCONTACTLISTENER_H_INCLUDED
#define MYCONTACTLISTENER_H_INCLUDED
#include <SFML\Graphics.hpp>
#include <Box2D\Box2D.h>
#include <iostream>
#include <String>
#include <map>

  class MyContactListener : public b2ContactListener
  {
  public:
        MyContactListener();
        ~MyContactListener();
        void BeginContact(b2Contact* contact);
        void EndContact(b2Contact* contact);

  };
#endif // MYCONTACTLISTENER_H_INCLUDED
