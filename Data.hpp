//Data.hpp
//author : Alicia Boucard, Guillaume Legru

#ifndef DATA_HPP
#define DATA_HPP

#include <vector>
#include <string>

class Data
{
private :
	std::vector<std::string> stats_;

public :
	//Ctor
	Data();
	Data(std::vector<std::string> v);

	//getter
	std::vector<std::string> getStats();
};

#endif //DATA_HPP
