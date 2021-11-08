#include "VectorGrid.cpp"

int main() {

    VectorGrid _array(3, 13, 1, "*");

    _array.showGrid();

    _array.setGridValue(3,7,1,"Saaaaaluuuuuuuuut");

    _array.showGrid();

    return 0;
}
