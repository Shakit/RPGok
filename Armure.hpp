/**
 * \file Armure.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe Armure
 *
 * Classe Armure
 * Déclaration des attrubuts et des méthodes de la classe Armure
 *
*/
#ifndef ARMURE_HPP
#define ARMURE_HPP

#include <string>

/**
 * \class Armure
 * \brief Classe armure
 *
 * Classe Armure présente dans la classe Personnage
 *
 */
class Armure
{
private :
	std::string nom_;
	int reducDegat_;

public :
	/**
	 * \brief Constructeur
	 *
	 * Constructeur vide d'Armure
	 *
	 */
	Armure();

	/**
	 * \brief Constructeur
	 *
	 * Constructeur d'Armure
	 *
	 * \param nom : string, reduc : int 
	 */
	Armure(std::string nom, int reduc);

	/*================================================================================*/
	/**
	 * \brief Getter de nom
	 *
	 * Getter de nom
	 *
	 */
	std::string getNom();

	/**
	 * \brief Getter de reduction degat
	 *
	 * Getter de reduction degat s'appliquant lors d'une attaque physique
	 *
	 */
	int getReducDegat();

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
	 * \brief Setter de reduc degat
	 *
	 * Setter de reduc degat 
	 *
	 * \param reduc : int
 	 */
	void setReducDegat(int reduc);

	/*================================================================================*/
	/**
	 * \brief Affichage
	 *
	 * renvoie l'affichage de l'armure
	 *
	 * \return affichage : string
	 */
	std::string afficherArmure();
};

#endif //ARMURE_HPP
