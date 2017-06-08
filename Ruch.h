#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
#ifndef RUCH_H
#define RUCH_H


class Ruch
{
    public:
        Ruch();
        void przod();
        void tyl();
        void lewo();
        void prawo();
        void losprzeszk();
        void stan(){cout << "Przeszkoda:" << przeszkoda << " x:" << x << " y:" << y <<  endl;};
    protected:
        int przeszkoda;
        int x;
        int y;
    private:
};

#endif // RUCH_H
