/**
 * \file Sujet.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implementation de la classe Sujet
 *
 * Pattern Observer
 * Classe Sujet
 * Implémentation des méthodes de la classe Sujet
 *
*/


#include "Sujet.hpp"

/*===================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur vide de Sujet 
 *
 */
Sujet::Sujet() : obs(){}

/*===================================================================*/
/**
 * \brief Destructeur
 *
 * Destructeur de Sujet 
 *
 */
Sujet::~Sujet(){}


/*===================================================================*/
/*===================================================================*/
/*  AUTRES METHODES  */
/**
 * \brief Ajout d'Observer
 *
 * Méthode d'ajout d'Observer
 *
 * \param o pointeur d'Observer
 */
void Sujet::addObs(std::shared_ptr<Observer> o)
{
	obs.push_back(o);
}

/*===================================================================*/
/**
 * \brief Suppression d'Observer
 *
 * Méthode de suppression d'Observer
 *
 * \param o pointeur d'Observer
 */
void Sujet::remObs(std::shared_ptr<Observer> o)
{
	std::vector<std::shared_ptr<Observer>>::iterator iv(obs.begin());
	for(std::shared_ptr<Observer> ob : obs)
	{
		if(ob == o)
		{
			obs.erase(iv);
			return;
		}
		iv++;
	}
}


