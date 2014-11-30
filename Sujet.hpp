//Sujet.hpp
//author : Alicia Boucard, Guillaume Legru

#ifndef SUJET_HPP
#define SUJET_HPP

#include <vector>
#include <memory>
#include "Observer.hpp"
#include "Data.hpp"

class Observer;

class Sujet
{
protected :
	std::vector<std::shared_ptr<Observer>> obs;
    Data data;
	//Ctor
	Sujet();
    virtual ~Sujet();

public :
	//methodes du pattern observer
	virtual	void addObs(std::shared_ptr<Observer> o);
	virtual	void remObs(std::shared_ptr<Observer> o);
	virtual	void notify() = 0;
};

#endif //SUJET_HPP
