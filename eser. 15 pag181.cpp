/* Federico Bettiolo
    4^c  29/1/17    */

#include <iostream>
using namespace std;


class Conto {
   public:
       float saldo;
   public:
       Conto (float s);
       };

class ContoCorrente : public Conto {
             public:
                 float prelievo;
                 float versamento;
             public:
                 ContoCorrente (float p, float v);

                 };



    int main () {


        Conto c(500);
        cout <<"Il tuo saldo e':  " << c.saldo <<endl;

         float prelievo;
         float versamento;

        ContoCorrente p(56);
        ContoCorrente v(34);


        return 0;}



Conto::Conto (float s) {
      saldo = s;
      }


ContoCorrente::ContoCorrente (float p, float v){

    prelievo = p;
    versamento = v;
    }


