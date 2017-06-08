#include "Ruch.h"

Ruch::Ruch()
{
    this->przeszkoda=0;
    this->x=0;
    this->y=0;
}

void Ruch::przod()
{
    if (przeszkoda==0)
    {
        x++;
        losprzeszk();
    }
    else
        cout << "Przeszkoda" << endl;
}

void Ruch::losprzeszk()
{
    przeszkoda=rand()%2;
}

void Ruch::tyl()
{
    x--;
    losprzeszk();
}

void Ruch::lewo()
{
    y++;
    losprzeszk();
}

void Ruch::prawo()
{
    y--;
    losprzeszk();
}
