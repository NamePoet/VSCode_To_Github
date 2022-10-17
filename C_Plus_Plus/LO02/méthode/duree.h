struct Duree {

public:
    void setDuree(int H, int M, int S) {
        h = H; 
        m = M;
        s = S;
    }
    void affiche()  const;
    int getConversionEnSecondes() const {
        return 3600*h+60*m+s;
    }    
    void duplique(Duree& d) {
        d.s = s;
    }
private:
    int h=0,m=0,s=0;


    // int getDureeEnSecondes()  const {
    //     return 3600*h + 60 * m + s;
    // }
    // int& getH() {
    //     return h;
    // }
    // const int& getH() const {
    //     return h;
    // }
    // void duplique(Duree& d) const;
};


class Duree {
public:
    friend void f(int a);
    friend void A::g();
    friend class A;  
    Duree() {h=0; m=0; s=0;}
    Duree(int H, int M, int S);
    int h,m,s;
    Duree:h(0), m(0), s(0) {}
};

void f(int a);


class A {
    void g();
    void h();
};