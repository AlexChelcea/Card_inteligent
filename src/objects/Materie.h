#ifndef MATERIE_H
#define MATERIE_H
#include <string>
#include <vector>

class Materie {
private:
    std::string numeMaterie;
    std::vector<int> note;

public:
    // Constructor
    Materie(std::string numeMaterie);
    
    // Metode (functii) ce trebuie implementate
    std::string getNume();
    void adaugaNota(int nota);
    float calculeazaMedie();
    void afisareMaterie(); // afiseaza numele materiei, notele si media
};

#endif
