#include <iostream>
#include <vector>
using namespace std;
#ifndef KONTROLER_H
#define KONTROLER_H
#include "Czujnik.h"
#include "Ruch.h"
#include "mojeczujniki.h"


class Czujnik;

class kontroler
{
    public:
        kontroler();
        void wczytajczujniki(mojeczujniki* a);
        void wypisz();
        void lewo();
        void prawo();
        void przod();
        void tyl();
    protected:
        vector<Czujnik*> czujniki;
        vector<Ruch*> ruchy;
        int ilosc=0;
    private:
};

#endif // KONTROLER_H
