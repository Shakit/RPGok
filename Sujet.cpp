//Sujet.cpp
//author: Alicia Boucard, Guillaume Legru

#include "Sujet.hpp"
#include "Observer.hpp"

//////////////////////////////////////////
Sujet::Sujet() : obs() {}

/////////////////////////////////////
void Sujet::addObs(std::shared_ptr<Observer> o)
{
	obs.push_back(o);
}

/////////////////////////////////////
void Sujet::remObs(std::shared_ptr<Observer> o)
{
	std::vector<std::shared_ptr<Observer>>::iterator iv(obs.begin());
	for(std::shared_ptr<Observer> ob : obs)
	{
		if(ob == o)
		{
			obs.erase(iv);
			return;
		}
		iv++;
	}
}
