#include <iostream>
#include "Elev.h"

using namespace std;

void Elev::afisare() {
    cout << "Date elev:" << endl;
    cout << "Nume elev: " << nume << endl;
    cout << "Email: " << email << endl;
    
    parinte_asociat.afisare();
    
    materie_elev.afisare();
    
}