# Proiect C++: Card Inteligent cu Web UI

Acesta este un template (schelet) pentru un proiect C++ care modelează un card inteligent pentru elevi, dar care vine cu o super putere: **Este conectat la o pagină Web!** 🚀

Asta înseamnă că tot codul scris de tine în C++ va funcționa ca "creierul" (Backend-ul) unei aplicații Web frumoase!

## Ce contine acest proiect?
Ai mai multe clase (obiecte) cu care vei lucra în folderul `src/objects/`:
- `Parinte`: Ține datele unui părinte.
- `Materie`: Ține evidența unei materii și a notelor.
- `Elev`: Cea mai importantă clasă! Are părinte, materii și note.

Iar în folderul `web/` se află interfața grafică pe care o vei folosi.

## Cum să lucrezi la el?
1. Completează funcțiile care lipsesc (acolo unde scrie `// TODO:`) din fișierele din folderul `src/objects/`.
2. Deschide `src/main.cpp`. Aici nu vei mai avea un meniu în consolă, ci un mic **Server Web**. Serverul "așteaptă" ca pagina web să îi ceară date.
3. Tot în `main.cpp`, vei vedea rute precum `svr.Get("/api/elev"...)`. Acolo va trebui să îi zici serverului ce date din C++ vrei să trimită paginii (de exemplu: numele elevului tău). 
4. Deschide `web/index.html` și apasă butonul **Reîncarcă Datele**. Magie! 🎉

## Compilare rapidă (din terminal pe macOS/Linux):
Deoarece folosim funcții avansate pentru a face serverul web, trebuie să folosim o comandă specială de compilare.
Din folderul principal al proiectului rulează:

```bash
g++ -std=c++17 src/main.cpp src/CardInteligent.cpp src/objects/*.cpp -o ServerCard
./ServerCard
```

După ce apare mesajul "SERVER CARD INTELIGENT PORNIT", deschide un browser web și intră pe adresa: **http://localhost:8080**

Baftă la codat! 🎉