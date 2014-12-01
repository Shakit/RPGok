/**
 * \file Affichage.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implémantation de la classe Affichage
 *
 * Pattern Affichage
 * Classe abstraite Affichage
 * Implémentation des méthodes de la classe Affichage
 *
 */

#include <iostream>
#include <vector>
#include <string>
#include "Affichage.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Construteur d'Affichage
 *
 * \param sujet à observer : pointeur de Sujet 
 */
Affichage::Affichage(std::shared_ptr<Sujet> s) : Observer(s)
{
    s->notify();

}

/*================================================================================*/
/*================================================================================*/
/*  AUTRES METHODES  */

/**
 * \brief Mise à jour
 *
 * Méthode de mise à jour des data
 *
 * \param nouvelles data : Data 
 */
void Affichage::update(Data d)
{
	Observer::update(d);
}

/*================================================================================*/
/**
 * \brief Affichage Personnage
 *
 * Méthode d'affichage d'un personnage 
 *
 */
void Affichage::afficherPerso()
{
	std::vector<std::string> v(data.getStats());

	std::cout << "================================" << std::endl
			  << "Nom : "  << v[1]<< std::endl
			  << "Vie : " << v[3] << "/" << v[4] << std::endl
			  << "Mana : " << v[6] << "/" << v[7] << std::endl
			  << v[8] << std::endl
			  << v[9] << std::endl
			  << v[10] << std::endl
			  << "================================" << std::endl;
}

/*================================================================================*/
/**
 * \brief Affichage Choix Aventure
 *
 * Méthode d'affichage des choix d'aventure s'offrants au joueur 
 *
 */
void Affichage::afficherChoixAventure()
{
	std::cout << std::endl
			  << "Choisissez l'aventure que vous voulez vivre !" << std::endl
			  << "\t (1) Aventure 1 : A la rescousse du capitaine Ichoux !" << std::endl
			  << "\t (2) Aventure 2 : Il faut sauver le soldat Java !" << std::endl
			  << std::endl;
}

/*================================================================================*/
/**
 * \brief Affichage Choix Tour
 *
 * Méthode d'affichage des choix s'offrants au joueur pendant son tour de combat
 *
 */
void Affichage::afficherChoixTour()
{
	std::cout << "Taper : " <<std::endl
			  << "\t (1) pour partir au combat ! BASTON ! " << std::endl
			  << "\t (2) pour changer de classe ou d'équipement ! " << std::endl
			  << "\t (3) pour aller voir la marchand ! " << std::endl
			  << "\t (4) pour quitter le jeu ! " << std::endl
			  << std::endl;
}
