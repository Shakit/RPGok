//Data.cpp
//author : Alicia Boucard, Guillaume Legru

#include"Data.hpp"

//////////////////////////////////////////
//Ctors
Data::Data():stats_()
{}

//////////////////////////////////////////
Data::Data(std::vector<std::string> v) : stats_(v)
{}

//////////////////////////////////////////
std::vector<std::string> Data::getStats()
{
	return stats_;
}
