// Funcția principală care se execută când se încarcă pagina
document.addEventListener('DOMContentLoaded', () => {
    incarcaDatele();
});

// Această funcție face "cereri" către serverul tău de C++ (Backend)
async function incarcaDatele() {
    try {
        // 1. Cerem detaliile elevului
        const raspunsElev = await fetch('/api/elev');
        if (raspunsElev.ok) {
            const dateElev = await raspunsElev.text(); 
            // C++ va returna ceva de genul "Ion Popescu, 11A, Parinte: Vasile"
            // Despărțim datele după virgulă (dacă alegi să le returnezi așa)
            const parti = dateElev.split(',');
            if(parti.length >= 3) {
                document.getElementById('nume-elev').innerText = parti[0].trim();
                document.getElementById('detalii-clasa').innerText = "Clasa: " + parti[1].trim();
                document.getElementById('nume-parinte').innerText = parti[2].trim();
            } else {
                document.getElementById('nume-elev').innerText = dateElev;
            }
        }

        // 2. Cerem media generală
        const raspunsMedie = await fetch('/api/medie');
        if (raspunsMedie.ok) {
            const medie = await raspunsMedie.text();
            document.getElementById('medie-generala').innerText = medie;
        }

        // 3. Cerem lista de materii și note
        const raspunsMaterii = await fetch('/api/materii');
        if (raspunsMaterii.ok) {
            const materiiText = await raspunsMaterii.text();
            
            // Dacă din C++ returnezi "Matematica: 10 9 | Informatica: 10 10 | "
            const materii = materiiText.split('|');
            const lista = document.getElementById('lista-materii');
            lista.innerHTML = ''; // Curățăm lista existentă

            materii.forEach(linie => {
                if(linie.trim() !== '') {
                    const li = document.createElement('li');
                    li.innerText = linie.trim();
                    lista.appendChild(li);
                }
            });
            if(lista.innerHTML === '') {
                lista.innerHTML = '<li>Nu există materii adăugate încă.</li>';
            }
        }

    } catch (eroare) {
        console.error("Nu m-am putut conecta la C++ Backend!", eroare);
        document.getElementById('nume-elev').innerText = "Eroare Conexiune";
        document.getElementById('detalii-clasa').innerText = "Asigură-te că rulezi codul C++!";
    }
}
