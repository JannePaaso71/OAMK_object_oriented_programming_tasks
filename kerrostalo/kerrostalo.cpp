
#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
}

Kerrostalo::~Kerrostalo(){

}

void Kerrostalo::maaritaAsunnot()
{
    cout<<"Maaritetaan koko kerrostalon kaikki asunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double a)
{
    double kulutus = eka.laskeKulutus(a)+toka.laskeKulutus(a)+kolmas.laskeKulutus(a);
    cout<<"Kerrotalon kulutus ="<<kulutus<<endl;
    return kulutus;
}

