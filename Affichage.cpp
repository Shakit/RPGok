//Affichage.cpp
//author : Alicia Boucard, Guillaume Legru

#include "Affichage.hpp"
#include <vector>
#include <string>
#include <iostream>

Affichage::Affichage(std::shared_ptr<Sujet> s) : Observer(s)
{
	s->notify();
}

void Affichage::update(Data d)
{
	Observer::update(d);
	afficherPerso();
}

void Affichage::afficherPerso()
{
	std::vector<std::string> v(data.getStats());

	std::cout << "================================" << std::endl
			  << "Nom : "  << v[1]<< std::endl
			  << "Vie : " << v[3] << "/" << v[4] << std::endl
			  << "Mana : " << v[6] << "/" << v[7] << std::endl
			  << v[8] << std::endl
			  << v[9] << std::endl
			  << v[10] << std::endl
			  << "================================" << std::endl;
}

