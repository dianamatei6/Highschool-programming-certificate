/*Fişierul numere.in  conține, pe prima linie,  un număr natural par  n, cu cel mult 9 cifre.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural
și returnează valoarea 1 dacă x este un număr prim  și 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub
citește numărul n par (n>2), apoi determină și afișează o pereche de numere prime (a,b)
(a<n, n<b) cu  proprietatea că diferența b-a este minimă.*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
fstream f("numere.in");
int sub(int x)
{
    if(x==1||x==0) return 0;
    else if(x==2)return 1;
         else
            if(x%2==0) return 0;
            else {
                  int  d,rad;
                  d=3;rad=sqrt(x);
                  while(d<=rad)
                  {
                    if(x%d==0)return 0;
                    d++;
                  }
                  return 1;
                 }
}
int main()
{
    int n,x=2,a,sw=1;
    f>>n;
    while(x<n)
    {
        if(sub(x))
            a=x;
        x++;
    }
    x=n;
    while(sw)
    {
        x++;
        if(sub(x))
          sw=0;
    }
    cout<<'('<<a<<','<<x<<')';
    return 0;
}
