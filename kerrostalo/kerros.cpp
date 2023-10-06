
#include "kerros.h"


Kerros::Kerros()
{
    p_as1 = new Asunto;
    p_as2 = new Asunto;
    p_as3 = new Asunto;
    p_as4 = new Asunto;
    cout<<"Kerros luotu"<<endl;
}

Kerros::~Kerros()
{
    delete p_as1;
    delete p_as2;
    delete p_as3;
    delete p_as4;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    p_as1->maarita(100, 2);
    p_as2->maarita(100, 2);
    p_as3->maarita(100, 2);
    p_as4->maarita(100, 2);

}

double Kerros::laskeKulutus(double a)
{
    double kulutus = p_as1->laskeKulutus(a)+p_as2->laskeKulutus(a)
                     +p_as3->laskeKulutus(a)+p_as4->laskeKulutus(a);
    return kulutus;
}

