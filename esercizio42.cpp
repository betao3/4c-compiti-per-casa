/* Bettiolo Fedeerico
   4^C 10/11/16   */

// non ho capito come inserire la descrizione,
//la mia idea era di immetterla da tastiera
//ma non sarebbe stata attinente alla consegna.


   #include <iostream>
   #include <string.h>


   using namespace std;

   int prezzo;
   float incr;
   int fine;
   int perc;
   string prodotto;


   float incremento (int perc, int prezzo, float incr);

   int main () {

       cout <<"CATALOGO ONLINE" <<endl <<endl;

       do {

            cout <<"il prodotto:  ";
            cin >>prodotto;
            cout <<"che costava:  ";
            cin >>prezzo;
            cout <<endl;

            cout <<"ora costa  ";
            cout <<incremento (perc,prezzo,incr) <<endl;


          cout <<"ti interessa altro? (0=no)" <<endl;
          cin >>fine;

       } while (fine!=0);

         return 0;}

   float incremento (int perc, int prezzo, float incr) {



       cout <<"secondo la percentuale d'incremento:  ";
       cin >>perc;


     incr=prezzo+((prezzo*perc)/100);

      return incr;}
