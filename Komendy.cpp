#include "Komendy.h"

Komendy::Komendy()
{

}

Komendy::~Komendy()
{
    //dtor
}

void Komendy::Petla()
{
    kontroler *asd1= new kontroler();
    std::string tekst;
    std::string tekst1="end";
    std::string tekst2="komendy";
    std::string tekst3="odczyt";
    std::string tekst4="lewo";
    std::string tekst5="prawo";
    std::string tekst6="prosto";
    std::string tekst7="dotylu";
    do
    {
        cout << "Dostepne komendy: odczyt, lewo, prawo, prosto, dotylu, end" << endl;
        std::cin >> tekst;
        system("cls");
        if (tekst==tekst3)
            asd1->wypisz();
        else if (tekst==tekst4)
            asd1->lewo();
        else if (tekst==tekst5)
            asd1->prawo();
        else if (tekst==tekst6)
            asd1->przod();
        else if (tekst==tekst7)
            asd1->tyl();
        else if (tekst!=tekst1 && tekst!=tekst3 && tekst!=tekst4 && tekst!=tekst5 && tekst!=tekst6 && tekst!=tekst7)
            cout << "Nieznana komenda" << endl;
    }while(tekst!=tekst1);
}
