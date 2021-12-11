/*Fişierul numere.in  conține, pe prima linie,  un număr natural  n (2<n<100)
iar  pe linia a doua n numere cu cel mult 9 cifre fiecare.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural
și returnează valoarea 1 dacă x aparține șirului lui Fibonacci și 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub  citește
numărul n și cele n numere, apoi determină toate numerele care aparțin șirului lui Fibonacci
și le afișează, separate prin câte un spațiu, pe ecran. Dacă niciunul dintre cele n numere
nu aparțin șirului lui Fibonacci, atunci programul va afișa pe ecran mesajul NU EXISTA.
Şirul lui Fibonacci, “legea creşterilor organice”, se va considera aşa cum a fost definit de către Leonardo Fibonacci:1,1,2,3,5,8…*/

#include <iostream>
#include <fstream>
using namespace std;
fstream f("numere.in");
int sub(int x)
{
    int a,b,c;
    if(x<1)return 0;
    else if(x<4) return 1;
        else {
                 a=2,b=3,c=a+b;
                 while(c<x)
                 {
                     a=b;
                     b=c;
                     c=a+b;
                 }
                 if(x==c)return 1;
                 else return 0;
             }
}
int main()
{
    int n,i,x,sw=0;
    f>>n;
    for(i=0;i<n;i++)
    {
        f>>x;
        if(sub(x)==1)
            {cout<<x<<' ';sw++;}
    }
    if(sw==0)
        cout<<"NU EXISTA";
    return 0;
}
