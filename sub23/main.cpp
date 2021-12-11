/*Fişierul date.in conţine pe prima linie un cuvânt format din cel mult 50 de caractere, doar litere mici ale alfabetului englez.
Se consideră subprogramul Sub care primeste prin intermediul singurului său parametrul s un cuvânt (format din cel puţin 2 litere)
și returnează cuvântul obţinut prin dublarea fiecărei consoane din cuvântul s. De exemplu, pentru cuvântul abac
(primit prin intermediul parametrului s) subprogramul returnează cuvântul: abbacc.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului Sub;
b)	Scrieţi un program Pascal/C/C++, care folosind apeluri utile ale subprogramului Sub, citeşte textul din
fişierul date.in și scrie pe prima linie a fișierului date.out cuvântul obţinut prin dublarea fiecărei consoane din cuvântul s.*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
void Sub(char s[101])
{
    char voc[]="aeiou",x[101];
    int i,j;
    for(i=0;i<strlen(s);i++)
        if(!strchr(voc,s[i]))
        {
            strcpy(x,s+i);
            strcpy(s+i+1,x);
            i++;
        }
}
int main()
{
    char s[101];
    f>>s;
    Sub(s);
    g<<s;
    return 0;
}
