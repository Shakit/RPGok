/**
 * \file ComportementEnchanteur.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implémentation de la classe ComportementEnchanteur
 *
 * Pattern Strategy
 * Classe ComportementEnchanteur
 * Implémentation des méthodes de la classe ComportementEnchanteur
 *
 */

#include <iostream>
#include <string>
#include "ComportementEnchanteur.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur de ComportementEnchanteur
 *
 */
ComportementEnchanteur::ComportementEnchanteur(){}

/*================================================================================*/
/**
 * \brief Utilisation de la compétence de la classe
 *
 * Utilisation de l'attaque magique de l'Enchanteur
 *
 * \param degat : int, cible : reference de la cible
 */
void  ComportementEnchanteur::utiliserCompetence(int degats, Personnage & cible)
{
  std::cout << "\tFire, fire everywhere !" << std::endl;
  cible.subirDegatsMagique(degats);
}

/*================================================================================*/
/**
 * \brief Getter de Description
 *
 * Getter de Description
 *
 * \return description : string 
 */
std::string ComportementEnchanteur::getDescription()
{
	return "Enchanteur";
}

/*================================================================================*/
/**
 * \brief affichage de la classe 
 *
 * Affichage de la classe.
 * Inutile par l'observer
 *
 */
void ComportementEnchanteur::afficherClasse()
{
    std::cout << "Classe : " << this->getDescription() << std::endl;
}
