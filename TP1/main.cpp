#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cmath>


/* MANIPULATION DE NOMBRES */

int Addition(int x, int y)
{
    return x + y;
}

void Inversion(int &x, int &y)
{
    int temporaire = x;
    x = y;
    y = temporaire;
}

int Pointeurs(int x, int y, int z)
{
    int *px = &x;
    int *py = &y;

    return z = Addition(*px, *py);
}

int References(int x, int y, int z)
{
    int &rx = x;
    int &ry = y;

    return z = Addition(rx, ry);
}

int Tableau(int taille, bool ordre)
{
    std::vector<int> tableau(taille);

    for (int i = 0; i < taille; i++)
    {
        tableau[i] = rand();
    }

    bool test = true;

    while (test)
    {
        int verification = 0;

        if (ordre) {
            for (int i = 0; i < taille - 1 ; i++) {
                if (tableau[i] > tableau[i+1])
                {
                    Inversion(tableau[i], tableau[i+1]);
                    verification++;
                }
            }
        } else {
            for (int i = 0; i < taille - 1 ; i++) {
                if (tableau[i] < tableau[i+1])
                {
                    Inversion(tableau[i], tableau[i+1]);
                    verification++;
                }
            }
        }

        if (verification == 0)
        {
            test = !test;
        }
    }

    for (int i = 0; i < taille; i++)
    {
        std::cout << tableau[i] << std::endl;
    }

    while (!test)
    {
        int verification = 0;

        if (!ordre) {
            for (int i = 0; i < taille - 1 ; i++) {
                if (tableau[i] > tableau[i+1])
                {
                    Inversion(tableau[i], tableau[i+1]);
                    verification++;
                }
            }
        } else {
            for (int i = 0; i < taille - 1 ; i++) {
                if (tableau[i] < tableau[i+1])
                {
                    Inversion(tableau[i], tableau[i+1]);
                    verification++;
                }
            }
        }

        if (verification == 0)
        {
            test = !test;
        }
    }

    for (int i = 0; i < taille; i++)
    {
        std::cout << tableau[i] << std::endl;
    }
}

/* JEU DU TENNIS */

void ScoreCalc(int &x)
{
    switch (x) {
        case 0:
            x = 0;
            break;
        case 1:
            x = 15;
            break;
        case 2:
            x = 30;
            break;
        default:
            x = 40;
            break;
    }
}

void Score(int x, int y)
{
    int a = x;
    int b = y;

    ScoreCalc(x);
    ScoreCalc(y);

    if ( a > 3 || b > 3)
    {
        if (a-b >= 2)
            std::cout << "Le joueur A a gagné ! Score : " << x << "A à " << y << std::endl;
        else if (a-b <= -2)
            std::cout << "Le joueur B a gagné ! Score : " << y << "A à " << x << std::endl;
        else if (a-b == 1 )
        {
            std::string test;
            std::cout << std::endl << "Durant l'échange précédent, qu'elle était le status du joueur A ? A (avantage) ou N (neutre) : "; std::cin >> test;
            if (test == "A")
                std::cout << "Le joueur A a gagné ! Score : " << x << "A à " << y << std::endl;
            else
                std::cout << "Le match n'est pas terminé ! Tout arrive à point à qui sait attendre." << std::endl;
        } else if (a-b == -1){
            std::string test;
            std::cout << std::endl << "Durant l'échange précédent, qu'elle était le status du joueur B ? A (avantage) ou N (neutre) : "; std::cin >> test;
            if (test == "A")
                std::cout << "Le joueur B a gagné ! Score : " << y << "A à " << x << std::endl;
            else
                std::cout << "Le match n'est pas terminé ! Tout arrive à point à qui sait attendre." << std::endl;
        } else
            std::cout << "Le match n'est pas terminé ! Tout arrive à point à qui sait attendre." << std::endl;
    }
}


int main() {

    /* MANIPULATION DE NOMBRES */

    int x;
    std::string ordre;

    std::cout << std::endl << "Taille du tableau : "; std::cin >> x;
    std::cout << std::endl << "Ordre du tableau ASC | DESC : "; std::cin >> ordre;

    if (ordre == "ASC")
        Tableau(x, true);
    else
        Tableau(x, false);

    /* JEU DU TENNIS */

    int a, b;

    std::cout << std::endl << "Points marqué par le Joueur A : "; std::cin >> a;
    std::cout << std::endl << "Points marqué par le Joueur B : "; std::cin >> b;

    Score(a,b);

    /* Plus grand plus petit */

    std::string prenom, nom;

    std::cout << std::endl << "Votre prénom et nom : " << std::endl; std::cin >> prenom >> nom;

    prenom[0] = toupper(prenom[0]);
    for (int i = 0; i < nom.length(); i++)
        nom[i] = toupper(nom[i]);

    std::cout << std::endl << "Bonjour " << prenom << " " << nom;

    srand(time(0));
    int find = rand() % 1000;

    bool loop = true;
    int user_test;
    int count = 1;
    while (loop)
    {
        std::cout << std::endl << "Veuillez saisir une valeur entre 0 et 1000 : "; std:: cin >> user_test;

        if (user_test == find)
        {
            std::cout << std::endl << "Bien joué ! Vous avez gagné au " << count << "e essaie !";
            loop = !loop;
        }
        else if (user_test > find)
            std::cout << std::endl << "C'est moins !";
        else
            std::cout << std::endl << "C'est plus !";

        count++;
    }

    return 0;

}