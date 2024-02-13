#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Circulo
{
private:
    float radio;

public:
    int x, y;

    Circulo();
    Circulo(int x2, int y2, float r);
    Circulo(int x2, int y2);

    float getRadio();
    void setRadio(float r);
    float getArea();
    void intersects(Circulo circulo);
};

int main()
{

    Circulo c1;
    Circulo c2{3, 4};
    Circulo c3{10, 12, 5};

    c1.x = 1;
    c1.y = 2;
    c1.setRadio(2.5);
    c2.setRadio(1.2);

    cout << "circulo 1 " << c1.getArea() << endl
         << "circulo 2 " << c2.getArea() << endl
         << "circulo 3 " << c3.getArea() << endl;

    c1.intersects(c2);
    c1.intersects(c3);
    c2.intersects(c3);
    return 0;
}

Circulo::Circulo()
{
    radio = 0.0;
    x = 0;
    y = 0;
}

Circulo::Circulo(int x2, int y2)
{
    radio = 0.0;
    x = x2;
    y = y2;
}

Circulo::Circulo(int x2, int y2, float r)
{
    if (r >= 0)
    {
        radio = r;
    }
    else
    {
        radio = 0;
    }

    x = x2;
    y = y2;
}
float Circulo::getRadio()
{
    return radio;
}

void Circulo::setRadio(float r)
{
    if (r >= 0)
    {
        radio = r;
    }
    else
    {
        radio = 0;
    }
}

float Circulo::getArea()
{
    return 3.14 * (radio * radio);
}

void Circulo::intersects(Circulo circulo)
{
    float dist;
    dist = sqrt(pow(circulo.x - x, 2) + pow(circulo.y - y, 2));
    if (dist < circulo.radio + radio)
    {
        cout << "tus circulos se intersectan " << endl;
    }
    else
    {
        cout << "tus circulos no se intersectan " << endl;
    }
}