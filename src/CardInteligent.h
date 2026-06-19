#ifndef CARD_INTELIGENT_H
#define CARD_INTELIGENT_H
#include "objects/Elev.h"

class CardInteligent {
private:
    Elev* elevCurent; // Cardul apartine unui elev

public:
    // Constructor
    CardInteligent(Elev* elev);
    
    // Metode
    void afisareMeniuPrincipal();
    void pornesteInterfata();
};

#endif
