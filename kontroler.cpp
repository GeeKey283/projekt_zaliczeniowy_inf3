#include "kontroler.h"

kontroler::kontroler()
{
    Ruch *asd2= new Ruch();
    ruchy.push_back(asd2);
    mojeczujniki *asd3= new mojeczujniki();
    this->wczytajczujniki(asd3);
}
void kontroler::wczytajczujniki(mojeczujniki* a)
{
    this->czujniki=a->Czujniki();
    this->ilosc=this->czujniki.size();
}


void kontroler::wypisz()
{
    for(int i=0;i<ilosc;i++)
        czujniki.at(i)->show();
    ruchy.at(0)->stan();
}

void kontroler::lewo()
{
    ruchy.at(0)->lewo();
    for(int i=0;i<ilosc;i++)
        czujniki.at(i)->show();
    ruchy.at(0)->stan();
}

void kontroler::prawo()
{
    ruchy.at(0)->prawo();
    for(int i=0;i<ilosc;i++)
        czujniki.at(i)->show();
    ruchy.at(0)->stan();
}

void kontroler::przod()
{
    ruchy.at(0)->przod();
    for(int i=0;i<ilosc;i++)
        czujniki.at(i)->show();
    ruchy.at(0)->stan();
}

void kontroler::tyl()
{
    ruchy.at(0)->tyl();
    for(int i=0;i<ilosc;i++)
        czujniki.at(i)->show();
    ruchy.at(0)->stan();
}
