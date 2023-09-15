#include <iostream>
#include "italianchef.h"
#include "chef.h"



ItalianChef::ItalianChef(string name):Chef(name)
{

    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}

string ItalianChef::getName()
{

}

void ItalianChef::makePasta(int a, int b)
{
    cout<<"Chef "<<name<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<name<<" users jauhot = "<<b<<endl;
    cout<<"Chef "<<name<<" users vesi = "<<a<<endl;
}
/*
ItalianChef::ItalianChef(string name,int  l, int kg):Chef(name)
{
    cout<<"Capocuoco italiano "<< name << " costruttore"<<endl;
    jauhot= kg;
    vesi =l;
}
*/
