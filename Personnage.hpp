/**
 * \file Personnage.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Header de la classe Personnage
 *
 * Pattern Observer (sujet concret)
 * Pattern Strategy (classe cliente)
 * Classe Personnage
 * Déclaration des attrubuts et des méthodes de la classe Personnage
 *
*/


#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string>
#include <memory>
#include "Arme.hpp"
#include "Armure.hpp"
#include "ComportementClasse.hpp"
#include "ComportementBarbare.hpp"
#include "ComportementMedic.hpp"
#include "ComportementEnchanteur.hpp"
#include "Sujet.hpp"
#include "Data.hpp"
#include "Observer.hpp"

/**
 * \class Personnage
 * \brief Classe représentant un personnage de RPG
 *
 * Classe de Personnage jouant le role de sujet concret dans le pattern Observer,
 * et de classe cliente pour le pattern Strategy
 *
 */
class Personnage : public Sujet
{
private :
	std::string nom_;
	int vie_;
	int vieMax_;
	int mana_;
	int manaMax_;
	std::shared_ptr<Arme> arme_;
	std::shared_ptr<Armure> armure_;
	std::shared_ptr<ComportementClasse> compClasse_;

public :
	/**
	 * \brief Constructeur
	 *
	 * Constructeur de Personnage
	 *
	 * \param nom : string
	 */
	Personnage(std::string nom);

	/**
	 * \brief Destructeur
	 *
	 * Destructeur de Personnage
	 *
	 */
	~Personnage();

	/*================================================================================*/
	/**
	 * \brief Getter de nom
	 *
	 * Getter de nom
	 *
	 */
	std::string getNom();

	/**
	 * \brief Getter de vie
	 *
	 * Getter de vie
	 *
	 */
	int getVie();

	/**
	 * \brief Getter de vie max
	 *
	 * Getter de vie max
	 *
	 */
	int getVieMax();

	/**
	 * \brief Getter de mana
	 *
	 * Getter de mana
	 *
	 */
	int getMana();

	/**
	 * \brief Getter de mana max
	 *
	 * Getter de mana max
	 *
	 */
	int getManaMax();

	/**
	 * \brief Getter d'arme
	 *
	 * Getter d'arme
	 *
	 */
	std::shared_ptr<Arme> getArme();

	/**
	 * \brief Getter d'armure
	 *
	 * Getter d'armure
	 *
	 */
	std::shared_ptr<Armure> getArmure();

	/**
	 * \brief Getter de comportement de classe
	 *
	 * Getter de comportement de classe
	 *
	 */
	std::shared_ptr<ComportementClasse> getCompClasse();

	/*================================================================================*/
	/**
	 * \brief Setter de vie
	 *
	 * Setter de vie
	 *
	 * \param nouvelle valeur de vie : int
	 */
	void setVie(int vie);

	/**
	 * \brief Setter d'arme
	 *
	 * Setter de vie
	 *
	 * \param nouvelle arme : pointeur d'arme
	 */
	void setArme(std::shared_ptr<Arme> arme);

	/**
	 * \brief Setter d'armure
	 *
	 * Setter d'armure 
	 *
	 * \param nouvelle armure : pointeur d'armure
	 */
	void setArmure(std::shared_ptr<Armure> armure);

	/**
	 * \brief Setter de comportement de classe
	 *
	 * Setter de comportement de classe
	 *
	 * \param nouvelle classe : pointeur de comportement de classe
	 */
	void setClasse(std::shared_ptr<ComportementClasse> compClasse);

	/*================================================================================*/
	/**
	 * \brief estVivant
	 *
	 * Méthode revoyant vrai si le personnage est vivant, faux sinon
	 *
	 */
	bool estVivant();

	/**
	 * \brief Attaque
	 *
	 * Méthode d'attaque
	 *
	 * \param cible : référence vers la cible
	 */
	void attaque(Personnage & cible);

	/**
	 * \brief perte de vie
	 *
	 * Méthode effectuant la perte de point dde vie du personnage
	 *
	 * \param dégats : int
	 */
	void subirDegats(int dgt);

	/**
	 * \brief perte de vie
	 *
	 * Méthode effectuant la perte de point de vie du personnage due à une attaque magique
	 *
	 * \param dégats : int
	 */
	void subirDegatsMagique(int dgt);

	/**
	 * \brief gain de vie
	 *
	 * Méthode effectuant le gain de point dde vie du personnage suite à un soin
	 *
	 * \param dégats : int
	 */
	void soigner(Personnage & cible);

	/**
	 * \brief affichage
	 *
	 * Méthode d'affichage. Non utilisée car l'affichage se fait via l'Observer
	 *
	 */
	void afficher();

	/**
	 * \brief Notification
	 *
	 * Méthode de notification des Observers 
	 *
 	 */
	void notify();
};

#endif //PERSONNAGE_HPP
