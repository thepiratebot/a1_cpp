#include "Private_Library/Grid.cpp"

using namespace std;

int main()
{
    /* TEST GRID */
    Grid _testGrid(3,3);
    _testGrid.showGrid();

    _testGrid.setValue(2,2, "X");

    _testGrid.showGrid();


    return 0;
}