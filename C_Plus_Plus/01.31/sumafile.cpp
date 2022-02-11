// sumafile.cpp -- functions with an array argument
#include <iostream>
#include <fstream>           // file I/O support
#include <cstdlib>           // support for exit()
const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;         // object for handling file input
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);   // associate inFile with a file
    
    // ����ļ��Ƿ񱻳ɹ���������Ҫ
    if (!inFile.is_open())   // failed to open file
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }


    double value;
    double sum = 0.0;
    int count = 0;            // numbers of items read

    inFile >> value;          // get first value
    while (inFile.good())     // while input good and not at EOF
    {
        ++count;              // one more item read
        sum += value;         // calculate running total
        inFile >> value;      // get next value
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else 
        cout << "Input terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else 
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();           // finished with the file
    return 0;

}
/*
    Enter name of data file: scores.txt
    End of file reached.
    Items read: 12
    Sum: 204.5
    Average: 17.0417

*/






