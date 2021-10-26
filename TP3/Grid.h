//
// Created by Brice - DevOps on 26/10/2021.
//

#ifndef TP3_GRID_H
#define TP3_GRID_H
#include <iostream>
#include <vector>

class Grid {
private:
    int _height;
    int _width;
    std::string** _array;

public:
    /* CONSTRUCTORS */
    Grid(int Height, int Width);

    /* GETTER */
    int getHeight() const;
    int getWidth() const;
    std::string** getArray();
    std::string getValue(int X, int Y);

    /* SETTER */
    void setValue(int X, int Y, std::string Value);

    /* METHODS */
    //bool checkRow(int RecursiveLength, bool Continue); *Futur fonction*
    //bool checkColumn(int RecursiveLength, bool Continue); *Futur fonction*
    void showGrid();
};


#endif //TP3_GRID_H
