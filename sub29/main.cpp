/*Fişierul date.in conţine pe prima linie două numere naturale nenule m și n (1≤m≤30, 1≤n≤30),
iar pe următoarele m linii câte n numere întregi, cu cel mult 9 cifre fiecare, separate prin câte un spațiu,
reprezentând elementele unei matrice A cu m linii și n coloane.
      Se consideră subprogramul sub, care primeşte prin intermediul parametrilor:
-	A, o matrice cu cel mult 30 de linii și cel mult 30 de coloane, și elemente numere întregi formate din cel mult 4 cifre fiecare;
-	n, un număr natural reprezentând numărul efectiv de coloane ale matricei A, 1≤n≤30.
-	k, un număr natural ,  1<k≤m
Subprogramul furnizează suma elementelor situate pe linia k în matricea A.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub.
b)	Scrieţi un program principal Pascal/C/C++ care, citește matricea A din fişierul date.in, calculează,
folosind apeluri utile ale subprogramului sub, pentru fiecare linie a matricei suma elementelor corespunzătoare
și afișează pe ecran indicele primei linii din matrice de sumă maximă, precum și valoarea acestei sume.
Cele două numere sunt afișate pe aceeași linie, separate printr-un spațiu.*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int sub(int A[31][31],int n,int k)
{
    int s=0,i,j;
    for(j=1;j<=n;j++)
        s=s+A[k][j];
    return s;
}
int main()
{
    int m,n,A[31][31],i,j,maxim=0;
    f>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
          f>>A[i][j];
    for(i=1;i<=m;i++)
    {
        if(sub(A,n,i)>maxim)
          maxim=sub(A,n,i);
    }
    i=1;
    while(sub(A,n,i)!=maxim)
        i++;
    cout<<i<<' '<<sub(A,n,i);
    return 0;
}
