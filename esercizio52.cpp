/* Bettiolo Federico
   4^c  18/11/16  */


   #include <iostream>

   using namespace std;

   int num[10];
   int i;


   int main () {

       for (i=0;i<10;i++) {

            cout<< "Inserisci il valore  " <<i <<"  " <<"dell'array: ";
            cin >> num[i];
            cout <<endl;};

       for (i=0;i<3;i++) {

            num[i]=num[i]*2;};

    cout <<"Le prime tre componenti raddoppiate sono" <<endl;
    cout <<"0:   "  <<num[0] <<endl;
    cout <<"1:   "  <<num[1] <<endl;
    cout <<"2:   "  <<num[2] <<endl;



      return 0;}




