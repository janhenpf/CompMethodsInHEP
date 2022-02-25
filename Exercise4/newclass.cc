#include "track.h"
#include "newclass.h"
#include <iostream>

newclass::newclass() { }

newclass::~newclass() { }

void newclass::id (double id0, double id1, double id2, double id3) {
    id_0 = id0;
    id_1 = id1;
    id_2 = id2;
    id_3 = id3;

void newclass::parent_id (double pid0, double pid1, double pid2, double pid3) {
    parent_id_0 = pid0;
    parent_id_1 = pid1;
    parent_id_2 = pid2;
    parent_id_3 = pid3;
}