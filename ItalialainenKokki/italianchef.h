
#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    string getName();
    void makePasta(int, int);

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
