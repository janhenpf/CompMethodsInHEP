#include "track.h"
#include <iostream>

using namespace std;

int main(){
    //Create object
    track abc;
    //Set data
    abc.momentum(2.0, 1.0, 1.0, 1.0);

    //Output
    cout << "Transverse momentum " << abc.pt() << ", pseudorapidity " << abc.eta() << endl;

    return 0;
}