#Reguli generale de urmat la examene

*Nici un fel de comunicare nu este permisă.

*Acesta este un examen, nu aveți dreptul să vorbiți, să ascultați muzică, să faceți zgomot sau să faceți ceva ce ar putea deranja pe ceilați studenți în vreun fel.

*Telefoanele mobile sau orice alte dispozitive trebuie să fie închise și puse deoparte. Dacă sună vreun telefon, tot rândul va fi descalificat din examen și dat afară imediat!

*Directorul vostru ”home” conține trei directoare: ”rendu”, ”subjects” și ”traces”.

*Directorul ”subjects” va conține subiectul examenului vostru.

*Directorul ”rendu” este o clonă a Git-ului vostru ”turn-in repository”. Veți lucra în el, și poate fi utilizat ca orice depozit Git regulat.

*Sistemul nu va nota nimic ce nu este trimis pe Git ”turn-in repository” și în locul corect. Fiți foarte atenți unde ”examshell” va spune sa puneți fișierele voastre.

*Puteți să vă rulați programele voastre în directorul ”rendu” sau în unul din subdirectoarele lui.

*Este posibil să fie nevoie să citiți man-ul pentru a realiza un exercițiu.….

*Veți fi notați de un program. Trebuie să respectați specificațiile fisierului / căii (path) / numele funcțiilor EXACT așa cum este cerut.

*Exercițiile vor specifica întotdeauna ce fișiere vor fi corectate:

  * Când un exercițiu cere un anumit fișier, acesta va fi numit explicit. De exemplu ”file1.c” sau ”file1.h”

  * Altfel, când numele sau numărul de fișiere este la latitudinea voastră, exercițiul va specifica ceva de genul ”*.c” sau ”*.h”

  * Când un ”Makefile” este cerut, va fi ÎNTOTDEAUNA specificată starea lui.

* În cazul unei defecțiuni tehnice, întrebări despre subiect sau orice altă problemă, trebuie să te ridici în picioare, în liniște și să aștepți ca un membru al staff-ului sa vină la tine. Este interzis să îți întrebi vecinii sau să strigi după un membru al staff-ului.

* Oricei echipament care nu este explicit permis, este implicit interzis.

* Orice părăsire a sălii de examinare este definitivă, nu te mai poți întoarce.

* Membri staff-ului vă pot da afară din examen, fără avertisment, în cazul în care consideră necesar.

* Vă este permisă intrarea în sală cu o hartie albă și un pix, Fără caiete, notițe sau orice alt ajutor de acest fel. Ești singur ca să înfrunți acest examen.

# Reguli pentru codare 

* Funcții folositoare sau fișiere vor fi date, câteodată, în directorul subiectului.

* Corectarea este complet automată și se face de către un program pe care îl numim ”Deepthought”

* Când un exercițiu îți cere să scrii un program cu unul sau mai multe nume de fișiere date explicit, va fi compliat cu următoarea comandă: ”clang -Wall -Wextra -Werror file1.c file2.c file3.c -o nume_program”.

* Cand exercitiul lasa la latitudinea voastra numele fisierelor, exercitiul va fi compilat cu: clang -Wall -Wextra -Werror *.c -o program_name

* Când trebuie doar să trimiteți o funcție (adică un fișier) va fi compilat cu ”clang -c -Wall -Wextra -Werror yourfile.c” apoi noi vom compila funcția noastră principală și le vom lega împreună pentru a crea un program de test.

* Funcțiile permise vor fi specificate în antetele fiecărui exercițiu.  Puteți recoda orice altă funcție credeți că este necesar. Folosirea unei funcții care nu este permisă în mod explicit este considerată trișare, și va duce la nepromovarea examenului, fără drept la discuții sau contenstații. Ați fost avertizați.

*Orice funcție, care nu este permisă în mod explicit, este implicit interzisă

