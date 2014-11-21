/*===============================================

  Observer.cpp
  author : Alicia Boucard, Guillaume Legru
  Implementation de la classe Observer

  ===============================================*/

#include "Observer.hpp"
#include "Sujet.hpp"
#include <string>

//////////////////////////////////////////////////
// Ctor
Observer::Observer() : sujet_(), data_()
{}

Observer::Observer(vector<Sujet> s) : sujet_(s), data_()
{
	for( Sujet suj : sujet_)
	{
		sujet_.addObs(this);
	}
}

/////////////////////////////////////////////////
// other methods

void Observer::update(vector<string> data)
{
	data_ = data;
}

////////////////////////////////////////////////
void addSujet(Sujet & s)
{
	sujet_.push_back(s);
	s.addObs(this);		
}
