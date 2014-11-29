//Affichage.hpp
//author : Alicia Boucard Guillaume Legru

#ifndef AFFICHAGE_HPP
#define AFFICHAGE_HPP

#include "Observer.hpp"
#include "Sujet.hpp"
#include <memory>

class Affichage : public Observer
{
public :
	//Ctor
	Affichage(std::shared_ptr<Sujet> s);

	//inherit from Observer
	void update(Data d);
	void afficherPerso();
};

#endif //AFFICHAGE_HPP	
