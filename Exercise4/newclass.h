#ifndef NEWCLASS
#define NEWCLASS

#include "track.h"
#include <math.h>

class newclass: public track {
    public:
        newclass();
        ~newclass();

        //Setters
        void id();
        void parent_id();
    
    private:
        double id_0;
        double id_1;
        double id_2;
        double id_3;
        double parent_id_0;
        double parent_id_1;
        double parent_id_2;
        double parent_id_3;
};
#endif