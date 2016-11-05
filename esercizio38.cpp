/* Federico Bettiolo
   4^C  5/11/16    */



   #include <iostream>

   using namespace std;

   float prezzo, sconto, prezzo_scontato;


   int saldo (float prezzo, float sconto);


   int main () {

       cout <<"Inserire il prezzo ";
       cin >> prezzo;
       cout <<endl;

       cout <<"Inserire lo sconto ";
       cin >> sconto;
       cout <<endl;

       cout <<" il prezzo scontato e'  " ;
       cout << saldo (prezzo,sconto);

       return 0;}


       int saldo (float prezzo, float sconto) {

           prezzo_scontato= prezzo-((prezzo*sconto)/100) ;

           return prezzo_scontato;

       }
