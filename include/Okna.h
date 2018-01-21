#ifndef OKNA_H
#define OKNA_H
#include "Poziom.h"


class Okna
:Poziom
{
private:
    bool ozdobne;
    public:
        Okna(char sciana, bool oZdobne);
        virtual void wyswietl();

};

#endif // OKNA_H
