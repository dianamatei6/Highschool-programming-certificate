/*Din fişierul text DATE.TXT  conţine pe prima linie două numere naturale n şi m (0<m<n<5000),
pe cea de a doua linie n numere naturale a1, a2, …, an (0 ≤ ai≤9), iar pe cea de a treia linie m numere naturale b1, b2, …, bm (0 ≤ bi≤9).
Scrieți programul C/C++ care citește datele din fișier, verifică dacă şirul b se poate obţine din şirul a prin eliminări,
fără a schimba ordinea elementelor în șirul a și afişează pe ecran un mesaj corespunzător. Se va utiliza un algoritm eficient
din punct de vedere al timpului de executare și al spațiului de memorie utilizat.*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.txt");
int main()
{
    int n,m,i,k=1,n1[4999];
    f>>n>>m;
    for(i=1;i<=n;i++)
        f>>n1[i];
    while(m)
    {
        f>>i;
        while(i!=n1[k])
            k++;
        m--;
    }
    if(k>n)cout<<"b nu se poate obtine din a";
    else cout<<"b se poate obtine din a";
    return 0;
}
