/*Fişierul date.in conţine pe prima linie un text format din cel mult 250 de caractere,
scris pe o singură linie. Cuvintele din text sunt separate prin câte un spaţiu, iar fiecare
cuvânt este format din cel mult 20 caractere, doar literele mici ale alfabetului englez.
Se consideră subprogramul:Sub care primeste prin intermediul singurului său parametru t un
cuvânt din text și înlocuiește prima, respectiv ultima literă, cu litera mare corespunzătoare
şi furnizează prin intermediul parametrului t cuvântul obţinut. De exemplu, pentru cuvântul intensitate
primit prin intermediul parametrului t, subprogramul returnează cuvântul: IntensitatE.
Cerinţe:
a) Scrieţi definiţia completă a subprogramului Sub;
b)Scrieţi un program Pascal/C/C++, care citeşte din fişierul date.in în variabila s textul aflat pe prima
linie și folosind apeluri utile ale subprogramului Sub modifică textul memorat în variabila s prin transformarea
în literă mare a primei și ultimei litere din fiecare cuvânt dint text. Programul scrie noul text în fişierul date.out pe o singură linie.*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
void Sub(char t[21])
{
    t[0]=t[0]-32;
    t[strlen(t)-1]-=32;
}
int main()
{
    char s[251],*p,s1[251];
    f.get(s,251);
    p=strtok(s," ");
    while(p)
    {
        Sub(p);
        strcat(s1,p);
        strcat(s1," ");
        p=strtok(NULL," ");
    }
    strcpy(s,s1);
    g<<s;
    return 0;
}
