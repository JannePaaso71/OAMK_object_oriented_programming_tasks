
#ifndef KERROS_H
#define KERROS_H

#include <iostream>
using namespace std;
#include "asunto.h"


class Kerros
{
public:
    Kerros();
    ~Kerros();
    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double);

    Asunto * p_as1;
    Asunto * p_as2;
    Asunto * p_as3;
    Asunto * p_as4;


};

#endif // KERROS_H
