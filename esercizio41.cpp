/*  Federico Bettiolo
    4^C  7/11/16  */


    #include <iostream>
    #include <string.h>

    using namespace std;

    int guadagno;
    int somma=0;
    string reparto;
    int fine;
    int i=0;
    float m;

    int assunzione_somma (int guadagno, int& somma, string reparto);

    float media (int& somma, int& i, float m);

    int main () {

        cout <<"CALCOLO MEDIA GUADAGNI DEI REPARTI" <<endl;

        cout <<assunzione_somma (guadagno,somma,reparto) <<endl;

        cout <<"La media e':  " ;
        cout <<media (somma,i,m);






        return 0;}

    int assunzione_somma (int guadagno, int& somma, string reparto) {

        do {
            cout <<"inserisci il reparto:  ";
            cin >>reparto;

            cout <<"inserisci guadagno:  ";
            cin >>guadagno;

            somma=somma+guadagno;
            i++;
            cout <<"hai finito? (0=SI)   ";
            cin >>fine;

        } while (fine!=0);

        cout <<"I guadagni totali sono:  ";
        return somma;}



    float media (int& somma, int& i, float m) {

           m=somma/i;


        return m;}
