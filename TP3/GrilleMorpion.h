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
    bool checkHeight(int Height, std::string Token);
    bool checkWidth(int Width, std::string Token);
    bool checkDiagonal(const std::string& Token);

    bool playerVictory(int Height, int Width, const std::string& Token);
};


#endif //TP3_GRILLEMORPION_H
