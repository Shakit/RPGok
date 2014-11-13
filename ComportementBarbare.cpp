//ComportementBarbare.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe ComportementBarbare

#include <iostream>
#include <string>
#include "ComportementBarbare.hpp"
#include "Personnage.hpp"

/////////////////////////////////////////////////////////
//ruteur
ComportementBarbare::ComportementBarbare()
{

}

/////////////////////////////////////////////////////////
void  ComportementBarbare::attaquer(int degats, Personnage & cible)
{
  std::cout << "\tEn mode Barbare !" << std::endl;
  cible.subirDegats(degats);
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
