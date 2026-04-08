#include <iostream>
#include "Clasa.h"

using namespace std;

void Clasa::adaugaElev(Elev e) {
    if (nr_elevi < 30) {
        elevi[nr_elevi] = e;
        nr_elevi++;
    } else {
        cout << "Clasa este plina!" << endl;
    }
}

void Clasa::afiseazaElevi() {
    cout << "Lista elevi din clasa: " << endl;
    for (int i = 0; i < nr_elevi; i++) {
        elevi[i].afisare();
        cout << endl;
    }
}