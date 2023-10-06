
#include "katutaso.h"


Katutaso::Katutaso()
{
    p_as5 = new Asunto;
    p_as6 = new Asunto;
    cout<<"Katutaso luotu"<<endl;
}

Katutaso::~Katutaso()
{
    delete p_as5;
    delete p_as6;
}
void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    p_as5->maarita(100, 2);
    p_as6->maarita(100, 2);

    cout<<"Maaritellaan katutason kerrokselta perittyja asuntoja"<<endl;
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double a) {
    double kulutus = p_as5->laskeKulutus(a)+p_as6->laskeKulutus(a)
                     +Kerros::laskeKulutus(a);
        return kulutus;
}

