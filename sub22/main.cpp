/*Prima linie a fişierului BAC.TXT conţine două numere naturale m şi n  (1<=n,m<=100)
iar următoarele m linii câte n numere întregi cu maxim 9 cifre fiecare, separate prin câte un spaţiu.
Spunem că o linie a fişierului este simetrică dacă elementele egal depărtate de capetele liniei
respective sunt egale (primul element de pe linie este egal cu ultimul element al liniei, al doilea cu penultimul etc.)
Se consideră subprogramul: verif cu trei parametri:
–	x, matrice  cu elemente întregi;
–	n, număr natural ce reprezintă numărul efectiv de coloane ale matricei x,  2≤n≤10;
–	p, număr natural, 1≤p≤m.
Subprogramul va returna valoarea 1 dacă elementele egal depărtate de capetele liniei sunt simetrice și 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului verif;
b)	Scrieţi un program Pascal/C/C++, care citeşte din fişierul BAC.TXT m, n și elementele matricei și afişează pe ecran
câte din cele m linii din fişier sunt simetrice.*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("BAC.TXT");
int verif(int x[101][101],int n, int p)
{
    int i,j;
      for(j=1;j<=n/2;j++)
      {
          if(x[p][j]!=x[p][n-j+1])
            return 0;
      }
    return 1;
}
int main()
{
    int n,m,x[101][101],c=0,i,j;
    f>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            f>>x[i][j];
    for(i=1;i<m;i++)
        if(verif(x,n,i))
           c++;
    cout<<c;
    return 0;
}
