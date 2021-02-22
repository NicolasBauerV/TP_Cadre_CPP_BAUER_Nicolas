//
//  main.cpp
//  TP_Cadre_CPP_BAUER_Nicolas
//
//

#include <iostream>

#include "cadre.hpp"

using namespace std;

int main()
{
    Cadre c1;
    Cadre c2(5.0f, 5.0f, 10.0f, 10.0f);

    cout << c1;

    cout << endl;

    cout << "Surface du cadre:  " << c1.mathAir() << endl;

    cout << endl;

    cout << "Perimètre du cadre : " << c1.mathPerimetre() << endl;

    cout << endl;

    if (c1.isCarre())
    {
        cout << "C'est un carre !" << endl;
    }
    else
    {
        cout << "Ce n'est pas un carre !" << endl;
    }

    cout << endl;

    c1.drawCadre();

    cout << endl;

    c1.rotateCadre(90.0);
    
    cout << endl;
    
    // Partie Cadre 2
    
    cout << c2;

    cout << endl;

    cout << "Surface du cadre:  " << c2.mathAir() << endl;

    cout << endl;

    cout << "Perimètre du cadre : " << c2.mathPerimetre() << endl;

    cout << endl;

    if (c2.isCarre())
    {
        cout << "C'est un carre !" << endl;
    }
    else
    {
        cout << "Ce n'est pas un carre !" << endl;
    }

    cout << endl;

    c2.drawCadre();

    cout << endl;

    c2.rotateCadre(90.0);
}
