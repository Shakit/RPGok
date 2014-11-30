//ComportementEnchanteur.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Classe  ComportementEnchanteur

#ifndef COMPORTEMENTENCHANTEUR_HPP
#define COMPORTEMENTENCHANTEUR_HPP

#include "ComportementClasse.hpp"
#include "Personnage.hpp"

class ComportementEnchanteur : public ComportementClasse
{
public :
	ComportementEnchanteur();
	void utiliserCompetence(int degats, Personnage & cible);
	std::string getDescription();
	void afficherClasse();
};

#endif //COMPORTEMENTENCHANTEUR_HPP

