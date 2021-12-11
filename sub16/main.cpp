/*Din fiºierul text mat.in se citesc doua numere naturale n, m (1<n<30, 1<m<30 ) apoi elementele întregi ale unei matrici de dimensiune n*m.
Scrieþi un program Pascal/C/C++ care modificã matricea astfel: toate elementele egale cu valoarea maximã din matrice se înlocuiesc cu valoarea
minimã de pe coloana lor. Dacã s-a fãcut mãcar o înlocuire, matricea rezultatã se va scrie în fiºierul text mat.out,
altfel matricea nu se va scrie în fiºierul de ieºire. Pe ultima linie în fiºierul de ieºire se va scrie numãrul de substituþii efectuate.*/
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
