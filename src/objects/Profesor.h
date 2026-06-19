#ifndef PROFESOR_H
#define PROFESOR_H
#include <string>

class Profesor {
private:
    std::string nume;
    std::string materiaPredata;

public:
    // Constructor
    Profesor(std::string nume, std::string materiaPredata);
    
    // Metode
    std::string getNume();
    std::string getMateriaPredata();
    void afisareDetalii();
};

#endif
