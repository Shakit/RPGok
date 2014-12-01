/**
 * \file FabriqueDifficile.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe FabriqueDifficile
 *
 * Pattern Factory Method
 * Classe concrete FabriqueDifficile
 * Déclaration des attributs et des méthodes de la classe FabriqueDifficile
 *
 */

#ifndef FABRIQUEDIFFICILE_HPP
#define FABRIQUEDIFFICILE_HPP

#include "Fabrique.hpp"

/**
 * \class FabriqueDifficile
 * \brief Fabrique d'aventure difficiles
 *
 * Classe créatrice concrete, produisant des aventures faciles
 *
 */
class FabriqueDifficile : public Fabrique
{
public :
	/**
	 * \brief Constructeur
	 *
	 * Constructeur de FabriqueDifficile
	 *
	 */
	FabriqueDifficile();

	/**
	 * \brief Création d'aventure 
	 *
	 * Création d'aventure en fonction d'un int passé en paramètre
	 *
	 * \param numAventure : int
	 * \return aventure crée :pointeur d'aventure
	 */
	std::shared_ptr<Aventure> creer(int numAventure);
};

#endif //FABRIQUEDIFFICILE_HPP

