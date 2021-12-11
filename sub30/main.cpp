/*Fişierul date.in conţine cel mult 100 de numere naturale, fiecare număr fiind format din cel 9 cifre,
numerele fiind scrise pe o singură linie, separate prin câte un spaţiu.
Se consideră subprogramele:
•	prim cu un singur parametru, x, prin intermediul căruia primeşte un număr natural nenul format din
cel mult patru cifre şi care returnează valoarea 1 dacă valoarea parametrului x este un număr prim și 0 în caz contrar.
•	Sort cu doi parametri, care primeşte prin intermediul parametrilor:
-	n, un număr natural, 0<n100;
-	v,un şir de n numere naturale, fiecare număr având cel mult patru cifre.
      Subprogramul furnizează prin parametrul v şirul ordonat crescător.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramelor prim și sort.
b)	Scrieţi un program Pascal/C/C++, care citeşte din fişierul date.in toate numerele şi, folosind apeluri utile ale
 subprogramelor prim și sort, scrie în fişierul date.out, pe o singură linie, separate printr-un spaţiu, două numere naturale
 reprezentând cel mai mic număr prim, respectiv cel mai mare număr prim din fişierul date.in. Dacă niciun număr din fişierul
 date.in nu este număr prim, atunci pe prima linie a fişierului date.out se va scrie mesajul NU EXISTA.*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int prim(int x)
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
void sort(int n, int v[100])
{
    int i,j,aux;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}
int main()
{
    int n=0,v[100],x;
    while(f>>x)
    {
        if(prim(x))
        {
            v[n]=x;
            n++;
        }
    }
    sort(n,v);
    if(n==0)g<<"NU EXISTA";
    else if(n==1) g<<v[0];
         else g<<v[0]<<' '<<v[n-1];
    return 0;
}
