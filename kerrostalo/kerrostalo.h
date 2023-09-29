
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
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
};

#endif // KERROSTALO_H
