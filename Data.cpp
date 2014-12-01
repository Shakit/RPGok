/**
 * \file Data.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implémentation de la classe Data
 *
 * Pattern Observer
 * Classe Data
 * Implémentation des méthodes de la classe Data
 *
 */

#include"Data.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur vide de Data
 *
 */
Data::Data():stats_(){}

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur de Data à partir d'un vector de string
 *
 *\param v : vector de string
 */
Data::Data(std::vector<std::string> v) : stats_(v){}

/*================================================================================*/
/*================================================================================*/
/*  GETTER  */
/**
 * \brief Getteur de stats 
 *
 * Getter de stats
 *
 * \return stats : vector de string
 */
std::vector<std::string> Data::getStats()
{
	return stats_;
}

