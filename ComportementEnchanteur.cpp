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
void ComportementEnchanteur::getDescription()
{
  std::cout << "Classe : Enchanteur" << std::endl;
}

/////////////////////////////////////////////////////////



