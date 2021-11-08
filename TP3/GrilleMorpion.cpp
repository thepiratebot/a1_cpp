//
// Created by Brice - DevOps on 26/10/2021.
//

#include "GrilleMorpion.h"
#include <iostream>

    /* CONSTRUCTORS */
GrilleMorpion::GrilleMorpion(int Height, int Width) : Grid(Height, Width) {}

    /* METHODS */
bool GrilleMorpion::checkHeight(int Height, std::string Token)
{
    for (int i = 0; i < getWidth(); i++)
        if (getArray()[i][Height - 1].empty())
            return false;

    return (getArray()[0][Height - 1] == getArray()[1][Height - 1] && getArray()[0][Height - 1] == getArray()[2][Height - 1] && getArray()[0][Height - 1] == Token);
}

bool GrilleMorpion::checkWidth(int Width, std::string Token)
{
    for (int i = 0; i < getHeight(); i++)
        if (getArray()[Width - 1][i].empty())
            return false;

    return (getArray()[Width][0] == getArray()[Width - 1][1] && getArray()[Width - 1][0] == getArray()[Width - 1][2] && getArray()[Width - 1][0] == Token);
}

bool GrilleMorpion::checkDiagonal(const std::string& Token)
{
    bool check = false;

    for (int i = 0; i < getHeight(); i++)
        if (getArray()[i][i].empty())
            check = true;

    if (!check && getArray()[0][0] == getArray()[1][1] && getArray()[0][0] == getArray()[2][2] && getArray()[0][0] == Token)
        return true;

    if (!check && !getArray()[2][0].empty() && !getArray()[1][1].empty() && !getArray()[0][2].empty())
    {
        if (getArray()[2][0] == getArray()[1][1] && getArray()[2][0] == getArray()[0][2] && getArray()[2][0] == Token)
            return true;
    } else
    {
        return false;
    }
}

bool GrilleMorpion::playerVictory(int Height, int Width, const std::string &Token)
{
    return (checkDiagonal(Token) || checkWidth(Width,Token) || checkHeight(Height, Token));
}