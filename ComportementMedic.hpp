/**
 * \file ComportementMedic.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe ComportementMedic
 *
 * Pattern Strategy
 * Classe  ComportementMedic
 * Déclaration des attributs et des méthodes de la classe ComportementMedic
 *
 */

#ifndef COMPORTEMENTMEDIC_HPP
#define COMPORTEMENTMEDIC_HPP

#include "ComportementClasse.hpp"
#include "Personnage.hpp"
/**
 * \class ComportementMedic
 * \brief Classe concrete de comportement
 *
 * Classe abstraite du pattern Strategy, modelisant le comportement abstrait 
 *
 */
class ComportementMedic : public ComportementClasse
{
public :
	/**
	 * \brief Constructeur
	 *
	 * Constructeur de ComportementMedic
	 *
	 */
    ComportementMedic();

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

#endif //COMPORTEMENTMEDIC_HPP
