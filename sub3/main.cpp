/*Fişierul numere.in  conține, pe prima linie,  un număr natural  n  cu cel mult 9 cifre.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural și
returnează cel mai mare termen din șirul lui Fibonacci mai mic sau egal cu x.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub  citește numărul n și
afișează pe ecran, separate prin câte un spațiu,  un număr minim de elemente care aparțin șirului lui Fibonacci, a căror sumă este egală cu numărul n.
Şirul lui Fibonacci, “legea creşterilor organice”, se va considera aşa cum a fost definit de către Leonardo Fibonacci:1,1,2,3,5,8…*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.in");
int sub(int x)
{
    int a,b,c;
    if(x<4) return x;
    else {
           a=2,b=3,c=a+b;
           while(c<=x)
             {
                a=b;
                b=c;
                c=a+b;
             }
           if(c==x)return x;
           else return b;
         }
}
int main()
{
    int n;
    f>>n;
    while(n)
    {
        cout<<sub(n)<<' ';
        n=n-sub(n);
    }
    return 0;
}
