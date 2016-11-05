/* Federico Bettiolo
   4^C  5/11/16    */



   #include <iostream>

   using namespace std;

   int y, x, m, q;
   bool inter;


   bool intersezione (int y, int m, int x, int q, bool inter);


   int main () {


       cout <<"inserire il coefficente angolare " <<endl;
       cin >> m;
       cout <<"inserire il termine noto " <<endl;
       cin >> q;

       cout <<endl;

       if (intersezione(y,m,x,q,inter)==true)
        cout <<" il punto appartiene alla retta." <<endl;
       else  cout <<" il punto non appartiene alla retta " <<endl;

       return 0;}



    bool intersezione (int y, int m, int x, int q, bool inter) {

        int xp,yp;


        cout <<"inserisci ascissa del punto " <<endl;
        cin >> xp;

        cout <<" inserisci ordinata del punto " <<endl;
        cin >> yp;


        y=yp;
        x=xp;

        if ((m*x)+q-y==0)

             return inter= true;
        else return inter= false;}







