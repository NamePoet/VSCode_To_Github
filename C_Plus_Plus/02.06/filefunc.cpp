// filefunc.cpp -- function with ostream & parameter
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;
int main()
{
    ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        cout << "Can't open " << fn << ". Bye.\n";
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "Enter the focal length of your "
            "telescope objective in mm: ";
    cin >> objective;
    double eps[LIMIT];
    cout << "Enter the focal lengths, in mm, of " << LIMIT  
         << " eyepieces:\n";
    for (int i = 0; i < LIMIT; i++) 
    {
        cout << "Eyepieces #" << i + 1 << ": ";
        cin >> eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "Done\n";

    return 0;
}

void file_it(ostream & os, double fo, const double fe[], int n)
{
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed);  // save initial formatting state
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(12);
    os << "f.l. eyepiece";
    os.width(15);
    os << "magnification" << endl;
    for (int i = 0; i < n; i++) 
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
        os.setf(initial);  // restore initial formatting state
    }

}




/*

    Enter the focal length of your telescope objective in mm: 500
    Enter the focal lengths, in mm, of 5 eyepieces:
    Eyepieces #1: 15
    Eyepieces #2: 18
    Eyepieces #3: 20
    Eyepieces #4: 14
    Eyepieces #5: 17
    Focal length of objective: 500 mm
    f.l. eyepiece  magnification
            15.0             33
            18.0             28
            20.0             25
            14.0             36
            17.0             29
    Done


*/