/*�n fi�ierul text numere.in sunt cel mult 9998 de numere naturale nenule, distincte.
Scrie�i un program C/C++ eficient din punct de vedere al timpului de execu�ie, care s� scrie �n fi�ierul numere.out,
pe o linie, �n ordine descresc�toare,
separate prin c�te un spa�iu, numerele naturale nunule, de cel mult 4 cifre, care nu apar �n fi�ierul numere.in.*/

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
