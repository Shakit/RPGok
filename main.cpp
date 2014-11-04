//Main.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Classe Main

#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

int main()
{
	Personnage fifi("fifi");
	Personnage loulou("loulou");

	cout << "\t***** new game START *****" << endl;
	fifi.afficher();
	loulou.afficher();
	fifi.attaqueBasique(loulou);
	loulou.attaqueBasique(fifi);
	Arme arme("Epee",30);
    Arme* parme = &arme;
	fifi.setArme(parme);
	fifi.afficher();
   return 0;
}//main
