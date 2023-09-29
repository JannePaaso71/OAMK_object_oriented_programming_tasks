
#include "katutaso.h"


Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;
}

Katutaso::~Katutaso()
{

}
void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as5.maarita(100, 2);
    as6.maarita(100, 2);

    cout<<"Maaritellaan katutason kerrokselta perittyja asuntoja"<<endl;
    this->Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double a) {
    double kulutus = as5.laskeKulutus(a)+as5.laskeKulutus(a)
                     +Kerros::laskeKulutus(a);
        return kulutus;
}

