//Fabrique.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe Fabrique

#include <iostream>
#include <string>

#include "Fabrique.hpp"

/////////////////////////////////////////////////////////
 //Construteur
Fabrique::Fabrique(){}

/////////////////////////////////////////////////////////
 std::shared_ptr<Aventure> Fabrique::getAventure()
 {
    return av_;
 }

/////////////////////////////////////////////////////////
std::shared_ptr<Aventure> Fabrique::creer(int numAventure)
{
    if(numAventure == 1)
    {
        std::shared_ptr<Aventure> a(new Aventure1());
        av_= a;
    }
   /* if(numAventure == 2)
    {
       // av_ = new Aventure2();
    }
    */
    return av_;
}

/////////////////////////////////////////////////////////
