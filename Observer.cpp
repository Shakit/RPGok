/**
 * \file Observer.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implémantation de la classe Observer
 *
 * Pattern Observer
 * Classe abstraite Observer
 * Implémentation des méthodes de la classe Observer
 *
 */


#include "Sujet.hpp"
#include "Observer.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Construteur d'Observer
 * Le Sujet en paramètre ajoute automatiquement l'objet construit dans sa liste d'Observer
 *
 * \param sujet à observer : pointeur de Sujet 
 */
Observer::Observer(std::shared_ptr<Sujet> s)
{
	sujet = s;
	s->addObs(std::shared_ptr<Observer>(this));
}

/*================================================================================*/
/**
 * \brief Destructeur
 *
 * Destructeur d'Observer
 *
 */
Observer::~Observer(){}

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
void Observer::update(Data d)
{
	data = d;
}

