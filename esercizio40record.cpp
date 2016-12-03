/* Bettiolo Federico 
   4^c  3/12/16    */
#include<iostream>
using namespace std;

struct punto{
    float xp;
    float yp;
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
    cin>>xp;
    cout<<"Inserisci l'ordinata del punto:";
    cin>>yp;
    cout<<"Inserisci il punto di intersezione con l'asse y:";
    cin>>q;
    cout<<"inserisci il coeff. angolare:";
    cin>>m;
    if(inter(xp, yp, q, m))
        cout<<"Il punto appartiene alla retta"<<'\n';
    else
        cout<<"Il punto non appartiene alla retta"<<'\n';
    return 0;
}

bool inter(float xp, float yp, float q, float m){
    return (yp == (m*xp)+q);
}
