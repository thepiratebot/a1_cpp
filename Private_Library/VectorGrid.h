//
// ThePirateBot - Private Library - VectorGrid
// Version : 1
//

#include <vector>
#include <iostream>

#ifndef PRIVATE_LIBRARY_VECTORGRID_H
#define PRIVATE_LIBRARY_VECTORGRID_H


class VectorGrid {
private:
    int _column;
    int _row;
    int _depth;

    std::vector<std::vector<std::vector<std::string>>> _grid;

public:
        /* CONSTRUCTORS */
    VectorGrid(int Column, int Row, int Depth, const std::string& Token);

        /* SETTER */
    void setGridValue(int Row, int Column, int Depth, std::string Token);

        /* GETTERS */
    int getColumn() const;
    int getRow() const;
    int getDepth() const;
    std::vector<std::vector<std::vector<std::string>>> getGrid();

        /* METHODS */
    // bool checkColumn(int RecursiveLength, int RecursivePresence, std::string Token);
    // bool checkRow(int RecursiveLength, int RecursivePresence, std::string Token);
    // bool checkDepth(int RecursiveLength, int RecursivePresence, std::string Token);
    // bool checkDiagonal(int RecursiveLength, int RecursivePresence, std::string Token);

    void clearGrid();
    void showGrid();
};


#endif //PRIVATE_LIBRARY_VECTORGRID_H
