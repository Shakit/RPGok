//Aventure2Difficile.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe Aventure2Difficile

#ifndef AVENTURE2DIFFICILE_HPP
#define AVENTURE2DIFFICILE_HPP

#include"Aventure.hpp"

class Aventure2Difficile : public Aventure
{
	public :
		Aventure2Difficile();
		void afficheIntro();
		void affichePart1();
        void affichePart2();
        void affichePart3();
        void afficheFin();
};

#endif //AVENTURE2DIFFICILE_HPP

