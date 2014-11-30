//ComportementBarbare.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe ComportementBarbare

#include <iostream>
#include <string>
#include "ComportementBarbare.hpp"

/////////////////////////////////////////////////////////
//ruteur
ComportementBarbare::ComportementBarbare(){}

/////////////////////////////////////////////////////////
void  ComportementBarbare::utiliserCompetence(int degats, Personnage & cible)
{
  std::cout << "\tEn mode Barbare !" << std::endl;
  cible.subirDegats(degats);
}

/////////////////////////////////////////////////////////
std::string ComportementBarbare::getDescription()
{
	return "Classe : Barbare";
}

/////////////////////////////////////////////////////////
void ComportementBarbare::afficherClasse()
{
    std::cout << "Classe : " << this->getDescription() << std::endl;
}

/////////////////////////////////////////////////////////
