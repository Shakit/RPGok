/*==========================================================

  Observer.hpp
  author : Alicia Boucard, Guillaume Legru
  Déclaration  des attributs et des méthodes de la classe Observer
  
  ==========================================================*/

#include <vector>
#include <string>
#include <Sujet.hpp>

class Observer
{
private :
	vector<Sujet> sujet_;
	vector<string> data_;
	
public :
	//Ctor
	Observer();	
	Observer(vector<Sujet> s);

	//other methods
	virtual void addSujet(Sujet s);
	virtual void update(vector<string> data);
};
