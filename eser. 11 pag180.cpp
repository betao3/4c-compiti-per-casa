#include<iostream>
#define N_SCUOLE 5
#define N_STUDENTI 10
using namespace std;

class Studente{
 public:
     string nome;
     string cognome;
     unsigned int id_scuola;
 public:
     Studente();
     Studente(string nome, string cognome, unsigned int id_scuola);
};

class Scuola{
public:
    unsigned int id;
    string denominazione;
    unsigned int num_studenti;
    Studente studenti[N_STUDENTI];
    public:
        Scuola();
        Scuola(string nome_scuola);
        Scuola(string nome_scuola, unsigned int id_scuola);
        void stampa_elenco(int j);
    };

void outstud(unsigned int id, Scuola scuole[N_SCUOLE]);

int main(){

Scuola scuole[N_SCUOLE];

for (int i = 0; i<N_SCUOLE; i++){
    string nome_scuola;
    cout<<"Inserisci il nome della scuola: " << endl;
    cin>> nome_scuola;
    Scuola s(nome_scuola);
    scuole[i] = s;
    s.id= i;
    char scelta = 's';
    int j = 0;
    while (scelta == 's'){
        string nome_studente;
        cout<<"Inserisci il nome dello studente: " << endl;
        cin>>nome_studente;
        string cognome_studente;
        cout<<"Inserisci il cognome dello studente: " << endl;
        cin>>cognome_studente;
        Studente stud(nome_studente, cognome_studente, i);
        s.studenti[j] = stud;
        cout<<"Vuoi continuare?(s/n): " << endl;
        cin>> scelta;
        j++;
    }
}
string nome_scuola;
unsigned int id;
cout << "Di quale scuola vuoi l'elenco studenti?" << endl;
cin>>id;
outstud(id, scuole);
return 0;
}

/* COSTRUTTORI DI Scuola */
Scuola::Scuola(){}

Scuola::Scuola(string nome_scuola){
    denominazione= nome_scuola;
}

Scuola::Scuola(string nome_scuola, unsigned int id_scuola){
    denominazione = nome_scuola;
    id=id_scuola;
}

/* COSTRUTTORI DI Studente */
Studente::Studente(){}

Studente::Studente(string n, string c, unsigned int i){
    nome = n;
    cognome = c;
    id_scuola = i;
}

/* METODI DI Scuola */

void Scuola::stampa_elenco(int j){
    // QUI MODIFICARE IN MODO DA STAMPARE TUUTI I NOMI E COGNOMI
    // DEGLI STUDENTO DELLA SCUOLA
    for (int k = 0; k<j; k++) {
    cout << "Nome: " << studenti[k].nome << endl;
    cout << "Cognome: " << studenti[k].cognome << endl;
    }
}

/* ALTRI METODI */

void outstud(unsigned int id, Scuola scuole[N_SCUOLE]){
    scuole[id].stampa_elenco(int j);
}
