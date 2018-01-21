#ifndef POZIOM_H
#define POZIOM_H


class Poziom
{
    private:
     char sciana;
    public:
        Poziom(char bar);
        virtual void wyswietl()=0;

};

#endif // POZIOM_H
