/**
 * \file Fabrique.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe Fabrique
 *
 * Pattern Factory Method
 * Classe abstraite Fabrique
 * Déclaration des attributs et des méthodes de la classe Fabrique
 *
 */


#ifndef FABRIQUE_HPP
#define FABRIQUE_HPP

#include <memory>
#include"Aventure.hpp"
#include"Aventure1Facile.hpp"
#include"Aventure2Facile.hpp"
#include"Aventure1Difficile.hpp"
#include"Aventure2Difficile.hpp"


/**
 * \class Fabrique
 * \brief Fabrique d'aventure
 *
 * Classe asbstraite, mère des Fabriques Facile et Difficile.
 *
 */
class Fabrique
{
protected :
	std::shared_ptr<Aventure> av_;

public :
	/**
	 * \brief Constructeur
	 *
	 * Constructeur de Fabrique
	 *
	 */
	Fabrique();

	/**
	 * \brief Destructeur
	 *
	 * Destructeur de Fabrique
	 *
	 */
	virtual~Fabrique() = 0;

	/**
	 * \brief Getter d'aventure
	 *
	 * Getter d'aventure
	 *
	 * \return avanture : pointeur d'aventure 
	 */
	virtual std::shared_ptr<Aventure> getAventure();

	/**
	 * \brief Création d'aventure
	 *
	 * Création d'une aventure en fonction de l'int passé en paramètre
	 *
	 * \param numéro d'aventure : int
	 * \return aventure crée : pointeur d'aventure
	 */
	virtual std::shared_ptr<Aventure> creer(int numAventure) = 0;
};

#endif //FABRIQUE_HPP
