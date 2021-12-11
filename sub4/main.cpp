/*Fişierul numere.in  conține, pe prima linie,  un număr natural  n (2<n<100)
iar  pe linia a doua n numere cu cel mult 9 cifre fiecare.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr
natural și returnează valoarea 1 dacă x este un număr prim  și 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub
citește numărul n și cele n numere, apoi determină toate numerele prime dintre cele citite și le afișează,
separate prin câte un spațiu, pe ecran. Dacă niciunul dintre cele n numere nu este prim,
atunci programul va afișa pe ecran mesajul NU EXISTA.*/

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
    int n,i,sw=0,x;
    f>>n;
    for(i=0;i<n;i++)
    {
        f>>x;
        if(sub(x))
        {
            cout<<x<<' ';
            sw++;
        }
    }
    if(!sw)cout<<"NU EXISTA";
    return 0;
}
