#include "httplib.h"
#include <iostream>
#include <sstream>
#include <string>

#include "objects/Parinte.h"
#include "objects/Profesor.h"
#include "objects/Materie.h"
#include "objects/Elev.h"
#include "objects/Clasa.h"
#include "CardInteligent.h"

using namespace std;

int main() {
    // ==========================================
    // 1. ZONA DE OBIECTE (Backend Data)
    // ==========================================
    // TODO: Adaugă-ți datele aici! Când vei rula serverul, interfața web le va citi de aici.
    
    // Parinte p1("Popescu Ion", "0711223344");
    // Materie mate("Matematica");
    // mate.adaugaNota(10); mate.adaugaNota(8);
    // Elev elev1("Andrei Popescu", 17, "11 A", &p1);
    // elev1.adaugaMaterie(mate);

    cout << "=====================================" << endl;
    cout << "   SERVER CARD INTELIGENT PORNIT     " << endl;
    cout << "=====================================\n" << endl;
    cout << "Deschide în browser: http://localhost:8080" << endl;

    // ==========================================
    // 2. ZONA DE SERVER WEB (API Routes)
    // ==========================================
    httplib::Server svr;

    // Servim automat fișierele din folderul "web"
    // (Așa poți accesa index.html, style.css etc)
    auto ret = svr.set_mount_point("/", "./web");
    if (!ret) {
        cout << "ATENȚIE: Nu am găsit folderul 'web'!\n";
    }

    // --- RUTA 1: Detaliile Elevului ---
    // Când pagina de JS face fetch('/api/elev'), serverul va trimite acest răspuns.
    svr.Get("/api/elev", [&](const httplib::Request &, httplib::Response &res) {
        // TODO: Înlocuiește răspunsul "dummy" cu datele REALE din clasa elev1!
        // Hint: Folosește: elev1.getNume() + ", " + "11 A" + ", " + elev1.getParinteNume()
        
        string raspuns = "Te rog implementeaza Elev in main.cpp!, Clasa X, Parinte Y"; // Modifică aici
        
        res.set_content(raspuns, "text/plain");
    });

    // --- RUTA 2: Media Generală ---
    svr.Get("/api/medie", [&](const httplib::Request &, httplib::Response &res) {
        // TODO: Returnează media generală de la elev1, transformată în string.
        // Hint: to_string(elev1.calculeazaMedieGenerala())
        
        string raspuns = "0.00"; // Modifică aici
        
        res.set_content(raspuns, "text/plain");
    });

    // --- RUTA 3: Lista de Materii și Note ---
    svr.Get("/api/materii", [&](const httplib::Request &, httplib::Response &res) {
        // TODO: Aici va trebui să adaugi o metodă în clasa Elev 
        // care returnează un string mare cu toate materiile și notele, separate prin '|'.
        // Deocamdată trimitem un text fix de test:
        string raspuns = "Aștept materiile... | Adaugă obiecte în main.cpp!";
        
        res.set_content(raspuns, "text/plain");
    });

    // Porniți serverul pe portul 8080
    svr.listen("0.0.0.0", 8080);

    return 0;
}
