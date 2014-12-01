/**
 * \file ComportementEnchanteur.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe ComportementEnchanteur
 *
 * Pattern Strategy
 * Classe  ComportementEnchanteur
 * Déclaration des attributs et des méthodes de la classe ComportementEnchanteur
 *
 */

#ifndef COMPORTEMENTENCHANTEUR_HPP
#define COMPORTEMENTENCHANTEUR_HPP

#include "ComportementClasse.hpp"
#include "Personnage.hpp"

/**
 * \class ComportementEnchanteur
 * \brief Classe concrete de comportement
 *
 * Classe abstraite du pattern Strategy, modelisant le comportement abstrait 
 *
 */
class ComportementEnchanteur : public ComportementClasse
{
public :
	/**
	 * \brief Constructeur
	 *
	 * Constructeur de ComportementEnchanteur
	 *
	 */
	ComportementEnchanteur();

	/**
	 * \brief utilisation de la compétence du comportement
	 *
	 * Utilisation de la compétence du comportement courant
	 * dynamiquemnt en fonction du comportement concret
	 *
	 * \param degat : int, cible : reférence de personnage
	 */
	void utiliserCompetence(int degats, Personnage & cible);

	/**
	 * \brief Getter de Description
	 *
	 * Description de la classe courante,
	 * dynamiquement grace au Strategy
	 *
	 * \return description : string
	 */
	std::string getDescription();

	/**
	 * \brief affichage de la classe 
	 *
	 * Affichage de la classe courante,
	 * rendue inutile par l'observer
	 *
	 */
	void afficherClasse();
};

#endif //COMPORTEMENTENCHANTEUR_HPP

