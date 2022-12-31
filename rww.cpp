#include <iostream>
using std::cerr;
using std::endl;
#include <fstream>
using std::ofstream;
#include <cstdlib> // for exit function
// This program output values from an array to a file named example2.dat
int main()
{
   ofstream outdata; // outdata is like cin
   int i; // loop index
   int num[2] = {98,99}; // list of output values

outdata.open("example2.txt"); // opens the file
   if( !outdata ) { // file couldn't be opened
      cerr << "Error: file could not be opened" << endl;
      exit(1);
   }

for (i=0; i<2; ++i)
      outdata << num[i] << endl;
   outdata.close();
 
   return 0;
}