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
  virtual void utiliserCompetence(int degats, Personnage & cible) = 0;
  
  virtual void getDescription() = 0;

};

#endif //COMPORTEMENTCLASSE_HPP
