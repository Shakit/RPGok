//Personnage.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe Personnage

#include <iostream>
#include <string>
#include <memory>
#include "Personnage.hpp"
#include "Data.hpp"
#include "Observer.hpp"
#include <vector>

/////////////////////////////////////////////////////////
//Construteur
Personnage::Personnage(std::string nom) :
    nom_(nom), vie_(100), vieMax_(100), mana_(100), manaMax_(100),
	arme_(new Arme()), armure_(new Armure()), compClasse_(new ComportementBarbare())
{
}

/////////////////////////////////////////////////////////
//Destructeur
Personnage::~Personnage()
{
}

/////////////////////////////////////////////////////////
//getters
std::string Personnage::getNom()
{
	return nom_;
}

/////////////////////////////////////////////////////////
int Personnage::getVie()
{
	return vie_;
}

/////////////////////////////////////////////////////////
int Personnage::getVieMax()
{
	return vieMax_;
}

/////////////////////////////////////////////////////////
int Personnage::getMana()
{
	return mana_;
}

/////////////////////////////////////////////////////////
int Personnage::getManaMax()
{
	return manaMax_;
}

/////////////////////////////////////////////////////////
std::shared_ptr<Arme> Personnage::getArme()
{
	return arme_;
}

/////////////////////////////////////////////////////////
std::shared_ptr<Armure> Personnage::getArmure()
{
	return armure_;
}

/////////////////////////////////////////////////////////
std::shared_ptr<ComportementClasse> Personnage::getCompClasse()
{
	return compClasse_;
}
/////////////////////////////////////////////////////////
void  Personnage::setVie(int vie)
{
	vie_ = vie;
	notify();
}
/////////////////////////////////////////////////////////
void Personnage::setArme(std::shared_ptr<Arme> arme)
{
	//Arme* asupp;
	//arme_->setNom(arme->getNom());
	//arme_->setDegat(arme->getDegat());
	//asupp = arme_;
	//arme_=arme;
	//delete(asupp);
	arme_ = arme;
	std::cout << "\t" << nom_ << " change d'arme : " << arme_->getNom() << "(" << arme_->getDegat()<< ")" << std::endl;
	notify();
}

/////////////////////////////////////////////////////////
void Personnage::setArmure(std::shared_ptr<Armure> armure)
{
	//armure_->setNom(armure->getNom());
	//armure_->setReducDegat(armure->getReducDegat());
	armure_ = armure;
	std::cout << "\t" << nom_ << " change d'armure : " << armure_->getNom() << "(" << armure_->getReducDegat()<< ")"<< std::endl;
	notify();
}

/////////////////////////////////////////////////////////
void Personnage::setClasse(std::shared_ptr<ComportementClasse> compClasse)
{
	compClasse_ = compClasse;
	notify();
}

/////////////////////////////////////////////////////////
//methodes
bool Personnage::estVivant()
{
	return (vie_ > 0);
}

/////////////////////////////////////////////////////////
void Personnage::attaque(Personnage & cible)
{
	if(estVivant())
    {
		std::cout << "\tAttaque de " << nom_ << " sur " << cible.getNom() << " ! " << std::endl;
		compClasse_->utiliserCompetence(arme_->getDegat(), cible);
    }
	else
    {
		std::cout << "Impossible, votre personnage est mort." << std::endl;
    }
}

/////////////////////////////////////////////////////////
void Personnage::subirDegats(int dgt)
{

	vie_ -= (dgt - (armure_->getReducDegat()));
	std::cout << "\t" << nom_ << " dit : Aïe ! ";
	if (!estVivant())
    {
		vie_ = 0;
		std::cout << "Je suis mort... :(\n" << std::endl;
    }
	else
    {
		std::cout << "Je suis toujours vivant :)\n" << std::endl;
    }
	notify();
}

/////////////////////////////////////////////////////////
void Personnage::subirDegatsMagique(int dgt)
{
	vie_ -= (dgt);
	mana_ -= 10;
	std::cout << "\t" << nom_ << " dit : Aïe ! ";
	if (!estVivant())
    {
		vie_ = 0;
		std::cout << "Je suis mort... :(\n" << std::endl;
    }
	else
    {
		std::cout << "Je suis toujours vivant :)\n" << std::endl;
    }
	notify();
}

/////////////////////////////////////////////////////////
void Personnage::soigner(Personnage & cible)
{
	cible.setVie(cible.getVie() + 25);
}

/////////////////////////////////////////////////////////
void Personnage::afficher()
{
	std::cout << "\n------------------------------" << std::endl;
	std::cout << nom_ << " : " << std::endl;
	std::cout << "Vie : " << vie_ << " / " << vieMax_ << std::endl;
	std::cout << "Mana : " << mana_ << " / " << manaMax_ << std::endl;
	std::cout << "\tEquipe :" << std::endl;
	arme_->afficherArme();
	armure_->afficherArmure();
	compClasse_->getDescription();
	std::cout << "\n------------------------------" << std::endl;
}

/////////////////////////////////////////////////////////
void Personnage::notify()
{
	std::vector<std::string> tab;
	std::string bob;

	tab.emplace_back("nom");
	tab.emplace_back(nom_);
	tab.emplace_back("vie");
	bob= vie_;
	tab.emplace_back(bob);
	bob = vieMax_;
	tab.emplace_back(bob);
	tab.emplace_back("mana");
	bob = mana_;
	tab.emplace_back(bob);
	bob = manaMax_;
	tab.emplace_back(bob);
	tab.emplace_back(arme_->afficherArme());
	tab.emplace_back(armure_->afficherArmure());
	tab.emplace_back(compClasse_->getDescription());

	Data d(tab);
	
	for (std::shared_ptr<Observer> o : obs)
	{
		(*o).update(d);
	}
}
