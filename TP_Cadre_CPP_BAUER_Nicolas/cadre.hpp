//
//  Cadre.hpp
//  TP_Cadre_CPP_BAUER_Nicolas
//
//

#ifndef Cadre_hpp
#define Cadre_hpp

#include <iostream>

using namespace std;

class Cadre
{
private:
    float m_X;
    float m_Y;

    float m_Height;
    float m_Width;

    char m_Char;


public:
    // Constructeur
    Cadre() {
        this->m_X        = 15.0f;
        this->m_Y        = 7.0f;

        this->m_Height   = 3.0f;
        this->m_Width    = this->m_Height * 2;

        this->m_Char     = 'O';
    };

    Cadre(float x, float y, float Height, float Width) {
        this->m_X       = x;
        this->m_Y       = y;

        this->m_Height  = Height;
        this->m_Width   = Width;

        this->m_Char    = 'O';
    };

    // Destructeur
    ~Cadre() {
        
    };


    // Fonctions membres
    void showCoord() const {
        cout << "Position en X : " << this->m_X << endl;
        cout << "Position en Y : " << this->m_Y << endl;

        cout << "Hauteur : " << this->m_Height << endl;
        cout << "Largeur : " << this->m_Width << endl;
    };

    float mathAir() const {
        return this->m_Height * this->m_Width;
    }

    float mathPerimetre() const {
        return this->m_Height * 2 + this->m_Width * 2;
    }

    bool isCarre() const {
        return this->m_Height == this->m_Width;
    }

    void drawCadre() const {
        for (int i = 0; i < this->m_Height; i++) {
            
            for (int j = 0; j < this->m_Width; j++) {
                if (i == 0 || i == this->m_Height-1) {
                    cout << this->m_Char << " ";
                }
                else if (j == 0 || j == this->m_Width-1) {
                    cout << this->m_Char << " ";
                }
                else {
                    cout << "  ";
                }
                // Fin 2e boucle
            }
            cout << endl;
            //Fin 1ère boucle
        }
    }

    void rotateCadre(float angle) {
        const float PI = 3.1415f;

        float x = this->m_X + this->m_Width;
        float y = this->m_Y;

        x = cos(angle * (PI / 180)) * (this->m_X - x) - sin(angle * (PI / 180)) * (this->m_Y - y) + this->m_X;
        y = sin(angle * (PI / 180)) * (this->m_X - x) - cos(angle * (PI / 180)) * (this->m_Y - y) + this->m_Y;

        cout << "valeur de x : " << x << " " << "valeur de y : " << y << endl;

        float x_2 = this->m_X;
        float y_2 = this->m_Y + this->m_Height;
        
        x_2 = cos(angle * (PI / 180)) * (this->m_X - x_2) - sin(angle * (PI / 180)) * (this->m_Y - y_2) + this->m_X;
        y_2 = sin(angle * (PI / 180)) * (this->m_X - x_2) - cos(angle * (PI / 180)) * (this->m_Y - y_2) + this->m_Y;

        cout << "valeur de x_2 : " << x_2 << " " << "valeur de y_2 : " << y_2 << endl;

        float x_3 = this->m_X + this->m_Width;
        float y_3 = this->m_Y + this->m_Height;

        x_3 = cos(angle * (PI / 180)) * (this->m_X - x_3) - sin(angle * (PI / 180)) * (this->m_Y - y_3) + this->m_X;
        y_3 = sin(angle * (PI / 180)) * (this->m_X - x_3) - cos(angle * (PI / 180)) * (this->m_Y - y_3) + this->m_Y;

        cout << "valeur de x_3 : " << x_3 << " " << "valeur de y_3 : " << y_3 << endl;
    }
    

    // Fonction amie
    friend ostream& operator<<(ostream& os, const Cadre& C) {
        os << "coord X : " << C.getX() << ", coord Y : " << C.getY() << ", coord Hauteur : " << C.getHeight() << ", coord Largeur : " << C.getWidth() << endl;
            return os;
    }


    // Setters
    void setX(float x) {
        this->m_X = x;
    }

    void setY(float y) {
        this->m_Y = y;
    }

    void setHeight(float height) {
        this->m_Height = height;
    }

    void setWidth(float width) {
        this->m_Width = width;
    }

    // Getters
    float getX() const {
        return this->m_X;
    }

    float getY() const {
        return this->m_Y;
    }

    float getHeight() const {
        return this->m_Height;
    }

    float getWidth() const {
        return this->m_Width;
    }
};

#endif /* Cadre_hpp */
