/**
 * \file FabriqueFacile.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implémentation de la classe FabriqueFacile
 *
 * Pattern Factory Method
 * Classe concrete FabriqueFacile
 * Implémentation des méthodes de la classe FabriqueFacile
 *
 */

#include <iostream>
#include <string>
#include "FabriqueFacile.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Construteur de FabriqueFacile
 *
 */
FabriqueFacile::FabriqueFacile(){}

/*================================================================================*/
/*================================================================================*/
/*  AUTRES METHODES  */
/**
 * \brief Création d'aventure
 *
 * Creation d'une aventure en fonction d'un int passé en paramètre
 *
 * \param numAventure : int
 * \return aventure crée : pointeur d'aventure
 */
std::shared_ptr<Aventure> FabriqueFacile::creer(int numAventure)
{
    if(numAventure == 1)
    {
        std::shared_ptr<Aventure> a1(new Aventure1Facile());
        av_= a1;
    }
    if(numAventure == 2)
    {
        std::shared_ptr<Aventure> a2(new Aventure2Facile());
        av_ = a2;
    }
    return av_;
}

