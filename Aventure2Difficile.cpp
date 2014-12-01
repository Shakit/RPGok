/**
 * \file Aventure2Difficile.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implementation de la classe Aventure2Difficile
 *
 * Pattern Factory Method
 * Classe  Aventure2Difficile
 * Implementation des méthodes de la classe Aventure2Difficile
 *
 */
#include <iostream>
#include <string>
#include "Aventure2Difficile.hpp"


/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur d'Aventure2Difficile 
 *
 */
Aventure2Difficile::Aventure2Difficile(){}

/*================================================================================*/
/*================================================================================*/
/*  AUTRES METHODES  */

/**
 * \brief Affichage de l'intro
 *
 * Affichage de l'intro de l'aventure
 *
 */
void Aventure2Difficile::afficheIntro()
{
    std::cout << "\t\t \"Il faut sauver le soldat Java !\"\n " << std::endl;
    std::cout << "Vous êtes un soldat sur le champ de bataille. C'est la guerre tout autour de vous." << std::endl;
    std::cout << "De plus l'un de vos frères Java a été capturé par l'ennemi. Vous faites preuve de courage et décidez d'aller le secourir. " << std::endl;

}

/*================================================================================*/
/**
 * \brief Affichage de la partie 1
 *
 * Affichage de la 1ere partie de l'aventure
 *
 */
void Aventure2Difficile::affichePart1()
{
std::cout << " " << std::endl;
}

/*================================================================================*/
/**
 * \brief Affichage de la partie 2
 *
 * Affichage de la 2eme partie de l'aventure
 *
 */
void Aventure2Difficile::affichePart2()
{
std::cout << " " << std::endl;
}

/*================================================================================*/
/**
 * \brief Affichage de la partie 3
 *
 * Affichage de la 3eme partie de l'aventure
 *
 */
void Aventure2Difficile::affichePart3()
{
std::cout << " " << std::endl;
}

/*================================================================================*/
/**
 * \brief Affichage de la fin
 *
 * Affichage de la fin de l'aventure
 *
 */
void Aventure2Difficile::afficheFin()
{
std::cout << " " << std::endl;
}




