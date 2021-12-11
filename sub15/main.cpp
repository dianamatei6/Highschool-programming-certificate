/*În fiºierul numere.in se aflã pe prima linie maxim un milion de numere naturale de cel mult 2 cifre fiecare.
Scrieþi programul C/C++ care citeºte numerele din fiºierul numere.in ºi determinã ºi afiºeazã pe ecran care dintre
numerele citite apare de cele mai multe ori în fiºier.
Se va utiliza un algoritm eficient din punct de vedere al spaþiului de memorie utilizat ºi al timpului de executare.*/
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
