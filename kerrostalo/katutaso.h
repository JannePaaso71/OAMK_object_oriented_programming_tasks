
#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"
#include "kerros.h"
#include <iostream>
using namespace std;

class Katutaso : public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    virtual void maaritaAsunnot() override;
    virtual double laskeKulutus(double) override;

    Asunto * p_as5;
    Asunto * p_as6;
};

#endif // KATUTASO_H
