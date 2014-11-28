//ComportementEnchanteur.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe ComportementEnchanteur

#include <iostream>
#include <string>
#include "ComportementEnchanteur.hpp"
#include "Personnage.hpp"

/////////////////////////////////////////////////////////
//ruteur
ComportementEnchanteur::ComportementEnchanteur()
{}

/////////////////////////////////////////////////////////
void  ComportementEnchanteur::utiliserCompetence(int degats, Personnage & cible)
{
  std::cout << "\tFire, fire everywhere !" << std::endl;
  cible.subirDegatsMagique(degats);
}

/////////////////////////////////////////////////////////
std::string ComportementEnchanteur::getDescription()
{
	return "Classe : Enchanteur";
}

/////////////////////////////////////////////////////////



