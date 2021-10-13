//
// Created by Brice - DevOps on 12/10/2021.
//

#include <cmath>

    /* CONSTRUCTORS */
Cercle::Cercle(int diametre, Point centre)
{
    _diametre = diametre;
    _centre = centre;
}

    /* GETTER */
int Cercle::getDiametre() const
{
    return _diametre;
}

Point Cercle::getCentre() const
{
    return _centre;
}

    /* SETTER */
void Cercle::setDiametre(int Diametre)
{
    _diametre = Diametre;
}

void Cercle::setCentre(Point Centre)
{
    _centre = Centre;
}

    /* METHODS */
float Cercle::getPerimetre() const
{
    return M_PI * _diametre;
}

float Cercle::getSurface() const
{
    return (_diametre / 2) * (_diametre / 2) * M_PI;
}

bool Cercle::onPerimeter(Point Point)
{
    return pow(Point.x - Point.x, 2) + pow(Point.y - Point.y, 2) == pow(_diametre / 2, 2);
}

bool Cercle::insideCercle(Point Point)
{
    return pow(Point.x - _centre.x, 2) + pow(Point.y - _centre.y, 2) < pow(_diametre / 2, 2);
}

void Cercle::afficher()
{
    std::cout << "##### CERCLE #####" << std::endl;

    std::cout << "*** CONSTRUCTORS ***" << std::endl;
    std::cout << "Cercle(int diametre, Point centre) - Constructeur" << std::endl;

    std::cout << "*** GETTER ***" << std::endl;
    std::cout << "getDiametre() - Retourne le diamètre : " << getDiametre() << std::endl;
    std::cout << "getCentre() - Retourne une structure de type Point (centre du cercle) (x;y) : (" << getCentre().x << ";" << getCentre().y << ")" << std::endl;

    std::cout << "*** SETTER ***" << std::endl;
    std::cout << "setDiametre(int Diametre) - Permet d'assigner le diamètre" << std::endl;

    std::cout << "*** METHODES ***" << std::endl;
    std::cout << "getPerimetre() - Retourne le périmètre : " << getPerimetre() << std::endl;
    std::cout << "getSurface() - Retourne la surface : " << getSurface() << std::endl;
    std::cout << "onPerimeter(Point Point) - Retourne un booléen si le point donné est sur le périmètre" << std::endl;
    std::cout << "insideCercle(Point Point) - Retourne un booléen si le point donné dans le cercle" << std::endl;
    std::cout << "afficher() - Permet d'afficher ce texte" << std::endl;
}