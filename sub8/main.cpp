/*Fişierul numere.in  conține, pe prima linie,  un număr natural  n(2<n<100)
iar  pe linia a doua n numere cu cel mult 9 cifre fiecare.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural
și returnează valoarea 1 dacă x are prima cifră egală cu ultima cifră  și 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care citește numărul n și cele n numere din fișier  și
afişează pe ecran în ordine crescătoare toate numerele ce încep şi se termină cu aceeaşi cifră.
Numerele se afişează separate prin câte un spaţiu. Programul va utiliza apelui utile ale subprogramului sub.*/

#include <iostream>
#include <fstream>
using namespace std;
fstream f("numere.in");
int sub(int x)
{
    int c1,c2;
    c1=x%10;
    while(x)
    {
        c2=x%10;
        x/=10;
    }
    if(c1==c2)return 1;
    else return 0;
}
int main()
{
    int n,v[100],i=0,aux,j,k,x;
    f>>n;
    while(n)
    {
        f>>x;
        if(sub(x))
        {
            v[i]=x;
            i++;
        }
        n--;
    }
    for(j=0;j<i-1;j++)
        for(k=j+1;k<i;k++)
        {
            if(v[j]>v[k])
            {
                aux=v[j];
                v[j]=v[k];
                v[k]=aux;
            }
        }
    for(j=0;j<i;j++)
        cout<<v[j]<<" ";
    return 0;
}
