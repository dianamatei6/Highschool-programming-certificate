/*În fiºierul text numere.in sunt cel mult 9998 de numere naturale nenule, distincte.
Scrieþi un program C/C++ eficient din punct de vedere al timpului de execuþie, care sã scrie în fiºierul numere.out,
pe o linie, în ordine descrescãtoare,
separate prin câte un spaþiu, numerele naturale nunule, de cel mult 4 cifre, care nu apar în fiºierul numere.in.*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.in");
ofstream g("numere.out");
int x,v[9999];
int main()
{
    while(f>>x)
        v[x]++;
    x=9999;
    while(x)
    {
        if(!v[x])
            g<<x<<' ';
        x--;
    }
    return 0;
}
