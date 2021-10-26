//
// Created by Brice - DevOps on 26/10/2021.
//

#include "GrilleP4.h"
#include <iostream>

    /* CONSTRUCTORS */
GrilleP4::GrilleP4(int Height, int Width) : Grid(Height, Width) {}

    /* METHODS */
bool GrilleP4::checkHeight(int Height, const std::string& Token)
{
    for (int i = 0; i < getWidth() - 1; i++)
        if (getArray()[i][Height - 1].empty())
            return false;

    return (getArray()[0][Height - 1] == getArray()[1][Height - 1] && getArray()[0][Height - 1] == getArray()[2][Height - 1] && getArray()[0][Height - 1] == getArray()[3][Height - 1] && getArray()[0][Height - 1] == Token);
}

bool GrilleP4::checkWidth(int Height, const std::string& Token)
{
    int check = 0;

    for (int i = 0; i < getWidth(); i++)
    {
        if (getArray()[Height][i] == getArray()[Height][i + 1] && !getArray()[Height][i].empty())
        {
            check++;
            if (check == 4)
                return true;
        } else
        {
            check = 0;
        }
    }

    return false;
}

bool GrilleP4::playerVictory(int Height, const std::string &Token)
{
    return (checkWidth(Height,Token) || checkHeight(Height, Token));

}