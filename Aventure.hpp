/**
 * \file Aventure.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe Aventure
 *
 * Pattern Factory Method
 * Classe  Aventure
 * Déclaration des attributs et des méthodes de la classe Aventure
 *
 */

#ifndef AVENTURE_HPP
#define AVENTURE_HPP

#include <memory>
#include "Personnage.hpp"

/**
 * \class Aventure
 * \brief classe abstraite aventure
 *
 * Classe mère de toute les aventures
 *
 */
class Aventure
{
protected:
	std::shared_ptr<Personnage> ennemi1_;
	std::shared_ptr<Personnage> ennemi2_;
	std::shared_ptr<Personnage> boss_;
	
public :
	/**
	 * \brief Destructeur
	 *
	 * Destructeur d'aventure
	 *
	 */
	virtual ~Aventure() = 0;

	/**
	 * \brief Affichage de l'intro
	 *
	 * Affichage de l'intro de l'aventure
	 *
	 */
	virtual void afficheIntro() = 0;

	/**
	 * \brief Affichage de la partie 1
	 *
	 * Affichage de la 1ere partie de l'aventure
	 *
	 */
	virtual void affichePart1() = 0;

	/**
	 * \brief Affichage de la partie 2
	 *
	 * Affichage de la 2eme partie de l'aventure
	 *
	 */
	virtual void affichePart2() = 0;

	/**
	 * \brief Affichage de la partie 3
	 *
	 * Affichage de la 3eme partie de l'aventure
	 *
	 */
	virtual void affichePart3() = 0;

	/**
	 * \brief Affichage de la fin
	 *
	 * Affichage de la fin de l'aventure
	 *
	 */
	virtual void afficheFin() = 0;
};

#endif //AVENTURE_HPP
