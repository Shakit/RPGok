/**
 * \file ComportementClasse.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe ComportementClasse
 *
 * Pattern Strategy
 * Classe  ComportementClasse
 * Déclaration des attributs et des méthodes de la classe ComportementClasse
 *
 */

#ifndef COMPORTEMENTCLASSE_HPP
#define COMPORTEMENTCLASSE_HPP

#include<string>

/**
 * \class Personnage
 * \brief Déclaration de la classe Personnage
 *
 * Déclaration de la classe Personnage, utilsée en paramètre de méthodes,
 * contournement des problèmes posés par l'include circulaire
 *
 */
class Personnage;

/**
 * \class ComportementClasse
 * \brief Classe abstraite de comportement
 *
 * Classe abstraite du pattern Strategy, modelisant le comportement abstrait 
 *
 */
class ComportementClasse
{
public :
	/**
	 * \brief Destructeur
	 *
	 * Destructeur de ComportementClasse
	 *
	 */
    virtual ~ComportementClasse() = 0;

	/**
	 * \brief utilisation de la compétence du comportement
	 *
	 * Utilisation de la compétence du comportement courant
	 * dynamiquemnt en fonction du comportement concret
	 *
	 * \param degat : int, cible : reférence de personnage
	 */
    virtual void utiliserCompetence(int degats, Personnage & cible) = 0;

	/**
	 * \brief Getter de Description
	 *
	 * Description de la classe courante,
	 * dynamiquement grace au Strategy
	 *
	 * \return description : string
	 */
	virtual std::string getDescription() = 0;

	/**
	 * \brief affichage de la classe 
	 *
	 * Affichage de la classe courante,
	 * rendue inutile par l'observer
	 *
	 */
	virtual void afficherClasse() = 0;
};

#endif //COMPORTEMENTCLASSE_HPP
