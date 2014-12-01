/**
 * \file ComportementMedic.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implémentation de la classe ComportementMedic
 *
 * Pattern Strategy
 * Classe ComportementMedic
 * Implémentation des méthodes de la classe ComportementMedic
 *
 */
#include <iostream>
#include <string>
#include "ComportementMedic.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur de ComportementMedic
 *
 */
ComportementMedic::ComportementMedic(){}

/*================================================================================*/
/**
 * \brief Utilisation de la compétence de la classe
 *
 * Utilisation de l'attaque physique du Medic
 *
 * \param degat : int, cible : reference de la cible
 */
void  ComportementMedic::utiliserCompetence(int degats, Personnage & cible)
{
  std::cout << "\tEasy je suis Medic." << std::endl;
  cible.soigner(cible);
}

/*================================================================================*/
/**
 * \brief Getter de Description
 *
 * Getter de Description
 *
 * \return description : string 
 */
std::string ComportementMedic::getDescription()
{
	return "Medic";
}

/*================================================================================*/
/**
 * \brief affichage de la classe 
 *
 * Affichage de la classe.
 * Inutile par l'observer
 *
 */
void ComportementMedic::afficherClasse()
{
    std::cout << "Classe : " << this->getDescription() << std::endl;
}

