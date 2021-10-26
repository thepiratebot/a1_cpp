#include "Private_Library/Grid.cpp"
#include "GrilleMorpion.cpp"
#include <iostream>

using namespace std;

int main()
{
    GrilleMorpion _testGrid(3,3);

    /* TEST GRID */
    _testGrid.showGrid();

    _testGrid.setValue(1,1,"0");
    _testGrid.setValue(2,1, "X");
    _testGrid.setValue(2,2, "O");
    _testGrid.setValue(2,3, "X");
    _testGrid.setValue(3,1, "X");
    _testGrid.setValue(3,2, "O");
    _testGrid.setValue(3,3, "X");

    _testGrid.showGrid();


    if (_testGrid.isCellEmpty(2,2))
        std::cout << "Ce n'est pas vide" << std::endl;

    if (_testGrid.checkWidth())
        std::cout << "Gagne" << std::endl;
    else
        std::cout << "Perdu" << std::endl;

    return 0;
}