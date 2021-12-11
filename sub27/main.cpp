/*Fişierul numere.in  conține, pe prima linie,  un număr natural  n (2<n<100),
iar  pe linia a doua n numere cu cel mult 9 cifre fiecare.
Se consideră subprogramul maxim care  primeşte prin intermediul parametrului A un vector
cu cel mult 100 de numere reale şi prin intermediul parametrului n numărul de elemente din vector.
El returnează valoarea celui mai mare element din vector, şterge toate apariţiile acestui element
din vector şi modifică corespunzător valoarea lui n.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului maxim;
b)	Scrieţi un program principal Pasca/C/C++ care să citească datele din fişierul date.in şi care,
folosind apeluri utile ale subprogramului maxim, să scrie pe ecran, separate prin câte un spațiu,
în ordine strict descrescătoare, numerele care apar în vector.*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.in");
int maxim(int A[100],int &n)
{
    int i,j,maxx=0;
    for(i=0;i<n;i++)
        if(A[i]>maxx)
           maxx=A[i];
    for(i=0;i<n;i++)
        if(A[i]==maxx)
          {
              j=i;
              while(j<n-1)
              {
                 A[j]=A[j+1];
                 j++;
              }
              n--;
              i--;
          }
    return maxx;
}
int main()
{
    int n, A[100],i,j;
    f>>n;
    for(i=0;i<n;i++)f>>A[i];
    while(n)
        cout<<maxim(A,n)<<' ';
    return 0;
}
