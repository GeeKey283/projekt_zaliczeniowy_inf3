#include "mojeczujniki.h"



vector<Czujnik*> mojeczujniki::Czujniki()
{
    Czujnik *a = new Czujnik(10, 20, "noga", "stopni C");
    Czujnik *b = new Czujnik(10, 70, "glowa", "stopni C");
    Czujnik *c = new Czujnik(100, 2000, "noga", "Pa");
    vector<Czujnik*> asd;
    asd.push_back(a);
    asd.push_back(b);
    asd.push_back(c);
    return asd;
}
