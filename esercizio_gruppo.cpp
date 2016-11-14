/* Bettiolo Federico
   4^C 14/11/16  */


#include <iostream>

using namespace std;

int x,y;
int pot=1;
int pro;


int potenza (int x, int y, int pot);
int prodotto (int x, int y, int pro);

int main () {
do{
    cout<<"inserisci x:  ";
    cin>>x;

    cout<<"inserisci y:  ";
    cin>>y;
    } while (x<0 && y<0);



cout<<"La potenza x^y e':  "<<potenza (x,y,pot)<<endl;

cout<<"il prodotto x*y e':  "<<prodotto (x,y,pro) <<endl;



 return 0; }



int potenza (int x, int y, int pot) {

int i=0;

    do{
       pot=pot*x;
       i++;
} while(i<y);

return pot;}

 int prodotto (int x, int y, int pro) {

 int e=0;

     do  {

          pro=pro+x;
          e++;
} while(e<y);

return pro;}
