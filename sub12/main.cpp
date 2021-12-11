/*Fişierul date.in conţine pe prima linie doua numere naturale  n(n<100)  și  k(1<k<=2n)
iar pe următoarele n linii câte n numere reale reprezentând elementele unei matrice pătrate de dimensiune n.
Subprogramul sub primeşte prin intermediul parametrului n (0<n<100) dimensiunea unei matrice pătrate, prin
intermediul parametrului a matricea de numere reale (aij cu 1in, 1jn) şi prin intermediul parametrului k
un număr natural nenul1<k<=2n). El returnează prin intermediul parametrului s suma tuturor elementelor aij cu proprietatea că i+j=k.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care citește din fișier numerele n și elementele matricei și,folosind
apeluri utile ale subprogramului sub afişează suma elementelor din tablou aflate strict deasupra diagonalei secundare a tabloului.*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int sub(int n,int a[100][100],int k)
{
    int s=0,i,j;
    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
        if(i+j==k)
        s=s+a[i][j];
    return s;
}
int main()
{

    int x=2,i,j,n,a[100][100],s=0;
    f>>n;
    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
        f>>a[i][j];
    while(x<=n)
    {
        s=s+sub(n,a,x);
        x++;
    }
    cout<<s;
    return 0;
}
