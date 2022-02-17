#include <iostream>
#include <cmath>
#include "Exercise3_Pfau.cpp"
using namespace std;

/* After compiling this file, the executable will output the value of r for x=1 and y=2.
The file "Exercise3_Pfau.cpp" does not need to be compiled for this. */

 int main () {
    measure m1;
    /* Enter the values: */
    m1.matrix (0.1,0.1,0.0);
    m1.coord (1,2);
    /* print the value of r for x=1 and y=2: */
    cout << "r = " << m1.r() << endl;
    return 0;
}