/*Fişierul date.in  conține, pe prima linie,  un număr natural  n (n<100), iar pe fiecare din următoarele n linii este scris câte un cuvânt format  din cel mult 20de caractere.
Se consideră subprogramul S1 care primește prin intermediul singurului său parametru s un cuvânt
și verifică dacă acesta este palindrom. Un cuvânt care poate fi citit de la stânga la dreapta și
de la dreapta la stânga reprezintă același cuvânt este un palindrom, de exemplu: “rar”, “potop”.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului S1;
b)	Scrieţi un program principal Pascal/C/C++ care, folosind apeluri utile ale subprogramului S1
citește numărul n și cele n cuvinte, apoi determină toate cuvintele de tip palindrom și le afișează,
câte unul pe o linie a ecranului. Dacă niciunul dintre cele n cuvinte citite nu este de tip palindrom,
atunci programul va afișa pe ecran mesajul NU EXISTA.
*/
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
fstream f("date.in");
int S1(char s[21])
{
    char aux[21];
    strcpy(aux,s);
    strrev(aux);
    if(strcmp(s,aux)==0)
        return 1;
    else return 0;
    /*int l;
    l=strlen(s);
    i=0;j=l-1;
    while(i<j&&s[i]=s[j])
    {i++;j--;}
    if(i>=j)
      return 1;
    return 0;*/
}
int main()
{
    int n,sw=0,i;
    char cuv[21];
    f>>n;
    for(i=0;i<n;i++)
    {
        f>>cuv;
        if(S1(cuv)==1)
        {
            cout<<cuv<<'\n';
            sw++;
        }
    }
    if(sw==0)cout<<"NU EXISTA";
    return 0;
}
