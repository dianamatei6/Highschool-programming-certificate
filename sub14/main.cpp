/*Fişierul date.in conţine, pe prima linie, un șir de caractere format din litere mici ale alfabetului englez.
Se consideră subprogramul elimincar care primeşte prin intermediul parametrului s un şir cu cel mult 255 de
caractere şi prin parametrul c un caracter. Subprogramul va transforma șirul s eliminând din acesta toate aparițiile caracterului c.
Şirul de caractere s2 este “clona” şirului de caractere s1 dacă se poate obţine din s1 prin eliminarea tuturor
apariţiilor unei singure vocale. Se consideră vocală orice literă din mulţimea {a,e,i,o,u}.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului elimincar;
b)	Scrieţi programul C/C++ care citeşte din fisier un cuvânt format din cel mult 20 litere mici ale alfabetului englez şi
afişează pe ecran (dacă există), toate “clonele” acestui cuvânt, fiecare pe câte o linie a ecranului, utilizând apeluri
utile ale subprogramului  elimincar*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("date.in");
void elimincar(char s[21],char c)
{
    int i,j;
    for(i=0;i<strlen(s);i++)
        if(s[i]==c)
        {
           for(j=i;j<strlen(s)-1;j++)
               s[j]=s[j+1];
           s[strlen(s)-1]='\0';
        }
}
int main()
{
    char s[21],s1[21],voc[]={'a','e','i','o','u'};
    int i;
    f>>s;
    for(i=0;i<strlen(voc);i++)
        if(strchr(s,voc[i]))
        {
            strcpy(s1,s);
            elimincar(s1,voc[i]);
            cout<<s1<<'\n';
        }
    return 0;
}
