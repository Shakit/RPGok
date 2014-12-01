/**
 * \file Armure.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implementation de la classe Armure
 *
 * Classe Armure
 * Implémentation des méthodes de la classe Armure
 *
 */
#include <iostream>
#include <string>
#include "Armure.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur vide d'Armure
 *
 */
Armure::Armure() : nom_("armure en tissu"), reducDegat_(5){}

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur d'Armure
 *
 * \param nom : string, reduc : int 
 */
Armure::Armure(std::string nom, int reduc) : nom_(nom), reducDegat_(reduc){}

/*================================================================================*/
/*================================================================================*/
/*  GETTER  */
/**
 * \brief Getter de nom
 *
 * Getter de nom
 *
 */
std::string Armure::getNom()
{
	return nom_;
}

/*================================================================================*/
/**
 * \brief Getter de reduction degat
 *
 * Getter de reduction degat s'appliquant lors d'une attaque physique
 *
 */
int Armure::getReducDegat()
{
	return reducDegat_;
}

/*================================================================================*/
/*================================================================================*/
/*  SETTER  */
/**
 * \brief Setter de nom
 *
 * Setter de nom
 *
 * \param nom : string 
 */
void Armure::setNom(std::string nom)
{
	nom_ = nom;
}
/*================================================================================*/
/**
 * \brief Setter de reduc degat
 *
 * Setter de reduc degat 
 *
 * \param reduc : int
 */
void Armure::setReducDegat(int reduc)
{
	reducDegat_ = reduc;
}

/*================================================================================*/
/*================================================================================*/
/*  AUTRES METHODES  */
/**
 * \brief Affichage
 *
 * renvoie l'affichage de l'armure
 *
 * \return affichage : string
 */
std::string Armure::afficherArmure()
{
    std::string s("Armure " + nom_ + " (defense : " + std::to_string(reducDegat_) +")");
	return s;
}

