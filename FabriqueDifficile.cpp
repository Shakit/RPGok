/**
 * \file FabriqueDifficile.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implémentation de la classe FabriqueDifficile
 *
 * Pattern Factory Method
 * Classe concrete FabriqueDifficile
 * Implémentation des méthodes de la classe FabriqueDifficile
 *
 */

#include <iostream>
#include <string>
#include "FabriqueDifficile.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Construteur de FabriqueDifficile
 *
 */
FabriqueDifficile::FabriqueDifficile(){}

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
std::shared_ptr<Aventure> FabriqueDifficile::creer(int numAventure)
{
    if(numAventure == 1)
    {
        std::shared_ptr<Aventure> a1(new Aventure1Difficile());
        av_= a1;
    }
    if(numAventure == 2)
    {
        std::shared_ptr<Aventure> a2(new Aventure2Difficile());
        av_ = a2;
    }
    return av_;
}

