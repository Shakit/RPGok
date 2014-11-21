/*===================================================

  Affichage.hpp
  author : Alicia Boucard, Guillaume Legru
  Déclaration des attributs et des méthodes de la classe Affichage

  ===================================================*/

#ifndef AFFICHAGE_HPP
#define AFFICHAGE_HPP

class Affichage : public Observer
{
public :
	void update(Data d);
	void afficher();
};

#endif //AFFICHAGE_HPP
