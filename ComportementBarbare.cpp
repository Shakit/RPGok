/**
 * \file ComportementBarbare.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implémentation de la classe ComportementBarbare
 *
 * Pattern Strategy
 * Classe ComportementBarbare
 * Implémentation des méthodes de la classe ComportementBarbare
 *
 */

#include <iostream>
#include <string>
#include "ComportementBarbare.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur de ComportementBarbare
 *
 */
ComportementBarbare::ComportementBarbare(){}

/*================================================================================*/
/**
 * \brief Utilisation de la compétence de la classe
 *
 * Utilisation de l'attaque physique du Barbare
 *
 * \param degat : int, cible : reference de la cible
 */
void  ComportementBarbare::utiliserCompetence(int degats, Personnage & cible)
{
  std::cout << "\tEn mode Barbare !" << std::endl;
  cible.subirDegats(degats);
}

/*================================================================================*/
/**
 * \brief Getter de Description
 *
 * Getter de Description
 *
 * \return description : string 
 */
std::string ComportementBarbare::getDescription()
{
	return "Classe : Barbare";
}

/*================================================================================*/
/**
 * \brief affichage de la classe 
 *
 * Affichage de la classe.
 * Inutile par l'observer
 *
 */
void ComportementBarbare::afficherClasse()
{
    std::cout << "Classe : " << this->getDescription() << std::endl;
}

