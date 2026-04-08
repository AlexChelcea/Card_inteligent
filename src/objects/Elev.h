#ifndef ELEV_H
#define ELEV_H

#include <string>
#include "Parinte.h"
#include "Materie.h"

class Elev {
public:
    std::string nume;
    std::string email;
    Parinte parinte_asociat; 
    Materie materie_elev;    

    void afisare();
};

#endif