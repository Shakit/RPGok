//Personnage.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe Personnage

#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

/////////////////////////////////////////////////////////
//Construteur
Personnage::Personnage(std::string nom) : nom_(nom), vie_(100), vieMax_(100), mana_(100), manaMax_(100), arme_(0)
{
	arme_ = new Arme();
}

/////////////////////////////////////////////////////////
//Destructeur
Personnage::~Personnage()
{
	delete arme_;
}

/////////////////////////////////////////////////////////
//getters
string Personnage::getNom()
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
void Personnage::setArme(Arme * arme)
{
	//arme_->setNom(arme->getNom());
	//arme_->setDegat(arme->getDegat());
	arme_=arme;
	cout << "Moi " << nom_ << ", je change d'arme ! " << endl;
}

/////////////////////////////////////////////////////////
//methodes
bool Personnage::estVivant()
{
  return (vie_ > 0);
}

/////////////////////////////////////////////////////////
void Personnage::attaqueBasique(Personnage & cible)
{
    cout << "\nAttaque basique de " << nom_ << " sur " << cible.getNom() << " ! " << endl;
    cible.subirDegats(arme_->getDegat());

}

/////////////////////////////////////////////////////////
void Personnage::subirDegats(int dgt)
{
	vie_ -= dgt;
	cout << nom_ << " dit : Aïe ! ";
	if (vie_ < 0)
	{
		vie_ = 0;
		cout << "Je suis mort... :( " << endl;
	}
	cout << "Je suis toujours vivant :)" << endl;
}

/////////////////////////////////////////////////////////
void Personnage::afficher()
{
	cout << "\n************************************" << endl;
	cout << nom_ << " : " << endl;
	cout << "Vie : " << vie_ << " / " << vieMax_ << endl;
	cout << "Mana : " << mana_ << " / " << manaMax_ << endl;
	arme_->afficherArme();
	cout << "************************************" << endl;
}

/////////////////////////////////////////////////////////
