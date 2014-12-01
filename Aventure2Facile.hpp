/**
 * \file Aventure2Facile.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe Aventure2Facile
 *
 * Pattern Factory Method
 * Classe  Aventure2Facile
 * Déclaration des attributs et des méthodes de la classe Aventure2Facile
 *
 */

#ifndef AVENTURE2FACILE_HPP
#define AVENTURE2FACILE_HPP

#include"Aventure.hpp"

/**
 * \class Aventure2Facile
 * \brief classe abstraite aventure
 *
 * Classe d'aventure concrete
 *
 */
class Aventure2Facile : public Aventure
{
public :
	/**
	 * \brief Constructeur
	 *
	 * Constructeur d'aventure
	 *
	 */
	Aventure2Facile();

	/**
	 * \brief Affichage de l'intro
	 *
	 * Affichage de l'intro de l'aventure
	 *
	 */
	void afficheIntro();

	/**
	 * \brief Affichage de la partie 1
	 *
	 * Affichage de la 1ere partie de l'aventure
	 *
	 */
	void affichePart1();

	/**
	 * \brief Affichage de la partie 2
	 *
	 * Affichage de la 2eme partie de l'aventure
	 *
	 */
	void affichePart2();

	/**
	 * \brief Affichage de la partie 3
	 *
	 * Affichage de la 3eme partie de l'aventure
	 *
	 */
	void affichePart3();

	/**
	 * \brief Affichage de la fin
	 *
	 * Affichage de la fin de l'aventure
	 *
	 */
	void afficheFin();
};

#endif //AVENTURE2FACILE_HPP
