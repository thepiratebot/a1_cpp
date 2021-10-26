//
// Created by Brice - DevOps on 26/10/2021.

#ifndef TP3_GRILLEMORPION_H
#define TP3_GRILLEMORPION_H
#include "Private_Library/Grid.h"


class GrilleMorpion : public Grid {
public:
    /* CONSTRUCTORS */
    GrilleMorpion(int Height, int Width);

    /* METHODS */
    bool checkHeight();
    bool checkWidth();
    bool checkDiagonal();

    bool playerVictory();
};


#endif //TP3_GRILLEMORPION_H
