//Main.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Classe Main

#include <iostream>
#include <string>
#include <memory>
#include "Personnage.hpp"
#include "Fabrique.hpp"
#include "FabriqueFacile.hpp"

int main()
{
    std::string nomPerso1;
    std::shared_ptr<Fabrique> fab_;
    bool JeuEnCours = true;
    int numAventure(0), choix1(0), choix2(0);
    std::shared_ptr<FabriqueFacile> ff(new FabriqueFacile());
                fab_ = ff;
	std::cout << "\t\t*************** NEW GAME START ***************" << std::endl;
	std::cout << "Comment s'appelle votre personnage ? ";
	std::cin >> nomPerso1;
    Personnage perso1(""+nomPerso1);

  while(numAventure != 1 && numAventure != 2)
  {
        std::cout << "\nChoisissez l'aventure que vous voulez vivre ! " << nomPerso1 << std::endl;
        std::cout << "(1) Aventure 1 : A la rescousse du capitaine Ichoux. " << std::endl;
        std::cout << "(2) Aventure 2 : Il faut sauver le soldat Java." << std::endl;
        std::cin >> numAventure;

        switch(numAventure)
        {
            case 1 || 2:
                fab_->creer(numAventure);
                fab_->getAventure()->afficheIntro();
                break;

            default :
                std::cout << "Erreur : mauvaise saisie !" << std::endl;
                break;
        }
    }
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
        perso1.afficher();
       // perso2.afficher();
        std::cout << "Taper : " << std::endl;
        std::cout << "(1) pour partir au combat (BASTON!). " << std::endl;
        std::cout << "(2) pour modifier Equipement/Classe. " << std::endl;
        std::cout << "(3) pour aller voir le marchand. " << std::endl;
        std::cout << "(4) pour quitter le jeu. " << std::endl;
        std::cin >> choix1;

        switch(choix1)
        {
            case 1 :
                //perso1.attaque(perso2);
               // perso2.attaque(perso1);
                break;

            case 2 :
					std::cout << "Changer d'arme ? (1) " << std::endl;
               std::cout << "Changer d'armure ? (2) " << std::endl;
               std::cout << "Changer de classe ? (3) " << std::endl;
               std::cin >> choix2;
               switch(choix2)
               {
               	case 1 :
               			//perso1.setArme(parme);
               		break;
               	case 2 :
								//perso2.setArmure(parmu);
               		break;
               	case 3 :

               		break;

               	default :
                		std::cout << "Erreur : mauvaise saisie !" << std::endl;
                		break;
               }
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
	std::cout << "\n\t\t*************** END GAME ***************\n" << std::endl;
   return 0;
}//main
