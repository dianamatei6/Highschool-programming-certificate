/*Din fi�ierul text mat.in se citesc doua numere naturale n, m (1<n<30, 1<m<30 ) apoi elementele �ntregi ale unei matrici de dimensiune n*m.
Scrie�i un program Pascal/C/C++ care modific� matricea astfel: toate elementele egale cu valoarea maxim� din matrice se �nlocuiesc cu valoarea
minim� de pe coloana lor. Dac� s-a f�cut m�car o �nlocuire, matricea rezultat� se va scrie �n fi�ierul text mat.out,
altfel matricea nu se va scrie �n fi�ierul de ie�ire. Pe ultima linie �n fi�ierul de ie�ire se va scrie num�rul de substitu�ii efectuate.*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("mat.in");
ofstream g("mat.out");
int main()
{
    int n,m,A[101][101],i,j,maxim=0,minim=999999999,c=0;
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            {
                f>>A[i][j];
                if(maxim<A[i][j])
                    maxim=A[i][j];
                if(minim>A[i][j])
                    minim=A[i][j];
            }
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {
            if(A[i][j]==maxim)
            {A[i][j]=minim;c++;}
        }
    if(c>=1)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                g<<A[i][j]<<' ';
            g<<'\n';
        }
        g<<c;
    }
    return 0;
}
