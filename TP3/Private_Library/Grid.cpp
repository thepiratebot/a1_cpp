//
// Created by Brice - DevOps on 26/10/2021.
//
#include "Grid.h"
#include <iostream>

/* CONSTRUCTORS */
Grid::Grid(int Height, int Width) {
    _height = {Height};
    _width = {Width};

    _array = new std::string *[Height];

    for (int x = 0; x < Height; x++) {
        getArray()[x] = new std::string[Width];
    }
}

/* GETTER */
int Grid::getHeight() const {
    return _height;
}

int Grid::getWidth() const {
    return _width;
}

std::string **Grid::getArray() {
    return _array;
}

std::string Grid::getValue(int X, int Y) {
    return getArray()[Y - 1][X - 1];
}

/* SETTER */
void Grid::setValue(int X, int Y, std::string Value) {
    getArray()[Y - 1][X - 1] = std::move(Value);
}


/* METHODS */
bool Grid::isCellEmpty(int X, int Y) {
    return (getArray()[Y - 1][X - 1].empty());
}

void Grid::clearGrid() {
    for (int x = 0; x < getHeight(); x++) {
        for (int y = 0; y < getWidth(); y++) {
            getArray()[x][y] = "";
        }
    }
}

void Grid::showGrid() {
    for (int x = 0; x < getHeight(); x++) {
        for (int y = 0; y < getWidth(); y++) {
            std::cout << " | " << getArray()[x][y];
        }
        std::cout << " | " << std::endl;
    }
}

/*
bool GrilleMorpion::checkDiagonal()
{
    bool check = false;

    int x = 0;
    int y = 0;

    if (getArray()[y][x].empty())
    {
        check = false;
    } else
    {
        while (x < getHeight() - 1)
        {
            if (x < getHeight() - 1)
            {
                if (getArray()[0][2] == getArray()[y + 1][x + 1]) {
                    x++;
                    y++;
                    check = true;
                } else
                {
                    check = false;
                }
            }
        }
    }

    x = 0;
    y = getHeight() - 1;

    if (getArray()[y][x].empty())
    {
        return false;
    } else
    {
        while (x < getHeight() - 1)
        {
            if (x < getHeight() - 1)
            {
                if (getArray()[2][0] == getArray()[y - 1][x + 1]) {
                    x++;
                    y--;
                    check = true;
                } else
                {
                    return false;
                }
            }
        }
    }

    return check;
} */

/* bool GrilleMorpion::checkHeight()
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
} */
