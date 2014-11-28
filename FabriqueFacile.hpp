//FabriqueFacile.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe FabriqueFacile

#ifndef FABRIQUEFACILE_HPP
#define FABRIQUEFACILE_HPP

//#include <memory>
//#include "Aventure.hpp"
//#include "Aventure1Facile.hpp"
//#include "Aventure2Facile.hpp"
#include "Fabrique.hpp"

class FabriqueFacile : public Fabrique
{
	public :
		FabriqueFacile();
		std::shared_ptr<Aventure> creer(int numAventure);
};

#endif //FABRIQUEFACILE_HPP

