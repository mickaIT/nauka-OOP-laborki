#ifndef BLOK_H
#define BLOK_H

#include<vector>
#include "Poziom.h"

using namespace std;

class Blok
{
    public:
        Blok();
        ~Blok();
        void dodajPoziom(Poziom* poziom);
        void wyswietlPoziomy();
        vector<Poziom*> poziomy;
};

#endif // BLOK_H
