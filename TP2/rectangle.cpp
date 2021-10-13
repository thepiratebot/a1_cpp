//
// Created by Brice - DevOps on 29/09/2021.
//


    /* CONSTRUCTORS */
Rectangle::Rectangle(int Longueur, int Largeur)
{
    _longueur = Longueur;
    _largeur = Largeur;
}

Rectangle::Rectangle(int Longueur, int Largeur, Point Point)
{
    _longueur = Longueur;
    _largeur = Largeur;
    _sup_gauche = Point;
}

    /* GETTER */
int Rectangle::getLongueur() const
{
    return _longueur;
}

int Rectangle::getLargeur() const
{
    return _largeur;
}

Point Rectangle::getSupGauche() const
{
    return _sup_gauche;
}

    /* SETTER */
void Rectangle::setLongueur(int Longueur)
{
    _longueur = Longueur;
}

void Rectangle::setLargeur(int Largeur)
{
    _largeur = Largeur;
}

void Rectangle::setSupGauche(Point Point)
{
    _sup_gauche = Point;
}

    /* METHODS */
float Rectangle::getPerimetre() const
{
    return getLongueur() * 2 + getLargeur() * 2;
}

float Rectangle::getSurface() const
{
    return getLongueur() * getLargeur();
}

void Rectangle::afficher()
{
    std::cout << "*** GETTER ***" << std::endl;
    std::cout << "getLongueur() - Retourne la longueur : " << getLongueur() << std::endl;
    std::cout << "getLargeur() - Retourne la largeur : " << getLargeur() << std::endl;
    std::cout << "getSupGauche() - Retourne une structure de type Point (coin supérieur gauche) (x;y) : (" << getSupGauche().x << ";" << getSupGauche().y << ")" << std::endl;

    std::cout << "*** SETTER ***" << std::endl;
    std::cout << "setLongueur(int Longueur) - Permet d'assigner une longueur" << std::endl;
    std::cout << "setLargeur(int Largeur) - Permet d'assigner une largeur" << std::endl;
    std::cout << "setSupGauche(Point Point) - Permet d'assigner une structure de type Point" << std::endl;

    std::cout << "*** METHODS ***" << std::endl;
    std::cout << "getPerimetre() - Permet d'obtenir le périmètre : " << getPerimetre() << std::endl;
    std::cout << "getSurface() - Permet d'obtenir la surface : " << getSurface() << std::endl;
    std::cout << "afficher() - Permet d'afficher ce texte" << std::endl;
}


