/* Federico Bettiolo
   4^C  5/11/16    */



   #include <iostream>


   using namespace std;

   int x;
   int i=0;


   int  successivi (int x);


   int main () {


       cout <<"Inserisci un numero ";
       cin >> x;
       cout <<endl;

       cout <<"i 5 successivi sono  " <<endl;
       successivi (x);

       return 0;}



   int  successivi (int x) {

      while (i<5){
            x++;
            cout <<x <<endl;
            i++;}}





