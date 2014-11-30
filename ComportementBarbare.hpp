//ComportementBarbare.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Classe  ComportementBarbare

#ifndef COMPORTEMENTBARBARE_HPP
#define COMPORTEMENTBARBARE_HPP

#include "ComportementClasse.hpp"
#include "Personnage.hpp"

class ComportementBarbare : public ComportementClasse
{
public :
    ComportementBarbare();
    void utiliserCompetence(int degats, Personnage & cible);
    std::string getDescription();
    void afficherClasse();
};

#endif //COMPORTEMENTBARBARE_HPP
