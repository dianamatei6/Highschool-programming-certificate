/*Fişierul date.in conţine pe prima linie a fişierului un număr natural  n,
(1≤n≤100) iar pe  următoarele n linii sunt scrise câte n numere naturale, formate fiecare din cel mult 9 cifre,
separate prin câte un spaţiu, reprezentând elementele unei matrice A cu n linii și n coloane.
Se consideră subprogramul: maxim cu trei parametri:
–	x, matrice  cu elemente întregi;
–	n, număr natural ce reprezintă numărul efectiv de coloane ale matricei x,  2≤n≤100;
–	p, număr natural, 1≤p≤n.
Subprogramul va returna valoarea maximă de pe linia p a matricei.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului maxim;
b)	Scrieţi un program principal Pasca/C/C++ care, folosind apeluri utile ale subprogramului maxim,
să citească datele din fişierul date.in şi care să scrie pe ecran, separate prin câte un spațiu,
elementele maxime de pe fiecare linie a matricei.*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int maxim(int x[101][101],int n, int p)
{
    int maxx=0,i,j;
      for(j=1;j<=n;j++)
        if(x[p][j]>maxx)
          maxx=x[p][j];
    return maxx;
}
int main()
{
    int n,A[101][101],i,j;
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>A[i][j];
    for(i=1;i<=n;i++)
        cout<<maxim(A,n,i)<<' ';
    return 0;
}
