//FabriqueFacile.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe FabriqueFacile

#include <iostream>
#include <string>
#include "FabriqueFacile.hpp"

/////////////////////////////////////////////////////////
 //Construteur
FabriqueFacile::FabriqueFacile()
{}

/////////////////////////////////////////////////////////
std::shared_ptr<Aventure> FabriqueFacile::creer(int numAventure)
{
    if(numAventure == 1)
    {
        std::shared_ptr<Aventure> a1(new Aventure1Facile());
        av_= a1;
    }
    if(numAventure == 2)
    {
        std::shared_ptr<Aventure> a2(new Aventure2Facile());
        av_ = a2;
    }
    return av_;
}

/////////////////////////////////////////////////////////

