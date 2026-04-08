#include <iostream>
#include "Materie.h"

using namespace std;

void Materie::adaugaNota(int nota) {
    if (nr_note < 5) {
        note[nr_note] = nota;
        nr_note++;
    }
}

void Materie::calculeazaMedie() {
    float suma = 0;
    for (int i = 0; i < nr_note; i++) {
        suma += note[i];
    }
    if (nr_note > 0) {
        medie_finala = suma / nr_note;
    } else {
        medie_finala = 0;
    }
}

void Materie::afisare() {
    cout << "Materia: " << nume_materie << endl;
    cout << "Note: ";
    for (int i = 0; i < nr_note; i++) {
        cout << note[i] << " ";
    }
    cout << endl << "Media: " << medie_finala << endl;
}