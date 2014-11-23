//Main.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Classe Main

#include <iostream>
#include <string>
#include "Personnage.hpp"
#include "Affichage.hpp"


void testFin(bool & b, Personnage & perso1, Personnage & perso2)
{
  b = (perso1.estVivant() && perso2.estVivant());
}

int main()
{
    std::string nomPerso1, nomPerso2;
	Affichage affich();
    bool JeuEnCours = true;
    int choix;

	std::cout << "\t\t*************** NEW GAME START ***************" << std::endl;
	std::cout << "Comment s'appelle votre personnage 1 ? ";
	std::cin >> nomPerso1;
	std::cout << "Comment s'appelle votre personnage 2 ? ";
	std::cin >> nomPerso2;
    Personnage perso1(""+nomPerso1);
	Personnage perso2(""+nomPerso2);
	affich.addSujet(perso1);
	affich.addSujet(perso2);
	
/*
    Arme arme("Epee",30);
    Arme* parme = &arme;
    Armure armure("armure blindee",10);
    Armure* parmu = &armure;

	perso1.setArme(parme);
	perso2.setArmure(parmu);
*/
	while(JeuEnCours)
	{
        affich.afficher();
        // std::cout << "Tapez : " << std::endl;
        // std::cout << "(1) pour partir au combat (BASTON!). " << std::endl;
        // std::cout << "(2) pour modifier Equipement/Classe. " << std::endl;
        // std::cout << "(3) pour aller voir le marchand. " << std::endl;
        // std::cout << "(4) pour quitter le jeu. " << std::endl;
        // std::cin >> choix;
		int choix(0);
		affich.choixJoueur(choix);
		switch(choix)
        {
            case 1 :
                perso1.attaque(perso2);
                perso2.attaque(perso1);
		testFin(JeuEnCours, perso1, perso2);
                break;

            case 2 :
               //////////////////
                break;

            case 3 :
               //////////////////
                break;

            case 4 :
                JeuEnCours = false;
                break;

            default :
                std::cout << "Erreur : mauvaise saisie !" << std::endl;
                break;
        }
	}
	if (!perso1.estVivant() || !perso2.estVivant())
	  {
	    if(perso1.estVivant())
	      {
		std::cout << std::endl
			  << "Zut, " << perso2.getNom() << " est mort ! " << std::endl
			  << "Mais " << perso1.getNom() << " a gagné !" << std::endl ;
	      }
	    else
	      {
		std::cout << std::endl
			  << "Zut, " << perso1.getNom() << " est mort ! " << std::endl
			  << "Mais " << perso2.getNom() << " a gagné !" << std::endl ;
	      }
	  }
	std::cout << "\n\t\t*************** END GAME ***************\n" << std::endl;
   return 0;
}//main
