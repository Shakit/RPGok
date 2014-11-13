//ComportementClasse.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Classe abstraite ComportementClasse

#ifndef COMPORTEMENTCLASSE_HPP
#define COMPORTEMENTCLASSE_HPP

class Personnage;

class ComportementClasse
{
public :
  virtual ~ComportementClasse() = 0;
  virtual void attaquer(int degats, Personnage & cible) = 0;
  virtual void getDescription() = 0;
  //virtual void soigner() = 0;
  //virtual void attMagique() = 0;
};

#endif //COMPORTEMENTCLASSE_HPP
