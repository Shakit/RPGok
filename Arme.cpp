/**
 * \file Arme.hpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implementation de la classe Arme
 *
 * Classe Arme
 * Implémentation des méthodes de la classe Arme
 *
 */
#include <iostream>
#include <string>
#include "Arme.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur vide d'Arme
 *
 */
Arme::Arme() : nom_("baton de bois"), degat_(10){}

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur d'Arme
 *
 * \param nom : string, reduc : int 
 */
Arme::Arme(std::string nom, int dgt) : nom_(nom), degat_(dgt){}

/*================================================================================*/
/*================================================================================*/
/*  GETTER  */
/**
 * \brief Getter de nom
 *
 * Getter de nom
 *
 */
std::string Arme::getNom()
{
	return nom_;
}

/*================================================================================*/
/**
 * \brief Getter de degat
 *
 * Getter de degat
 *
 */
int Arme::getDegat()
{
	return degat_;
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
void Arme::setNom(std::string nom)
{
	nom_ = nom;
}
 /*================================================================================*/
/**
 * \brief Setter de degat
 *
 * Setter de degat 
 *
 * \param degat  : int
 */
void Arme::setDegat(int dgt)
{
	degat_ = dgt;
}

/*================================================================================*/
/*================================================================================*/
/*  AUTRES METHODES  */
/**
 * \brief Affichage
 *
 * renvoie l'affichage de l'arme
 *
 * \return affichage : string
 */
std::string Arme::afficherArme()
{
    std::string s("Arme " + nom_ + " (degats : " + std::to_string(degat_) +")");
	return s;
}


