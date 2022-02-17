#include <iostream>
#include <cmath>
using namespace std;

/* The values for the x and y coordinates and for the elements of the error matrix can
be inserted in "coord" and "matrix". "r" is the distance calculated from x and y. */

class measure {
    double sigma_x2, sigma_y2, sigma_xy, x_coord, y_coord;
    public:
        void matrix (double,double,double);
        void coord (double,double);
        double r () {return sqrt(x_coord*x_coord+y_coord*y_coord);}
};

void measure::matrix (double x2, double y2, double xy) {
    sigma_x2 = x2;
    sigma_y2 = y2;
    sigma_xy = xy;
}

void measure::coord (double x, double y) {
    x_coord = x;
    y_coord = y;
}

/* The following part can be found in the file "testprogram.cpp".
int main () {
    measure m1;
    m1.matrix (0.1,0.1,0.0);
    m1.coord (1,2);
    /* print the value of r for x=1 and y=2: */
    /*cout << "r = " << m1.r() << endl;
    return 0;
}*/