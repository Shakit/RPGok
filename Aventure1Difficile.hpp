//Aventure1Difficile.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe Aventure1Difficile

#ifndef AVENTURE1DIFFICILE_HPP
#define AVENTURE1DIFFICILE_HPP

#include"Aventure.hpp"

class Aventure1Difficile : public Aventure
{
	public :
		Aventure1Difficile();
		void afficheIntro();
		void affichePart1();
        void affichePart2();
        void affichePart3();
        void afficheFin();
};

#endif //AVENTURE1DIFFICILE_HPP

