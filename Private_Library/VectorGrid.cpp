//
// Created by Brice - DevOps on 27/10/2021.
//

#include "VectorGrid.h"
#include <iostream>
#include <utility>

/* CONSTRUCTORS */

VectorGrid::VectorGrid(int Column, int Row, int Depth, const std::string& Token) {
    _column = Column;
    _row = Row;
    _depth = Depth;

    for (int d = 0; d < _depth; d++) {
        std::vector<std::vector<std::string>> Xolumn;
        for (int c = 0; c < _column; c++) {
            std::vector<std::string> Xow;
            for (int r = 0; r < _row; r++) {
                Xow.push_back(Token);
            }
            Xolumn.push_back(Xow);
        }
        _grid.push_back(Xolumn);
    }
}

/* SETTER */

void VectorGrid::setGridValue(int Row, int Column, int Depth, std::string Token) {
    _grid.at(Depth - 1).at(Row - 1).at(Column - 1) = std::move(Token);
}

/* GETTERS */

int VectorGrid::getColumn() const {
    return _column;
}

int VectorGrid::getRow() const {
    return _row;
}

int VectorGrid::getDepth() const {
    return _depth;
}

std::vector<std::vector<std::vector<std::string>>> VectorGrid::getGrid() {
    return _grid;
}

/* METHODS */

void VectorGrid::clearGrid() {
    for (int d = 0; d < _grid.size(); d++) {
        for (int c = 0; c < _grid[d].size(); c++) {
            for (int r = 0; r < _grid[d][c].size(); r++) {
                _grid.at(d).at(c).at(r) = "";
            }
        }
    }
}

void VectorGrid::showGrid() {
    for (int d = 0; d < _depth; d++) {
        std::cout << std::endl;
        for (int c = 0; c < _column; c++) {
            std::cout<< std::endl << "| ";
            for (int r = 0; r < _row; r++) {
                std::cout << _grid[d][c][r] << " | ";
            }
        }
    }
}