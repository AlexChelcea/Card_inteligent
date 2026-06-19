#ifndef ELEV_H
#define ELEV_H
#include <string>
#include <vector>
#include "Parinte.h"
#include "Materie.h"

class Elev {
private:
    std::string nume;
    int varsta;
    std::string clasaCurenta;
    Parinte* parinte; // Relatia cu parintele (pointer)
    std::vector<Materie> materii; // Materiile si notele elevului

public:
    // Constructor
    Elev(std::string nume, int varsta, std::string clasaCurenta, Parinte* parinte);
    
    // Metode principale pentru elev
    std::string getNume();
    void adaugaMaterie(Materie m);
    void adaugaNotaLaMaterie(std::string numeMaterie, int nota);
    float calculeazaMedieGenerala();
    
    // Afiseaza cardul complet cu toate datele elevului
    void afisareCard(); 
};

#endif
