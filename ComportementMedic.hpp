//ComportementMedic.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Classe  ComportementMedic

#ifndef COMPORTEMENTMEDIC_HPP
#define COMPORTEMENTMEDIC_HPP

#include "ComportementClasse.hpp"
#include "Personnage.hpp"

class ComportementMedic : public ComportementClasse
{
public :
    ComportementMedic();
    void utiliserCompetence(int degats, Personnage & cible);
    std::string getDescription();
    void afficherClasse();
};

#endif //COMPORTEMENTMEDIC_HPP
