#ifndef CLASA_H
#define CLASA_H

#include "Elev.h"

class Clasa {
public:
    Elev elevi[30]; 
    int nr_elevi = 0;

    void adaugaElev(Elev e);
    void afiseazaElevi();
};

#endif