/**
 * \file Observer.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe Observer
 *
 * Pattern Observer
 * Classe abstraite Observer
 * Déclaration des attributs et des méthodes de la classe Observer
 *
 */

#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include "Sujet.hpp"
#include "Data.hpp"
#include <memory>

/**
 * \class Sujet
 * \brief Déclaration de la classe Sujet
 *
 * Déclaration de la classe Sujet car besoin dans les attributs,
 * contournement des problèmes posés par des include circulaires
 *
 */
class Sujet;

/**
 * \class Observer
 * \brief Classe d'Observer abstrait pour le pattern Observer
 *
 * Classe jouant le role d'observer abstrait dans le pattern Observer,
 * mère d'Affichage
 *
 */
class Observer
{
protected:
	std::shared_ptr<Sujet> sujet;
	Data data;

public:
	/**
	 * \brief Constructeur
	 *
	 * Constructeur d'Observer
	 *
	 * \param s : pointeur de Sujet
	 */
	Observer(std::shared_ptr<Sujet> s);

	/**
	 * \brief Destructeur
	 *
	 * Destructeur d'Observer
	 *
	 */
	virtual ~Observer() = 0;

	/**
	 * \brief Mise à jour
	 *
	 * Méthode de mise à jour des data
	 *
	 * \param nouvelles data : Data
	 */
	virtual void update(Data d);
};


#endif //OBSERVER_HPP
