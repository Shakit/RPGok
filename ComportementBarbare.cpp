//ComportementBarbare.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe ComportementBarbare

#include <iostream>
#include <string>
#include "ComportementBarbare.hpp"

/////////////////////////////////////////////////////////
//Construteur
ComportementBarbare::ComportementBarbare()
{

}

/////////////////////////////////////////////////////////
void  ComportementBarbare::attaquer(const Personnage & attaquant, Personnage & cible)
{
  std::cout << "\tEn mode Barbare !" << std::endl;
  cible.subirDegats(attaquant.getArme().getDegat());
}

/////////////////////////////////////////////////////////
void ComportementBarbare::getDescription()
{
  std::cout << "Classe : Barbare" << std::endl;
}

/////////////////////////////////////////////////////////
  // void  ComportementBarbare::soigner()
  // {

  // }

  // /////////////////////////////////////////////////////////
  // void  ComportementBarbare::attMagique()
  // {

  // }
/////////////////////////////////////////////////////////
