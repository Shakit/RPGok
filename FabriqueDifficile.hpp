//FabriqueDifficile.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe FabriqueDifficile

#ifndef FABRIQUEDIFFICILE_HPP
#define FABRIQUEDIFFICILE_HPP

#include "Fabrique.hpp"

class FabriqueDifficile : public Fabrique
{
	public :
		FabriqueDifficile();
		std::shared_ptr<Aventure> creer(int numAventure);
};

#endif //FABRIQUEDIFFICILE_HPP

