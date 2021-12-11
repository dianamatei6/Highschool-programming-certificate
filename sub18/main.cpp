/*a. Scrieţi o definiţie completă pentru un subprogram suma cu trei parametri:
–	x, matrice pătratică cu elemente întregi;
–	n, număr natural ce reprezintă numărul efectiv de linii şi coloane ale matricei x,  2≤n≤10;
–	p, număr natural, 1≤p≤n.
Subprogramul va returna suma elementelor aflate pe linia p a matricei.
b. Scrieţi un program care citeşte din fişierul matrice.in un număr natural n şi o matrice cu n linii şi n
coloane şi afişează în fişierul matrice.out indicii liniilor din matrice pentru care suma elementelor  este număr par.
Se va folosi subprogramul definit la punctul a.*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("matrice.in");
ofstream g("matrice.out");
int suma(int x[10][10],int n,int p)
{
    int j,s=0;
       for(j=1;j<=n;j++)
           s=s+x[p][j];
    return s;
}
int main()
{
    int n,x[10][10],i,j;
    f>>n;
    for (i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>x[i][j];
    for(i=1;i<=n;i++)
        if(suma(x,n,i)%2==0)
             g<<i<<' ';
    return 0;
}
