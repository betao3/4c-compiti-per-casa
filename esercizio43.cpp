/*  Federico Bettiolo
    4^C  7/11/16  */


    #include <iostream>
    #include <string.h>

    using namespace std;

    string nome1,nome2;
    int voti1, voti2;
    int voti_tot;
    float perc1, perc2;

    float percentuale (int voti1, int voti2, int voti_tot, float perc1, float perc2);

    int main () {

        cout <<"primo candidato:  ";
        cin >>nome1;

        cout <<"voti a favore:  ";
        cin >>voti1;

        cout <<"secondo candidato:  ";
        cin >>nome2;

        cout <<"voti a favore   ";
        cin >>voti2;

        cout <<"percentuali sui voti totali: ";
        cout <<percentuale (voti1,voti2,voti_tot,perc1,perc2) <<endl;

    return 0;}


    float percentuale (int voti1, int voti2, int voti_tot, float perc1, float perc2) {

        voti_tot=voti1+voti2;

        perc1=(voti1*100)/voti_tot;
        perc2=(voti2*100)/voti_tot;

        cout <<perc1 <<"%" <<"    " <<perc2 <<"%" <<endl;
        
            
        if (perc1>perc2)
           {cout <<"1. " <<nome1 <<endl;
            cout <<"2. " <<nome2;}
        
        if (perc1<perc2) 
             {cout <<"1. " <<nome2 <<endl;
              cout <<"2. " <<nome1;}

        if (perc1==perc2)
        {cout <<"hanno pareggiato";}
        }



