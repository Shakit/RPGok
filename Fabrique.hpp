//Fabrique.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe Fabrique

#ifndef FABRIQUE_HPP
#define FABRIQUE_HPP

#include <memory>
#include"Aventure.hpp"
#include"Aventure1Facile.hpp"
#include"Aventure2Facile.hpp"
#include"Aventure1Difficile.hpp"
#include"Aventure2Difficile.hpp"

class Fabrique
{
    protected :
        std::shared_ptr<Aventure> av_;

	public :
		Fabrique();
		virtual~Fabrique() = 0;
		virtual std::shared_ptr<Aventure> getAventure();
		virtual std::shared_ptr<Aventure> creer(int numAventure) = 0;
};

#endif //FABRIQUE_HPP
