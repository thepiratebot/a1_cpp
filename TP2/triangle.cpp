//
// Created by Brice - DevOps on 12/10/2021.
//


#include <cmath>
#include <iostream>

    /* CONSTRUCTORS */
Triangle::Triangle(Point PointOne, Point PointTwo, Point PointThree)
{
    _point_one = PointOne;
    _point_two = PointTwo;
    _point_three = PointThree;
}

    /* GETTER */
Point Triangle::getPointOne() const
{
    return _point_one;
}

Point Triangle::getPointTwo() const
{
    return _point_two;
}

Point Triangle::getPointThree() const
{
    return _point_three;
}

    /* SETTER */
void Triangle::setPointOne(Point Point)
{
    _point_one = Point;
}

void Triangle::setPointTwo(Point Point)
{
    _point_two = Point;
}

void Triangle::setPointThree(Point Point)
{
    _point_three = Point;
}

    /* METHODS */
float Triangle::getBase() const
{
    float _distance_one_two = sqrt(pow(_point_two.x - _point_one.x, 2) + pow(_point_two.y - _point_one.y , 2));
    float _distance_one_three = sqrt(pow(_point_three.x - _point_one.x, 2) + pow(_point_three.y - _point_one.y , 2));
    float _distance_two_three = sqrt(pow(_point_three.x - _point_two.x, 2) + pow(_point_three.y - _point_two.y , 2));

    if (_distance_one_two >= _distance_one_three)
    {
        if (_distance_one_two >= _distance_two_three)
        {
            return _distance_one_two;
        } else
        {
            return _distance_two_three;
        }
    } else
    {
        if(_distance_one_three >= _distance_two_three)
        {
            return _distance_one_three;
        } else
        {
            return _distance_two_three;
        }
    }
}

float Triangle::getHauteur() const
{
    return (getSurface() * 2) / getBase();
}

float Triangle::getSurface() const
{
    return ((_point_two.x - _point_one.x) * (_point_three.y - _point_one.y) - (_point_three.x - _point_one.x) * (_point_two.y - _point_one.y)) * 0.5;
}

std::string Triangle::typeOfTriangle()
{
    float _distance_one_two = sqrt(pow(_point_two.x - _point_one.x, 2) + pow(_point_two.y - _point_one.y , 2));
    float _distance_one_three = sqrt(pow(_point_three.x - _point_one.x, 2) + pow(_point_three.y - _point_one.y , 2));
    float _distance_two_three = sqrt(pow(_point_three.x - _point_two.x, 2) + pow(_point_three.y - _point_two.y , 2));

    if (_distance_one_two == _distance_one_three == _distance_two_three)
    {
        return "Il s'agit d'un triangle équilatéral.";
    } else if ((_distance_one_two == _distance_one_three) || (_distance_one_two == _distance_two_three) || (_distance_one_three == _distance_two_three))
    {
        return "Il s'agit d'un triangle isocèle.";
    } else if ((pow(_distance_one_two, 2) + pow(_distance_one_three, 2) == pow(_distance_two_three, 2)) || (pow(_distance_two_three, 2) + pow(_distance_one_two, 2) == pow(_distance_one_three, 2)) || (pow(_distance_one_three, 2) + pow(_distance_two_three, 2) == pow(_distance_one_two, 2)))
    {
        return "Il s'agit d'un triangle rectangle.";
    } else
    {
        return "Il s'agit d'un triangle quelconque.";
    }
}

void Triangle::afficher()
{
    std::cout << "*** GETTER ***" << std::endl;
    std::cout << "getPointOne() - Retourne une structure de type Point (point n°1) (x;y) : " << getPointOne().x << ";" << getPointOne().y << ")" << std::endl;
    std::cout << "getPointTwo() - Retourne une structure de type Point (point n°2) (x;y) : " << getPointTwo().x << ";" << getPointTwo().y << ")" << std::endl;
    std::cout << "getPointThree() - Retourne une structure de type Point (point n°3) (x;y) : " << getPointThree().x << ";" << getPointThree().y << ")" << std::endl;

    std::cout << "*** SETTER ***" << std::endl;
    std::cout << "setPointOne(Point Point) - Permet d'assigner une structure de type Point (point n°1)" << std::endl;
    std::cout << "setPointTwo(Point Point) - Permet d'assigner une structure de type Point (point n°2)" << std::endl;
    std::cout << "setPointThree(Point Point) - Permet d'assigner une structure de type Point (point n°3)" << std::endl;

    std::cout << "*** METHODES ***" << std::endl;
    std::cout << "getBase() - Retourne la longueur de la base : " << getBase() << std::endl;
    std::cout << "getHauteur() - Retourne la hauteur : " << getHauteur() << std::endl;
    std::cout << "getSurface() - Retourne l'aire du triangle : " << getSurface() << std::endl;
    std::cout << "typeOfTriangle() - Retourne un string désignant le type de triangle : " << typeOfTriangle() << std::endl;
    std::cout << "afficher() - Permet d'afficher ce texte" << std::endl;
}