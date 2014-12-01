/**
 * \file Aventure1Difficile.cpp
 * \author Alicia Boucard, Guillaume Legru
 * \date 01 décembre 2014
 * \version 1.0
 * \brief Implementation de la classe Aventure1Difficile
 *
 * Pattern Factory Method
 * Classe  Aventure1Difficile
 * Implementation des méthodes de la classe Aventure1Difficile
 *
 */
#include <iostream>
#include <string>
#include <memory>
#include "Aventure1Difficile.hpp"

/*================================================================================*/
/**
 * \brief Constructeur
 *
 * Constructeur d'Aventure2Difficile 
 *
 */
Aventure1Difficile::Aventure1Difficile(){}

/*================================================================================*/
/*================================================================================*/
/*  AUTRES METHODES  */

/**
 * \brief Affichage de l'intro
 *
 * Affichage de l'intro de l'aventure
 *
 */
void Aventure1Difficile::afficheIntro()
{
    std::cout << "\t\t \"A la rescousse du capitaine Ichoux !\"\n " << std::endl;
    std::cout << "Vous êtes un corsaire et votre bateau a fait naufrage et vous vous reveillez sur une ile tropicale...seul. " << std::endl;
    std::cout << "Tout l'équipage a disparu. Vous choisissez donc d'aller parcourir cette île pour retrouver vos amis et surtout votre capitaine, bah oui c'est lui qui vous paye quand même!" << std::endl;
}

/*================================================================================*/
/**
 * \brief Affichage de la partie 1
 *
 * Affichage de la 1ere partie de l'aventure
 *
 */
void Aventure1Difficile::affichePart1()
{
    std::cout << "Il faut chaud, il y a des palmiers tout autour. Vous vous dites que c'est pas si mal comme lieu de vacances." << std::endl;
    std::cout << "Soudain vous entendez du bruit, les feuilles bougent et quelqu'un surgit des feuillages." << std::endl;
    std::cout << "Un pirate ! Il court vers vous comme une furie, il va vous attaquer. Il n'a pas l'air de vouloir discuter, donner lui une bonne raclée." << std::endl;
    std::shared_ptr<Personnage> p1(new Personnage("jojo"));
    ennemi1_ = p1;
}

/*================================================================================*/
/**
 * \brief Affichage de la partie 2
 *
 * Affichage de la 2eme partie de l'aventure
 *
 */
void Aventure1Difficile::affichePart2()
{
    std::cout << "Ouf vous êtes vivant, bravo vous savez vous battre. " << std::endl;
    std::cout << "Vous arrivez à lui soutirer des informations sur l'endroit ou se trouve le capitaine." << std::endl;
    std::cout << "Il l'a été capturé ainsi que tout l'équipage dans la base des pirates." << std::endl;
    std::cout << "Une fois arrivé devant, vous vous faites repéré immédiatement par le garde. Oula ! Il est plus costaud que celui que vous avez rencontré avant. Préparez-vous. " << std::endl;
    std::shared_ptr<Personnage> p2(new Personnage("Roge"));
    ennemi2_ = p2;
}

/*================================================================================*/
/**
 * \brief Affichage de la partie 3
 *
 * Affichage de la 3eme partie de l'aventure
 *
 */
void Aventure1Difficile::affichePart3()
{
    std::cout << " " << std::endl;
    std::shared_ptr<Personnage> p3(new Personnage("Barbe rouge"));
    boss_ = p3;
}

/*================================================================================*/
/**
 * \brief Affichage de la fin
 *
 * Affichage de la fin de l'aventure
 *
 */
void Aventure1Difficile::afficheFin()
{
    std::cout << " " << std::endl;
}

