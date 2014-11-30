//FabriqueDifficile.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe FabriqueDifficile

#include <iostream>
#include <string>
#include "FabriqueDifficile.hpp"

/////////////////////////////////////////////////////////
 //Construteur
FabriqueDifficile::FabriqueDifficile(){}

/////////////////////////////////////////////////////////
std::shared_ptr<Aventure> FabriqueDifficile::creer(int numAventure)
{
    if(numAventure == 1)
    {
        std::shared_ptr<Aventure> a1(new Aventure1Difficile());
        av_= a1;
    }
    if(numAventure == 2)
    {
        std::shared_ptr<Aventure> a2(new Aventure2Difficile());
        av_ = a2;
    }
    return av_;
}

/////////////////////////////////////////////////////////

