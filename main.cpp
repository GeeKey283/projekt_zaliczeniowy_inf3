#include <cstdlib>
#include <iostream>
#include <vector>
#include "kontroler.h"
#include "Ruch.h"
#include "Komendy.h"
using namespace std;

int main()
{
    Komendy *system = new Komendy();
    system->Petla();
    return 0;
}
