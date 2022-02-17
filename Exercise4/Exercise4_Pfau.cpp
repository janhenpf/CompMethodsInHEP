#include <iostream>
#include <cmath>
using namespace std;

// Base class

class track {
    double p_0, p_1, p_2, p_3;
    public:
        void momentum (double,double,double,double);
        double eta () {return (-log(tan(acos(p_3/sqrt(p_1^2+p_2^2+p_3^2))/2.0)));}
};

void track::momentum (double p0, double p1, double p2, double p3) {
    p_0 = p0;
    p_1 = p1;
    p_2 = p2;
    p_3 = p3;
}

// Derived class

class simulated: public track {
    public:
        double id () {return ();}
};