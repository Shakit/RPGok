//Sujet.hpp
//author : Alicia Boucard, Guillaume Legru
//définitions de la classe abstraite Sujet dans le cadre d'un pattern Observer


#ifndef SUJET_HPP
#define SUJET_HPP

#include <vector>
#include "Observer.hpp"

class Sujet
{
private :
	std::vector<Observer> obs_;
//	Data data_;

public:
	//Ctor
	Sujet();

	//setter de data
//	void setData(Data d);

	//other methods
	void addObs(Observer o);
	void delObs(Observer o);
	void notify();
};

#endif //SUJET_HPP
