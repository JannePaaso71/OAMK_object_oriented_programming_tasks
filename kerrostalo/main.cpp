
#include "kerrostalo.h"
#include "katutaso.h"
#include <iostream>
using namespace std;


int main()
{

    Kerrostalo * p_olio;
    p_olio = new Kerrostalo;
    p_olio->maaritaAsunnot();
    p_olio->laskeKulutus(1);
    delete p_olio;

    return 0;
}
