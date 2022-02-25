#ifndef TRACK
#define TRACK

#include <math.h>

class track {
    public:
        track();
        ~track();

        //Getters
        double p0() const;
        double p1() const;
        double p2() const;
        double p3() const;
        double pt() const;
        double eta() const;

        //Setters
        void momentum(double p0, double p1, double p2, double p3);

    private:
        double p_0;
        double p_1;
        double p_2;
        double p_3;
};
#endif