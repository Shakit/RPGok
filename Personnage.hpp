//Personnage.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe Personnage

#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string>
#include <memory>
#include "Arme.hpp"
#include "Armure.hpp"
#include "ComportementClasse.hpp"
#include "ComportementBarbare.hpp"
#include "ComportementMedic.hpp"
#include "ComportementEnchanteur.hpp"
#include "Sujet.hpp"
//niveau peut etre une classe
//bourse en attribut des sousous

class Personnage : public Sujet
{
private :
	std::string nom_;
	int vie_;
	int vieMax_;
	int mana_;
	int manaMax_;
	std::shared_ptr<Arme> arme_;
	std::shared_ptr<Armure> armure_;
	std::shared_ptr<ComportementClasse> compClasse_;

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
	std::shared_ptr<Arme> getArme();
	std::shared_ptr<Armure> getArmure();
	std::shared_ptr<ComportementClasse> getCompClasse();

	//setters utiles
	void setVie(int vie);
	void setArme(std::shared_ptr<Arme> arme);
	void setArmure(std::shared_ptr<Armure> armure);
	void setClasse(std::shared_ptr<ComportementClasse> compClasse);

	//methodes
	bool estVivant();
	void attaque(Personnage & cible);
	void subirDegats(int dgt);
	void subirDegatsMagique(int dgt);
	void soigner(Personnage & cible);
	void afficher();
	void notify();
};

#endif //PERSONNAGE_HPP
