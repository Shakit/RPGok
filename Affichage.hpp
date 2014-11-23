/*===================================================

  Affichage.hpp
  author : Alicia Boucard, Guillaume Legru
  Déclaration des attributs et des méthodes de la classe Affichage

  ===================================================*/

#ifndef AFFICHAGE_HPP
#define AFFICHAGE_HPP

#include "Observer.hpp"
#include <vector>

class Affichage : public Observer
{
public :
	//methodes propres à l'Observer
	void update(std::vector<std::string> d);

	//autres méthodes
	void afficher();
	void choixJoueur(int & choix);

	
};

#endif //AFFICHAGE_HPP
