//
// Created by Brice - DevOps on 26/10/2021.
//

#include "GrilleMorpion.h"
#include <iostream>

    /* CONSTRUCTORS */
GrilleMorpion::GrilleMorpion(int Height, int Width) : Grid(Height, Width) {}

    /* METHODS */
bool GrilleMorpion::checkHeight()
{
    bool check = false;

    int x = 0;
    int y = 0;

    while (x < getWidth())
    {
        if (getArray()[y][x].empty())
        {
            x++;
            y = 0;
        } else if (y < getHeight() - 1)
        {
            if (getArray()[0][x] == getArray()[y + 1][x]) {
                y++;
                check = true;
            } else
            {
                x++;
                y=0;
                check = false;
            }
        } else if (check)
        {
            return check;
        }
    }

    return check;
}

bool GrilleMorpion::checkWidth()
{
    bool check = false;

    int x = 0;
    int y = 0;

    while (x < getHeight())
    {
        if (getArray()[x][y].empty())
        {
            x++;
            y = 0;
        } else if (y < getWidth() - 1)
        {
            if (getArray()[x][0] == getArray()[x][y + 1]) {
                y++;
                check = true;
            } else
            {
                x++;
                y=0;
                check = false;
            }
        } else if (check)
        {
            return check;
        }
    }

    return check;
}

bool GrilleMorpion::checkDiagonal()
{

}