class Priority {
    private: 
        static const int max = 100;
        static const int min = 1;
        int value;
        static int nbobjects;

    public:
        Priority(int v) {setValue(v);}     nbobjects++;
        void setValue(int v) {
            if (v < min || v > max) throw "error";
            value = v;
        }
        int getValue() const {return value;}
        static int getNbObjects{return nbobjects;}
        static int getMin()  {return min;}
        static int getMax()  {return max;}
        ~Priority() {nbobjects--;}
}; 