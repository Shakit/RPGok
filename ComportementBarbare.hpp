//ComportementBarbare.hpp
//auteurs : Alicia Boucard, Guillaume Legru
//Classe  ComportementBarbare

#ifndef COMPORTEMENTBARBARE_HPP
#define COMPORTEMENTBARBARE_HPP

#include "ComportementClasse.hpp"

class ComportementBarbare : public ComportementClasse
{
    public :
        ComportementBarbare();
        void attaquer();
        void getDescription();
        //void soigner();
        //void attMagique();
};

#endif //COMPORTEMENTBARBARE_HPP

