//
// Created by Brice - DevOps on 26/10/2021.
//
#include <iostream>

    /* CONSTRUCTORS */
Grid::Grid(int Height, int Width)
{
    _height = { Height };
    _width = { Width };

    _array = new std::string*[Height];

    for (int x = 0; x < Height; x++)
    {
        getArray()[x] = new std::string[Width];
    }

    for (int x = 0; x < Height; x++)
    {
        for (int y = 0; y < Width; y++)
        {
            getArray()[x][y] = "0";
        }
    }
}

    /* GETTER */
int Grid::getHeight() const
{
    return _height;
}

int Grid::getWidth() const
{
    return _width;
}

std::string** Grid::getArray()
{
    return _array;
}

std::string Grid::getValue(int X, int Y)
{
    return getArray()[X-1][Y-1];
}

    /* SETTER */
void Grid::setValue(int X, int Y, std::string Value)
{
    getArray()[X-1][Y-1] = std::move(Value);
}


/* METHODS */
void Grid::showGrid()
{
    for (int x = 0; x < getHeight(); x++)
    {
        for (int y = 0; y < getWidth(); y++)
        {
            std::cout << " | " << getArray()[x][y];
        }
        std::cout << " | " << std::endl;
    }
}
