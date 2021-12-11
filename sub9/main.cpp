/*Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural cu cel mult 9
cifre și returnează valoarea numărul obținut din x  prin permutarea circulara a cifrelor sale cu o poziție spre stânga.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care citește de la tastatură un număr natural n și scrie în fișierul numere.out
toate numerele ce se pot obține din n prin permutări circulare la stânga ale cifrelor lui n.
Numerele se vor scrie in fișier separate prin câte un spaţiu. Programul va utiliza apelui utile ale subprogramului sub.*/

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ofstream g("numere.out");
int sub(int &x)
{
    int y=x,x1,p,c=0;
    while(y)
    {
        y/=10;
        c++;
    }
    p=pow(10,c-1);
    x=((x%p)*10)+(x/p);
    return x;
}
int main()
{
    int n,i,n1,c=0;
    cin>>n;
    n1=n;
    while(n1)
    {
        c++;
        n1/=10;
    }
    for(i=1;i<c;i++)
        g<<sub(n)<<' ';
    return 0;
}
