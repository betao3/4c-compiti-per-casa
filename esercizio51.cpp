/* Bettiolo Federico
   4^c  18/11/16  */


   #include <iostream>

   using namespace std;

   int num[10];
   int i;
   int s=0;


   int main () {

       for (i=0;i<10;i++) {

            cout<< "Inserisci il valore  " <<i <<"  " <<"dell'array: ";
            cin >> num[i];};

       for (i=0;i<10;i++) {

            if (num[i]>5)

            s += num[i];};


    cout<< "La somma delle componenti maggiori di 5 e':   ";
    cout<< s <<endl;


return 0;}
