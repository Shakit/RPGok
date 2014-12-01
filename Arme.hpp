/**
 * \file Arme.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe Arme
 *
 * Classe Arme
 * Déclaration des attrubuts et des méthodes de la classe Arme
 *
 */
#ifndef ARME_HPP
#define ARME_HPP

#include <string>

/**
 * \class Arme
 * \brief Classe armure
 *
 * Classe Arme présente dans la classe Personnage
 *
 */
class Arme
{
private :
	std::string nom_;
	int degat_;

public :
	/**
	 * \brief Constructeur
	 *
	 * Constructeur vide d'Arme
	 *
	 */
	Arme();
	
	/**
	 * \brief Constructeur
	 *
	 * Constructeur d'Arme
	 *
	 * \param nom : string, reduc : int 
	 */
	Arme(std::string nom, int gdt);

	/*================================================================================*/
	/**
	 * \brief Getter de nom
	 *
	 * Getter de nom
	 *
	 */
	std::string getNom();
	/**
	 * \brief Getter de degat
	 *
	 * Getter de degat 
	 *
	 */
	int getDegat();

	/*================================================================================*/
	/**
	 * \brief Setter de nom
	 *
	 * Setter de nom
	 *
	 * \param nom : string 
	 */
	void setNom(std::string nom);
	
	/**
	 * \brief Setter de degat
	 *
	 * Setter de degat 
	 *
	 * \param degat : int
 	 */
	void setDegat(int gdt);

	/*================================================================================*/
	/**
	 * \brief Affichage
	 *
	 * renvoie l'affichage de l'arme
	 *
	 * \return affichage : string
	 */
	std::string afficherArme();
};

#endif //ARME_HPP
