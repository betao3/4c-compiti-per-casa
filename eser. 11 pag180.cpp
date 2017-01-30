/* Federico Bettiolo
    4^c  29/1/17    */

#include <iostream>
#define N_SCUOLE 5
#define N_STUDENTI 10
using namespace std;


class scuola {
   public:
       unsigned int id;
       string denominazione;
       unsigned int num_Studenti;
       studente studenti[N_STUDENTI];

   public:
       scuola(string nome_scuola);
       scuola(string nome_scuola, unsigned int id);
       void stampa_studenti ();
       };


class studente {
   public:
       string nome;
       string cognome;
       unsigned int id_scuola;
   public:

    };



int main () {

    scuola scuole[N_SCUOLE];

    for (int i = 0; i < N_SCUOLE; i++){
            string nome_scuola;
            cout <<"Inserisci il nome della scuola:  " <<endl;
            cin>> nome_scuola;
            scuola s(nome_scuola); //con metodo costruttore
            s.id = i;              //senza costruttore assegnazione semplice
            scuole [i] = s;
            char scelta = 's';
            while (scelta == 's'){
                    string nome_studente;
                    cout <<"Inserisci nome studente:  " <<endl;
                    cin >> nome_studente;
                    string cognome_studente;
                    cout <<"Inserisci cognome studente:  " <<endl;
                    cin >> cognome_studente;
                    studente stud;
                    stud.nome = nome_studente;
                    stud.cognome = cognome_studente;
                    stud.id_scuola = i;
                    cout << "Vuoi continuare?  (s/n)" <<endl;
                    cin >>scelta;
                    }}

   string nome_scuola;
   cout <<" Di quale scuola vuoi gli studenti?" <<endl;
   cin >> ;



scuola::scuola(string nome_scuola){
       denominazione = nome_scuola;
       }

scuola::scuola(string nome_scuola, unsigned int id) {
       denominazione = nome_scuola;
       id = id_scuola;
       }

scuola::void stampa_studenti () {

       }
