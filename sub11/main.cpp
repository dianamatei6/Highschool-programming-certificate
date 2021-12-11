/*Fişierul date.in conţine, prima linie, un număr natural  n (n<100), iar pe fiecare din următoarele n
linii este scris câte un cuvânt format  din cel mult 20 de caractere, doar litere mici ale alfabetului englez.
Se consideră subprogramul sub cu doi parametri s și t, care primește prin parametrul s un șir cu maximum 20 de
caractere, litere mici ale alfabetului englez. Subprogramul returnează prin intermediul parametrului t șirul
obținut din s prin înlocuirea fiecărei vocale cu caracterul *. Se consideră vocale literele: a, e, i, o, u.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/care, folosind apeluri utile ale subprogramului sub, citește numărul n și cele n cuvinte,
apoi le modifică înlocuind fiecare vocală cu caracterul * . Programul afișează pe ecran cuvintele modificate, în linie, separate prin câte un spațiu.*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("date.in");
void sub(char s[21],char t[21])
{
    char voc[]="aeiou";
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(strchr(voc,s[i]))
            t[i]='*';
        else t[i]=s[i];
    }
}
int main()
{
    int n,i;
    char s[21],t[21];
    f>>n;
    for(i=0;i<n;i++)
    {
        f>>s;
        strcpy(t,s);
        sub(s,t);
        cout<<t<<' ';
    }
    return 0;
}
