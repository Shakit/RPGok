//Aventure.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Classe abstraite Aventure

#ifndef AVENTURE_HPP
#define AVENTURE_HPP

class Aventure
{
    public :
        virtual ~Aventure() = 0;
        virtual void afficheIntro() =0;
};

#endif //AVENTURE_HPP
