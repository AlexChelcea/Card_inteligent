#ifndef CLASA_H
#define CLASA_H
#include <string>
#include <vector>
#include "Elev.h"
#include "Profesor.h"

class Clasa {
private:
    std::string numeClasa; // Ex: "11 A"
    Profesor* diriginte;   // Pointer la diriginte
    std::vector<Elev> elevi;

public:
    // Constructor
    Clasa(std::string numeClasa, Profesor* diriginte);
    
    // Metode
    void adaugaElev(Elev e);
    void afisareDetaliiClasa();
};

#endif
