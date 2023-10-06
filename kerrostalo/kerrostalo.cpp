
#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    p_eka = new Katutaso;
    p_toka = new Kerros;
    p_kolmas = new Kerros;
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritetaan koko kerrostalon kaikki asunnot"<<endl;
    p_eka->maaritaAsunnot();
    p_toka->maaritaAsunnot();
    p_kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo(){

}

void Kerrostalo::maaritaAsunnot()
{


}

double Kerrostalo::laskeKulutus(double a)
{
    double kulutus = p_eka->laskeKulutus(a)+p_toka->laskeKulutus(a)+p_kolmas->laskeKulutus(a);
    //cout<<"Kerrotalon kulutus ="<<kulutus<<endl;
    return kulutus;
}

