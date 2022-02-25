#include "track.h"
#include <iostream>

track::track() { }

track::~track() { }

double track::p0() const { return p_0; }
double track::p1() const { return p_1; }
double track::p2() const { return p_2; }
double track::p3() const { return p_3; }

double track::pt() const { return sqrt(p1()*p1() + p2()*p2()); }

double track::eta() const { return (-log(tan(acos(p_3/sqrt(p_1^2+p_2^2+p_3^2))/2.0))); }

void track::momentum (double p0, double p1, double p2, double p3) {
    p_0 = p0;
    p_1 = p1;
    p_2 = p2;
    p_3 = p3;
}