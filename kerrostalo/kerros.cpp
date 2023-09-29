
#include "kerros.h"


Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
}

Kerros::~Kerros()
{

}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1.maarita(100, 2);
    as2.maarita(100, 2);
    as3.maarita(100, 2);
    as4.maarita(100, 2);

}

double Kerros::laskeKulutus(double a)
{
    double kulutus = as1.laskeKulutus(a)+as2.laskeKulutus(a)
                     +as3.laskeKulutus(a)+as4.laskeKulutus(a);
    return kulutus;
}

