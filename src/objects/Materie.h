#ifndef MATERIE_H
#define MATERIE_H
#include <string>
#include "Profesor.h"

class Materie {
public:
    std::string nume_materie;
    Profesor profesor_titular;
    int note[5];
    int nr_note = 0; 
    float medie_finala;

    void adaugaNota(int nota);
    void calculeazaMedie();
    void afisare();
};

#endif