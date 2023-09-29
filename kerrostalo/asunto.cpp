
#include "asunto.h"


Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int pintaAla, int henkiloita)
{
    neliot = pintaAla;
    asukasMaara = henkiloita;
    cout<<"Asunto maaritetty asukkaita= "<<henkiloita<<" neliota= "
         <<pintaAla<<endl;
}

double Asunto::laskeKulutus(double hinta)
{
    double kulutus = hinta*neliot*asukasMaara;

    return kulutus;
}

