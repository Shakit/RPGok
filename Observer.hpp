//Observer.hpp
//author : Alicia Boucard Guillaume Legru

#ifndef OBSERVER_HPP
#define OBSERVER_HPP

//#include "Sujet.hpp"
#include "Data.hpp"
#include <memory>

class Sujet;


class Observer
{
protected:
	std::shared_ptr<Sujet> sujet;
	Data data;

	//Ctor
	Observer(std::shared_ptr<Sujet> s);
	
public:
	virtual void update(Data d);
};

//bool operator==(Observer o1, Observer o2);

#endif //OBSERVER_HPP	
