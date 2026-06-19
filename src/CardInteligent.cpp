#include <iostream>
#include "CardInteligent.h"

using namespace std;

// TODO: Salveaza elevul primit ca parametru in 'elevCurent'
CardInteligent::CardInteligent(Elev* elev) {
    
}

// TODO: Creeaza un meniu interactiv (folosind cout) cu optiuni pentru card
// De ex: 1. Vezi informatii elev, 2. Vezi medii, 3. Iesire
void CardInteligent::afisareMeniuPrincipal() {
    cout << "\n--- MENIU CARD INTELIGENT ---" << endl;
    cout << "1. Afisare card complet" << endl;
    cout << "2. Adauga nota noua" << endl;
    cout << "3. Iesire" << endl;
    cout << "Alege o optiune: ";
}

// TODO: Foloseste un 'while' sau 'do-while' si un 'switch' pentru a rula meniul
// Daca utilizatorul alege 1 -> apeleaza elevCurent->afisareCard()
// Daca alege 2 -> intreaba numele materiei si nota, si apeleaza elevCurent->adaugaNotaLaMaterie()
// Daca alege 3 -> opreste bucla si iesi din meniu.
void CardInteligent::pornesteInterfata() {
    int optiune = 0;
    
    // Aici scrie codul tau cu while si switch!
    // exemplu: afisareMeniuPrincipal(); cin >> optiune; ...
    
}
