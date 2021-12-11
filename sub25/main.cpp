/*Fişierul date.in conţine două linii. Pe prima linie a fişierului este scris un număr natural  n (1≤n≤100),
iar pe  următoarele n linii sunt scrise câte n numere naturale, formate fiecare din cel mult 9 cifre, separate
prin câte un spaţiu, reprezentând elementele unei matrice A cu n linii și n coloane.
Se consideră subprogramul S cu doi parametri, care primeşte, prin intermediul parametrilor:
-	a,un tablou bidimensional format din cel mult 30 de linii și cel mult 30 de coloane cu elemente numere întregi;
-	n,numărul efectiv de linii și de coloane ale matricei a.
Subprogramul returnează suma elementelor situate pe rama matricei, formată din elementele situate pe prima linie,
prima coloană, ultima linie și ultima coloană a matricei.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului S;
b)	Scrieţi un program principal Pasca/C/C++ care, folosind apeluri utile ale subprogramelor S,să citească datele din
 fişierul date.in şi care să scrie pe ecran, suma elementelor de pe rama matricei.*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int S(int a[101][101],int n)
{
    int s=0,i,j;
    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
        if(i==1||j==1||i==n||j==n)
          s+=a[i][j];
    return s;
}
int main()
{
    int n,A[101][101],i,j;
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>A[i][j];
    cout<<S(A,n);
    return 0;
}
