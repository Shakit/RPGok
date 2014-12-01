/**
 * \file Data.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe Data
 *
 * Pattern Observer
 * Classe  Data
 * Déclaration des attributs et des méthodes de la classe Data
 *
 */

#ifndef DATA_HPP
#define DATA_HPP

#include <vector>
#include <string>

/**
 * \class Data
 * \brief Classe de données destinées à l'Observer
 *
 * Classe conteneur de data 
 *
 */
class Data
{
private :
	std::vector<std::string> stats_;

public :
	/**
	 * \brief Constructeur
	 *
	 * Constructeur vide de Data
	 *
	 */
	Data();

	/**
	 * \brief Constructeur
	 *
	 * Constructeur de Data à partir d'un vector de string
	 *
	 * \param v: vector de string
	 */
	Data(std::vector<std::string> v);

	/**
	 * \brief Getter de stats
	 *
	 * Getter de stats
	 *
	 * \return stats : vector de string
	 */
	std::vector<std::string> getStats();
};

#endif //DATA_HPP

