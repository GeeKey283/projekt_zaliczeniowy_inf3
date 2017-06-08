#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
#ifndef CZUJNIK_H
#define CZUJNIK_H


class Czujnik
{
    friend class kontroler;
    public:
        Czujnik(int zakresd,int zakresg,string polozenie,string jednostka);
        ~Czujnik();
        void show() { cout << polozenie << " " << zakresd + rand() % (zakresg - zakresd + 1) << " " << jednostka << " " << endl; }
    protected:
        int zakresg;
        int zakresd;
        string polozenie;
        string jednostka;
};

#endif // CZUJNIK_H
