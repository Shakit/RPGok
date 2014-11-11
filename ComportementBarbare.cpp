//ComportementBarbare.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe ComportementBarbare

#include <iostream>
#include <string>
#include "ComportementBarbare.hpp"

/////////////////////////////////////////////////////////
 //Construteur
 ComportementBarbare::ComportementBarbare()
 {

 }

 /////////////////////////////////////////////////////////
void  ComportementBarbare::attaquer()
{
    std::cout << "\tEn mode Barbare !" << std::endl;

}

/////////////////////////////////////////////////////////
void ComportementBarbare::getDescription()
{
    std::cout << "Classe : Barbare" << std::endl;
}
/*
void  ComportementBarbare::soigner()
{

}

/////////////////////////////////////////////////////////
void  ComportementBarbare::attMagique()
{

}

*/
/////////////////////////////////////////////////////////
