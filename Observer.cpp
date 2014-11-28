//Observer.cpp
//author : Alicia Boucard Guillaume Legru

#include "Sujet.hpp"
#include "Observer.hpp"

//////////////////////////////////////////
Observer::Observer(std::shared_ptr<Sujet> s)
{
	sujet = s;
	s->addObs(std::shared_ptr<Observer>(this));
}

//////////////////////////////////////////
//other methods
void Observer::update(Data d)
{
	data = d;
}

//////////////////////////////////////////
//bool operator==(Observer o1, Observer o2)
//{
	
//}