//Armure.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Attribut et Prototypes de la classe Armure

#ifndef ARMURE_HPP
#define ARMURE_HPP

#include <string>

class Armure
{
private :
	std::string nom_;
	int reducDegat_;

public :
    //Constructors
	Armure();
	Armure(std::string nom, int reduc);

	//getters
	std::string getNom();
	int getReducDegat();
	//setters
	void setNom(std::string nom);
	void setReducDegat(int reduc);
	//methodes
	std::string afficherArmure();
};

#endif //ARMURE_HPP
