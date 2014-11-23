/*==========================================================

  Observer.hpp
  author : Alicia Boucard, Guillaume Legru
  Déclaration  des attributs et des méthodes de la classe Observer
  
  ==========================================================*/

#include <vector>
#include <string>

class Sujet;

class Observer
{
protected :
	std::vector<Sujet> sujet_;
	std::vector<std::string> data_;
	
public :
	//Ctor
	Observer();	
	Observer(std::vector<Sujet> s);

	//other methods
	virtual void addSujet(Sujet s);
	virtual void update(std::vector<std::string> data);
};
