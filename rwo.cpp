#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string st = " ara bhai ";
    string st3 = " accha bhai ";

    ofstream out("Prac4.txt", std::ios::out | std::ios::app);
    out << st;
    out << st3;
    out.close();
    return 0;
}