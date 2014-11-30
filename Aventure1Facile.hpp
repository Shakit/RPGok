//Aventure1Facile.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe Aventure1Facile

#ifndef AVENTURE1FACILE_HPP
#define AVENTURE1FACILE_HPP

#include"Aventure.hpp"

class Aventure1Facile : public Aventure
{
	public :
		Aventure1Facile();
		void afficheIntro();
		void affichePart1();
        void affichePart2();
        void affichePart3();
        void afficheFin();
};

#endif //AVENTURE1FACILE_HPP
