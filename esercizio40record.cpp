/* Bettiolo Federico
   4^c  3/12/16    */
#include<iostream>
using namespace std;

struct punto{
    float x;
    float y;
};

struct retta{
    float m;
    float q;
};

bool inter(retta R, punto P);

int main(){
    retta R;
    punto P;
    cout<<"Inserisci l'ascissa del punto:";
    cin>> P.x;
    cout<<"Inserisci l'ordinata del punto:";
    cin>> P.y;
    cout<<"Inserisci il punto di intersezione con l'asse y:";
    cin>> R.q;
    cout<<"inserisci il coeff. angolare:";
    cin>> R.m;
    if(inter(xp, yp, q, m))
        cout<<"Il punto appartiene alla retta"<<'\n';
    else
        cout<<"Il punto non appartiene alla retta"<<'\n';
    return 0;
}

bool inter(float xp, float yp, float q, float m){
    return (yp == (m*xp)+q);
}
