#include <iostream>;
#include "duree.h"
using namespace std;
#include "duree.h"
void Duree::affiche() const {
    // nb_utilisations++;
    cout << s/3600 << "H" << (s%3600)/60 << "M" << s%60;
}

void Duree::setDuree(int H, int M, int S) {
    if (S<0 || S>59 || M<0 || M>59 || H<0)
        s =3600* H + M*60 + S;
}

// void Duree::duplique(Duree& d) const {
//     d.h = h;
//     d.m = m;
//     d.s = s;
// } 

void f(int a) {
    Duree d;
    d.s = 420;
}

Duree::Duree(int H, int M, int S){
    // h=H; m=M; s=S;
    setDuree(H,M,S);
} 