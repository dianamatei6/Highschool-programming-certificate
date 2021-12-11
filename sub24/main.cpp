/*Fişierul date.in conţine două linii. Pe prima linie a fişierului este scris un număr natural  n,
(1≤n≤100) iar pe  următoarele n linii sunt scrise câte n numere naturale, formate fiecare din cel mult n cifre,
separate prin câte un spaţiu, reprezentând elementele unei matrice A cu n linii și n coloane.
Se consideră subprogramul: sub cu trei parametri, care primeşte prin intermediul parametrilor:
-	a,un tablou bidimensional format din cel mult 30 de linii și cel mult 30 de coloane cu elemente numere întregi;
-	n,(1≤n≤100) numărul efectiv de linii și de coloane ale matricei a;
-	max, un număr natural nenul.
Subprogramul furnizează prin intermediul  parametrului max, elementul maxim de pe diagonala principală a matricei a.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program principal Pasca/C/C++ care, folosind apeluri utile ale subprogramului sub, să citească datele
din fişierul date.in şi care să scrie pe ecran, elementul maxim de pe diagonala principală.*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
void sub(int a[101][101],int n, int &max)
{
    int i,j;
    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
        if(i==j&&a[i][j]>max)
           max=a[i][j];
}
int main()
{
    int n,A[101][101],i,j,max=-1;
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>A[i][j];
    sub(A,n,max);
    cout<<max;
    return 0;
}
