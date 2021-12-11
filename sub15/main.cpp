/*�n fi�ierul numere.in se afl� pe prima linie maxim un milion de numere naturale de cel mult 2 cifre fiecare.
Scrie�i programul C/C++ care cite�te numerele din fi�ierul numere.in �i determin� �i afi�eaz� pe ecran care dintre
numerele citite apare de cele mai multe ori �n fi�ier.
Se va utiliza un algoritm eficient din punct de vedere al spa�iului de memorie utilizat �i al timpului de executare.*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.in");
int v[99],x,i,m;
int main()
{
    while(f>>x)
        v[x]++;
    for(i=0;i<=99;i++)
        if(m<v[i])
          {m=v[i];x=i;}
    cout<<x;
    return 0;
}
