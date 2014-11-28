//Aventure1Facile.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe Aventure1

#include <iostream>
#include <string>
#include "Aventure1Facile.hpp"

/////////////////////////////////////////////////////////
 //Construteur
Aventure1Facile::Aventure1Facile()
 {}

 /////////////////////////////////////////////////////////
void Aventure1Facile::afficheIntro()
{
    std::cout << "\t\t \"A la rescousse du capitaine Ichoux !\"\n " << std::endl;
    std::cout << "Votre bateau a fait naufrage et vous vous reveillez sur une ile tropicale...seul. " << std::endl;
    std::cout << "Tout l'équipage a disparu. Vous choisissez donc d'aller parcourir cette île pour retrouver vos amis et surtout votre capitaine, bah oui c'est lui qui vous paye quand même!" << std::endl;

}

/////////////////////////////////////////////////////////
