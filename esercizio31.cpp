/* Federico Bettiolo
   4^C  5/11/16    */



   #include <iostream>
   #include <string.h>

   using namespace std;

   string classe;

   void visualizza (string classe);  //prototipo


   int main () {

       cout <<"Inserisci la classe " ;
       cin >> classe ;
       cout <<endl;

       visualizza (classe);

       return 0;}  //funzione principale



    void visualizza (string classe) {


    cout <<"sei in " << classe << endl <<endl;
    cout <<"sei in " << classe << endl <<endl;
    cout <<"sei in " << classe << endl <<endl;

    }  //funzione "visualizza""
