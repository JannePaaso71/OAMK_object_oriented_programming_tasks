
#include "kerrostalo.h"
#include "katutaso.h"
#include <iostream>
using namespace std;


int main()
{

    Kerrostalo * p_olio = new Kerrostalo;
    cout<<"kerrostalon kulutus "<<p_olio->laskeKulutus(1)<<endl;

    delete p_olio;

    return 0;
}
