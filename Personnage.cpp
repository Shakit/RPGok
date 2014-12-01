/**
 * \file Personnage.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implementation de la classe Personnage
 *
 * Pattern Observer (sujet concret)
 * Pattern Strategy (classe cliente)
 * Classe Personnage
 * Implementation des méthodes de la classe Personnage
 *
*/

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include "Personnage.hpp"
#include "Data.hpp"
#include "Observer.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur de Personnage.
 * Initiaalisation des champs de Personnage, Le comportement de classe par défaut
 * est le comportement Barbare
 *
 * \param nom : string
 */
Personnage::Personnage(std::string nom) :
    nom_(nom), vie_(100), vieMax_(100), mana_(100), manaMax_(100),
	arme_(new Arme()), armure_(new Armure()), compClasse_(new ComportementBarbare()){}

/*================================================================================*/
/**
 * \brief Destructeur
 *
 * Destructeur de Personnage.
 * 
 */
Personnage::~Personnage(){}


/*================================================================================*/
/*================================================================================*/
/*  GETTERS */

/**
 * \brief Getter de nom 
 *
 * Getter de nom 
 *
 * \return nom : string
 */
std::string Personnage::getNom()
{
	return nom_;
}

/*================================================================================*/
/**
 * \brief Getter de vie
 *
 * Getter de vie
 *
 * \return vie : int
 */
int Personnage::getVie()
{
	return vie_;
}

/*================================================================================*/
/**
 * \brief Getter de vie max 
 *
 * Getter de vie max
 *
 * \return vie max : int 
 */
int Personnage::getVieMax()
{
	return vieMax_;
}

/*================================================================================*/
/**
 * \brief Getter de mana
 *
 * Getter de mana
 *
 * \return mana : int 
 */
int Personnage::getMana()
{
	return mana_;
}

/*================================================================================*/
/**
 * \brief Getter de mana max
 *
 * Getter de mana 
 *
 * \return mana max : int x
 */
int Personnage::getManaMax()
{
	return manaMax_;
}

/*================================================================================*/
/**
 * \brief Getter d'armure
 *
 * Getter d'arme
 *
 * \return arme : pointeur d'arme
 */
std::shared_ptr<Arme> Personnage::getArme()
{
	return arme_;
}

/*================================================================================*/
/**
 * \brief Getter d'armure
 *
 * Getter d'armure
 *
 * \return armure : pointeur d'armure
 */
std::shared_ptr<Armure> Personnage::getArmure()
{
	return armure_;
}

/*================================================================================*/
/**
 * \brief Getter de comportement de classe
 *
 * Getter de comportemenr de classe
 *
 * \return compClasse : pointeur de comportement de classe
 */
std::shared_ptr<ComportementClasse> Personnage::getCompClasse()
{
	return compClasse_;
}


/*================================================================================*/
/*================================================================================*/
/*  SETTERS  */

/**
 * \brief Setter de vie
 *
 * Setter de vie 
 *
 * \param vie : int
 */
void  Personnage::setVie(int vie)
{
	vie_ = vie;
	notify();
}

/*================================================================================*/
/**
 * \brief Setter d'arme 
 *
 * Setter d'arme 
 *
 * \param arme : pointeur d'arme
 */
void Personnage::setArme(std::shared_ptr<Arme> arme)
{
	arme_ = arme;
	std::cout << "\t" << nom_ << " change d'arme : " << arme_->getNom() << "(" << arme_->getDegat()<< ")" << std::endl;
	notify();
}

/*================================================================================*/
/**
 * \brief Setter d'armure 
 *
 * Setter d'armure 
 *
 * \param armure : pointeur d'armure
 */
void Personnage::setArmure(std::shared_ptr<Armure> armure)
{
	armure_ = armure;
	std::cout << "\t" << nom_ << " change d'armure : " << armure_->getNom() << "(" << armure_->getReducDegat() << ")" << std::endl;
	notify();
}

/*================================================================================*/
/**
 * \brief Setter de comportement de classe 
 *
 * Setter de comportement de classe 
 *
 * \param comportement de classe : pointeur de comportement de classe
 */
void Personnage::setClasse(std::shared_ptr<ComportementClasse> compClasse)
{
	compClasse_ = compClasse;
	std::cout << "\t" << nom_ << " change : " << compClasse_->getDescription() << std::endl;
	notify();
}


/*================================================================================*/
/*================================================================================*/
/*  AUTRES METHODES  */

/**
 * \brief estVivant
 *
 * Méthode renvoyant vrai si le personnage est vivant, faux sinon
 *
 * \return true si vie > 0, false sinon
 */
bool Personnage::estVivant()
{
	return (vie_ > 0);
}

/*================================================================================*/
/**
 * \brief Attaque
 *
 * Méthode d'attaque
 *
 */
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

/*================================================================================*/
/**
 * \brief Perte de points de vie
 *
 * Perte de points de vie due à une attaque physique, avec réduction des dégats par l'armure.
 *
 */
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

/*================================================================================*/
/**
 * \brief Perte de points de vie due à attaque magique
 *
 * Perte de point de vie due à une attaque magique, sans réduction de dégats
 *
 */
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

/*================================================================================*/
/**
 * \brief Gain de vie 
 *
 * Gain de points de vie dû à un soin
 *
 */
void Personnage::soigner(Personnage & cible)
{
	cible.setVie(cible.getVie() + 25);
}

/*================================================================================*/
/**
 * \brief Affichage
 *
 * Affichage des statistiques.
 * Méthodes rendue inutile par l'utilisation de l'Observer
 *
 */
void Personnage::afficher()
{
	std::cout << "\n------------------------------" << std::endl;
	std::cout << nom_ << " : " << std::endl;
	std::cout << "Vie : " << vie_ << " / " << vieMax_ << std::endl;
	std::cout << "Mana : " << mana_ << " / " << manaMax_ << std::endl;
	std::cout << "\tEquipe :" << std::endl;
	arme_->afficherArme();
	armure_->afficherArmure();
	compClasse_->afficherClasse();
	std::cout << "\n------------------------------" << std::endl;
}

/*================================================================================*/
/**
 * \brief Notification
 *
 * Méthode de notification
 *
 */
void Personnage::notify()
{
	std::vector<std::string> tab;

	tab.push_back("nom");
	tab.push_back(nom_);
	tab.push_back("vie");
	tab.push_back(std::to_string(vie_));
	tab.push_back(std::to_string(vieMax_));
	tab.push_back("mana");
	tab.push_back(std::to_string(mana_));
	tab.push_back(std::to_string(manaMax_));
	tab.push_back(arme_->afficherArme());
	tab.push_back(armure_->afficherArmure());
	tab.push_back(compClasse_->getDescription());

	Data d(tab);

	for (std::shared_ptr<Observer> o : obs)
	{
		o->update(d);
	}
}

