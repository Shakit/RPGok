/*===================================================

  Affichage.cpp
  author : Alicia Boucard, Guillaume Legru
  Implementation des méthodes de la classe Affichage

  ===================================================*/

#include "Affichage.hpp"
#include <iostream>
#include <cstdlib>

/////////////////////////////////////////////////////
void Affichage::update(std::vector<std::string> d)
{
	data_=d;
	afficher();
}

/////////////////////////////////////////////////////
void Affichage::afficher()
{

}

/////////////////////////////////////////////////////
void choixJoueur(int & choix)
{
	do
	{
        std::cout << "Tapez : " << std::endl;
        std::cout << "(1) pour partir au combat (BASTON!). " << std::endl;
        std::cout << "(2) pour modifier Equipement/Classe. " << std::endl;
        std::cout << "(3) pour aller voir le marchand. " << std::endl;
        std::cout << "(4) pour quitter le jeu. " << std::endl;
        std::cin >> choix;
	} while (choix<1 && choix>4);
}
