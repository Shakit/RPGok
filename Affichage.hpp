/**
 * \file Affichage.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe Affichage
 *
 * Pattern Observer
 * Classe Affichage
 * Déclaration des attrubuts et des méthodes de la classe Affichage
 *
 */
#ifndef AFFICHAGE_HPP
#define AFFICHAGE_HPP

#include "Observer.hpp"
#include "Sujet.hpp"
#include <memory>
/**
 * \class Affichage
 * \brief Observer concret du pattern Observer
 * 
 * Classe jouant le role d'observer concret dans le pattern Observer
 *
 */
class Affichage : public Observer
{
public :
	/**
	 * \brief Constructeur
	 *
	 * Constructeur d'Affichage
	 *
	 * \param s: pointeur de Sujet
	 */
	Affichage(std::shared_ptr<Sujet> s);

	/**
	 * \brief Mise à jour
	 *
	 * Méthode de mise à jour 
	 *
	 * \param d : Data 
	 */
	void update(Data d);

	/**
	 * \brief Affichage Personnage
	 *
	 * Méthode d'affichage d'un personnage 
	 *
	 */
	void afficherPerso();

	/**
	 * \brief Affichage Choix Aventure
	 *
	 * Méthode d'affichage des choix d'aventure s'offrants au joueur 
	 *
	 */
	void afficherChoixAventure();

	/**
	 * \brief Affichage Choix Tour
	 *
	 * Méthode d'affichage des choix s'offrants au joueur pendant son tour de combat
	 *
	 */
	void afficherChoixTour();
};

#endif //AFFICHAGE_HPP
