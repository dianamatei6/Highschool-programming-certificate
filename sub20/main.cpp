/*Fişierul date.in conţine pe prima linie un text format din cel mult 250 de caractere,
scris pe o singură linie. Cuvintele din text sunt separate prin câte un spaţiu, iar fiecare cuvânt este
format din cel mult 20 caractere, doar literele mici ale alfabetului englez. Fișierul conține pe a doua
linie un cuvânt format din cel mult 20 de caractere doar literele mici ale alfabetului englez.
Se consideră subprogramul Sub care primește prin intermediul celor doi parametri t1 și t2 două cuvinte
formate fiecare din cel puţin  două caractere şi returnează valoarea 1 dacă  cuvântul primit prin parametrul
t1 reprezintă un prefix pentru cuvântul primit prin parametrul t2, sau  valoarea 0  în caz contrar;
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++, care citeşte din fişierul date.in în variabila s textul aflat pe prima
linie și în variabila x cuvântul aflat pe cea de a doua linie din fișier și folosind apeluri utile ale subprogramului
S1 şi afișează pe ecran fiecare cuvânt din text care are ca prefix cuvântul x.*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("date.in");
int Sub(char t1[21],char t2[21])
{
    int i;
    for(i=0;i<strlen(t1);i++)
        if(t1[i]!=t2[i])
            return 0;
    return 1;
}
int main()
{
    char s[251],x[21],*p;
    f.getline(s,251);
    f>>x;
    p=strtok(s," ");
    while(p)
    {
        if(Sub(x,p))
            cout<<p<<' ';
        p=strtok(NULL," ");
    }
    return 0;
}
