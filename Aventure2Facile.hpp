//Aventure2Facile.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe Aventure2Facile

#ifndef AVENTURE2FACILE_HPP
#define AVENTURE2FACILE_HPP

#include"Aventure.hpp"

class Aventure2Facile : public Aventure
{
	public :
		Aventure2Facile();
		void afficheIntro();
		void affichePart1();
        void affichePart2();
        void affichePart3();
        void afficheFin();
};

#endif //AVENTURE2FACILE_HPP
