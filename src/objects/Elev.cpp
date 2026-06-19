#include <iostream>
#include "Elev.h"

using namespace std;

// TODO: Initializeaza variabilele din clasa Elev (nume, varsta, clasa, parinte)
Elev::Elev(string nume, int varsta, string clasaCurenta, Parinte* parinte) {
    
}

// TODO: Returneaza numele elevului
string Elev::getNume() {
    return "";
}

// TODO: Adauga o materie noua in vectorul de materii (folosind push_back)
void Elev::adaugaMaterie(Materie m) {
    
}

// TODO: Gaseste materia dupa nume in vectorul 'materii' si adauga-i nota respectiva
// Poti parcurge vectorul folosind un for simplu (pentru a modifica, parcurge prin referinta "Materie& m : materii")
void Elev::adaugaNotaLaMaterie(string numeMaterie, int nota) {
    
}

// TODO: Calculeaza media generala a elevului
// Sumeaza mediile de la toate materiile si imparte la numarul de materii
float Elev::calculeazaMedieGenerala() {
    return 0.0f;
}

// TODO: Aici va fi designul "Cardului" de elev!
// Afiseaza un chenar frumos folosind cout, pune detaliile elevului, 
// suna metoda 'afisareDetalii()' a parintelui si afiseaza fiecare materie
// La final, afiseaza Media Generala! Fii creativ!
void Elev::afisareCard() {
    cout << "========================================" << endl;
    cout << "          CARD INTELIGENT ELEV          " << endl;
    cout << "========================================" << endl;
    // ... completeaza tu aici
    cout << "========================================" << endl;
}
