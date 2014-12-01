/**
 * \file Sujet.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe Sujet
 *
 * Pattern Observer
 * Classe Sujet
 * Declaration des attributs et des méthodes de la classe Sujet
 *
*/

#ifndef SUJET_HPP
#define SUJET_HPP

#include <vector>
#include <memory>
#include "Observer.hpp"
#include "Data.hpp"

/**
 * \class Observer
 * \brief Déclaration de la classe Observer
 *
 * La classe Observer est déclarée car présente dans Sujet en tant qu'attribut.
 * Contournement des probleme de compilation introduit par une inclusion circulaire
 *
 */
class Observer;

/**
 * \class Sujet
 * \brief Sujet abstrait du pattern Observer
 *
 * Classe jouant le role de sujet abstrait,
 * par extension mère de Personnage
 *
 */
class Sujet
{
protected :
	
	std::vector<std::shared_ptr<Observer>> obs;
    Data data;

	/**
	 * \brief Constructeur
	 *
	 * Constructeur de Sujet
	 *
	 */
	Sujet();

	/**
	 * \brief Destructeur
	 *
	 * Destructeur de Sujet
	 *
	 */
    virtual ~Sujet();

public :
	/**
	 * \brief Ajout d'Observer
	 *
	 * Méthode d'ajout d'Observer
	 *
	 * \param  o pointeur d'Observer
	 */
	virtual	void addObs(std::shared_ptr<Observer> o);

	/**
	 * \brief Suppression d'Observer
	 *
	 * Méthode de suppression d'Observer
	 *
	 * \param o pointeur d'Observer
	 */
	virtual	void remObs(std::shared_ptr<Observer> o);

	/**
	 * \brief Notification
	 *
	 * Méthode de notification des Observers
	 *
	 */
	virtual	void notify() = 0;
	
};

#endif //SUJET_HPP
