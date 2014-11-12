//Arme.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe Arme

#ifndef ARME_HPP
#define ARME_HPP

#include <string>

class Arme
{
private :
  std::string nom_;
  int degat_;

public :
  Arme();
  Arme(std::string nom, int gdt);

  //getters
  std::string getNom();
  int getDegat();
  //setter
  void setNom(std::string nom);
  void setDegat(int gdt);
  //methodes
  void afficherArme();
};

#endif //ARME_HPP
