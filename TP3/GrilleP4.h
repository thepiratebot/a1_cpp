//
// Created by Brice - DevOps on 26/10/2021.
//

#ifndef TP3_GRILLEP4_H
#define TP3_GRILLEP4_H
#include "Private_Library/Grid.h"


class GrilleP4 : public Grid {
public:
    /* CONSTRUCTORS */
    GrilleP4(int Height, int Width);

    /* METHODS */
    bool checkHeight(int Height, const std::string& Token);
    bool checkWidth(int Width, const std::string& Token);
    //bool checkDiagonal(int Height, const std::string& Token);

    bool playerVictory(int Height, const std::string& Token);

};


#endif //TP3_GRILLEP4_H
