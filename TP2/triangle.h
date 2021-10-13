//
// Created by Brice - DevOps on 12/10/2021.
//

#ifndef TP2_TRIANGLE_H
#define TP2_TRIANGLE_H
#include "point.h"
#include <iostream>

class Triangle {
private:
    Point _point_one;
    Point _point_two;
    Point _point_three;

public:
    /* CONSTRUCTORS */
    Triangle(Point PointOne, Point PointTwo, Point PointThree);

    /* GETTER */
    Point getPointOne() const;
    Point getPointTwo() const;
    Point getPointThree() const;

    /* SETTER */
    void setPointOne(Point Point);
    void setPointTwo(Point Point);
    void setPointThree(Point Point);

    /* METHODS */
    float getBase() const;
    float getHauteur() const;
    float getSurface() const;
    std::string typeOfTriangle();
    void afficher();
};


#endif //TP2_TRIANGLE_H
