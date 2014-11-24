//Fabrique.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe Fabrique

#ifndef FABRIQUE_HPP
#define FABRIQUE_HPP

#include <memory>
#include"Aventure.hpp"
#include"Aventure1.hpp"

class Fabrique
{
    private :
        std::shared_ptr<Aventure> av_;

	public :
		Fabrique();
		std::shared_ptr<Aventure> getAventure();
		std::shared_ptr<Aventure> creer(int numAventure);
};

#endif //AVENTURE1_HPP
