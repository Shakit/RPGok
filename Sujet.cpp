//Sujet.cpp
//author : Alicia Boucard, Guillaume Legru
//implementation des méthodes de la classe Sujet

#include "Sujet.hpp"

//////////////////////////////////////////////////////
//Ctor
Sujet::Sujet() : obs_()
{
}


//////////////////////////////////////////////////////
//setter de data_
// void Sujet::setData(Data d)
// {
// 	data_ = d;
// 	notify();
// }

//////////////////////////////////////////////////////
//addObs
void Sujet::addObs(Observer o)
{
	obs_.push_back(o);
}

//////////////////////////////////////////////////////
//delObs
void Sujet::delObs(Observer o)
{
	for(int i = 0, i < obs_.size(), ++i)
	{
		if (obs_[i] == o)
		{
			erase(obs_.begin()+i)
		}
	}
}


//////////////////////////////////////////////////////
//notify
void Sujet::notify()
{
	for (Observer o : obs_)
	{
		o.update(data_);
	}
}
