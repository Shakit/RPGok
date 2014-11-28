//ComportementMedic.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe ComportementMedic

#include <iostream>
#include <string>
#include "ComportementMedic.hpp"
#include "Personnage.hpp"

/////////////////////////////////////////////////////////
//construteur
ComportementMedic::ComportementMedic()
{}

/////////////////////////////////////////////////////////
void  ComportementMedic::utiliserCompetence(int degats, Personnage & cible)
{
  std::cout << "\tEasy je suis Medic." << std::endl;
  cible.soigner(cible);
}

/////////////////////////////////////////////////////////
std::string ComportementMedic::getDescription()
{
	return "Classe : Medic";
}

/////////////////////////////////////////////////////////

