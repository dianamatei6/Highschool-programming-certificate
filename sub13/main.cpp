/*Fişierul date.in conţine pe prima linie un șir de caractere format din litere mici ale alfabetului englez, cifre  și spații.
Se consideră subprogramul elimincar care primeşte prin intermediul parametrului s un şir cu cel mult 255 de caractere şi prin
parametrul c un caracter. Subprogramul va transforma șirul s eliminând din acesta toate aparițiile caracterului c.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului elimincar;
b)	Scrieţi un program Pascal/C/care, citește din fișier șirul de caractere și afișează pe ecran șirul din care au fost
eliminate toate vocalele, utilizând apeluri utile ale subprogramului elimincar.*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("date.in");
void elimincar(char s[256],char c)
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
    char s[256],voc[]={'a','e','i','o','u'};
    int i;
    f.getline(s,256);
    for(i=0;i<strlen(voc);i++)
        if(strchr(s,voc[i]))
            elimincar(s,voc[i]);
    cout<<s;
    return 0;
}
