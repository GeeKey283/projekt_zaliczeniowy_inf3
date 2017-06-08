#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include "kontroler.h"
#include "Ruch.h"
using namespace std;
#ifndef KOMENDY_H
#define KOMENDY_H


class Komendy
{
    public:
        Komendy();
        virtual ~Komendy();
        void Petla();
    protected:
        vector<string> Komenda;
        int ilosc;
    private:
};

#endif // KOMENDY_H
