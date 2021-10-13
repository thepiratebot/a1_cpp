#include <iostream>
#include "rectangle.h"
#include "rectangle.cpp"
#include "cercle.h"
#include "cercle.cpp"
#include "triangle.h"
#include "triangle.cpp"
#include "point.h"

using namespace std;

int main()
{
    /* TEST RECTANGLE */
    Point _rectangle_point;
    _rectangle_point.x = 1;
    _rectangle_point.y = 2;

    Rectangle rectangle(10, 15, _rectangle_point);
    rectangle.afficher();

    /* TEST CERCLE */
    Point _cercle_centre;
    _cercle_centre.x = 0;
    _cercle_centre.y = 0;

    Cercle cercle(10, _cercle_centre);
    cercle.afficher();

    /* TEST TRIANGLE */
    Point _triangle_one;
    _triangle_one.x = 0;
    _triangle_one.y = 0;

    Point _triangle_two;
    _triangle_two.x = 1;
    _triangle_two.y = 4;

    Point _triangle_three;
    _triangle_three.x = 6;
    _triangle_three.y = 2;

    Triangle triangle(_triangle_one, _triangle_two, _triangle_three);
    triangle.afficher();

    return 0;
}