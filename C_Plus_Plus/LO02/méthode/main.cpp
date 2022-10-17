#include "duree.h"
int main() {
    Duree d;
    Duree* pt = new Duree;
    d.affiche();  pt->affiche();   
    Duree d2(2, 30, 20);
    Duree d3 = Duree(4, 30, 26);
    Duree d4 {5,56,24};  // C++11
    Duree d5 = {2,12,24};
    // d.h = -6;         //  ? negative?  private ²»¿É·ÃÎÊ
    // d.m = 73;         //  > 59
    // d.setDuree(14, 30, 20);
    // d.setDuree(-6, 73, 00);
    // Duree d2;
    // d.duplique(d2);




    // Duree d1;
    // d1.setDuree(2, 15, 30);
    // d1.affiche();
    // const Duree& ref = d1;
    // d1.getH() = 12;
    // //ref.getH() = 12;   // erreur
    // Duree d2;
    // d2.setDuree(4, 18, 20);
    // d1.affiche();       // 2H15M30S
    // d2.affiche();       // 4H18M20S

    // d1.duplique(d2);       // d2 change d1 ne change pas
    return 0;

}
    
