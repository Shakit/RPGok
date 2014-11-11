//Personnage.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe Personnage

#include <iostream>
#include <string>
#include "Personnage.hpp"

/////////////////////////////////////////////////////////
//Construteur
Personnage::Personnage(std::string nom) : nom_(nom), vie_(100), vieMax_(100), mana_(100), manaMax_(100), arme_(0), armure_(0), compClasse_(0)
{
	arme_ = new Arme();
	armure_ = new Armure();
	compClasse_ = new ComportementBarbare();
}

/////////////////////////////////////////////////////////
//Destructeur
Personnage::~Personnage()
{
	delete arme_;
	delete armure_;
	delete compClasse_;
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
Arme * Personnage::getArme()
{
  return arme_;
}

/////////////////////////////////////////////////////////
Armure * Personnage::getArmure()
{
  return armure_;
}

/////////////////////////////////////////////////////////
ComportementClasse* Personnage::getCompClasse()
{
    return compClasse_;
}

/////////////////////////////////////////////////////////
void Personnage::setArme(Arme * arme)
{
    //Arme* asupp;
	arme_->setNom(arme->getNom());
	arme_->setDegat(arme->getDegat());
	//asupp = arme_;
	//arme_=arme;
	//delete(asupp);
	std::cout << "\t" << nom_ << " change d'arme : " << arme_->getNom() << "(" << arme_->getDegat()<< ")" << std::endl;
}

/////////////////////////////////////////////////////////
void Personnage::setArmure(Armure * armure)
{
	armure_->setNom(armure->getNom());
	armure_->setReducDegat(armure->getReducDegat());
	std::cout << "\t" << nom_ << " change d'armure : " << armure_->getNom() << "(" << armure_->getReducDegat()<< ")"<< std::endl;
}

/////////////////////////////////////////////////////////
void Personnage::setClasse(ComportementClasse* compClasse)
{
    delete compClasse_;
    compClasse_ = compClasse;
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
        compClasse_->attaquer();
        cible.subirDegats(arme_->getDegat());
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
	if (vie_ < 0)
	{
		vie_ = 0;
		std::cout << "Je suis mort... :(\n" << std::endl;
	}
	std::cout << "Je suis toujours vivant :)\n" << std::endl;
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
