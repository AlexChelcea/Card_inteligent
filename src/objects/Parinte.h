#ifndef PARINTE_H
#define PARINTE_H
#include <string>

class Parinte {
private:
    std::string nume;
    std::string numarTelefon;

public:
    // Constructor
    Parinte(std::string nume, std::string numarTelefon);
    
    // Metode (functii) ce trebuie implementate
    std::string getNume();
    std::string getNumarTelefon();
    void afisareDetalii();
};

#endif 