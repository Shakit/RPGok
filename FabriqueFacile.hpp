/**
 * \file FabriqueFacile.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe FabriqueFacile
 *
 * Pattern Factory Method
 * Classe concrete FabriqueFacile
 * Déclaration des attributs et des méthodes de la classe FabriqueFacile
 *
 */


#ifndef FABRIQUEFACILE_HPP
#define FABRIQUEFACILE_HPP

#include "Fabrique.hpp"

/**
 * \class FabriqueFacile
 * \brief Fabrique d'aventure faciles
 *
 * Classe créatrice concrete, produisant des aventures faciles
 *
 */
class FabriqueFacile : public Fabrique
{
public :
	/**
	 * \brief Constructeur
	 *
	 * Constructeur de FabriqueFacile
	 *
	 */
	FabriqueFacile();

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

#endif //FABRIQUEFACILE_HPP
