/*Fişierul date.in  conține, pe prima linie,  un număr natural  n (n<100),
iar pe fiecare din următoarele n linii este scris câte un cuvânt format  din cel mult 20 de caractere.
Se consideră subprogramul sub care primește prin intermediul parametrilor  a și b două cuvinte și
returnează valoarea 1 dacă cele două şiruri de caractere sunt unul anagrama celuilalt și valoarea 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program principal Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub  citește numărul n
și cele n cuvinte, apoi determină toate perechile de cuvinte care sunt unul anagrama celuilalt, câte o pereche pe o linie a ecranului.
Dacă nu există nicio astfel de pereche de cuvinte, atunci programul va afișa pe ecran mesajul NU EXISTA.*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("date.in");
int sub(char a[21],char b[21])
{
    int i,j,sw=0;
  /*if(strspn(a,b)==strlen(b)&&strlen(a)==strlen(b))
        return 1;
    else return 0;*/
    if(strlen(a)!=strlen(b))
        return 0;
    else{
           for(i=0;i<strlen(a);i++)
              for(j=0;j<strlen(b);j++)
                 {
                    if(a[i]==b[j])
                    {
                        sw++;
                        j=strlen(b);
                    }
                 }
            if(sw!=strlen(a))return 0;
            return 1;
        }
}
int main()
{
    int n,sw;
    char v[100][21];
    f>>n;
    for(int i=0;i<n;i++)
        f>>v[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            if(sub(v[i],v[j]))
            {
                cout<<v[i]<<' '<<v[j]<<'\n';
                sw++;
            }
        }
    if(!sw)cout<<"NU EXISTA";
    return 0;
}
