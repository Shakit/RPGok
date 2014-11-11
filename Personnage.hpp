//Personnage.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe Personnage

#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string>
#include "Arme.hpp"
#include "Armure.hpp"
#include "ComportementClasse.hpp"
#include "ComportementBarbare.hpp"

//niveau peut etre une classe
//bourse en attribut des sousous

class Personnage
{
	private :
		std::string nom_;
		int vie_;
		int vieMax_;
		int mana_;
		int manaMax_;
		Arme* arme_;
		Armure* armure_;
		ComportementClasse * compClasse_;

	public :
		//Construteur
		Personnage(std::string nom);
		//Destructeur
		~Personnage();

		//getters
		std::string getNom();
		int getVie();
		int getVieMax();
		int getMana();
		int getManaMax();
		Arme* getArme();
		Armure* getArmure();
		ComportementClasse* getCompClasse();

		//setters utiles
		void setArme(Arme* arme);
		void setArmure(Armure* armure);
		void setClasse(ComportementClasse* compClasse);

		//methodes
		bool estVivant();
		void attaque(Personnage & cible);
		void subirDegats(int dgt);
		void afficher();
};

#endif //PERSONNAGE_HPP
