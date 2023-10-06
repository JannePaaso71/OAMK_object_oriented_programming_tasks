
#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "kerros.h"
#include "katutaso.h"
#include <iostream>

using namespace std;


class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);
    void maaritaAsunnot();

private:
    Katutaso * p_eka;
    Kerros * p_toka;
    Kerros *p_kolmas;
};

#endif // KERROSTALO_H
