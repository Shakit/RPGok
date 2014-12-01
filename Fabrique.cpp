/**
 * \file Fabrique.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implémentation de la classe Fabrique
 *
 * Pattern Factory Method
 * Classe abstraite Fabrique
 * Implémentation des méthodes de la classe Fabrique
 *
 */


#include <iostream>
#include <string>
#include "Fabrique.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Construteur de Fabrique
 *
 */
Fabrique::Fabrique(){}

/*================================================================================*/
/**
 * \brief Destructeur
 *
 * Destructeur de Fabrique
 *
 */
Fabrique::~Fabrique(){}

/*================================================================================*/
/*================================================================================*/
/*  GETTER  */

/**
 * \brief Getter d'aventure
 *
 * Getter d'ave
 *
 * \return aventure : pointeur d'aventure
 */
std::shared_ptr<Aventure> Fabrique::getAventure()
{
    return av_;
}

