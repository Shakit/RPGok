//Aventure.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Classe abstraite Aventure

#ifndef AVENTURE_HPP
#define AVENTURE_HPP

#include <memory>
#include "Personnage.hpp"

class Aventure
{
    protected:
        std::shared_ptr<Personnage> ennemi1_;
        std::shared_ptr<Personnage> ennemi2_;
        std::shared_ptr<Personnage> boss_;
    public :
        virtual ~Aventure() = 0;
        virtual void afficheIntro() = 0;
        virtual void affichePart1() = 0;
        virtual void affichePart2() = 0;
        virtual void affichePart3() = 0;
        virtual void afficheFin() = 0;
};

#endif //AVENTURE_HPP
