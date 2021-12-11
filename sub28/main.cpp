/*Considerãm definit un subprogram nrap care are doi parametri: un sir de caractere s de lungime
cel mult 100 si un caracter c. Subprogramul nrap întoarce numãrul aparitiilor caracterului c în sirul s.
a) Scrieþi definiþia completã a subprogramului nrap.
b) Scrieþi un program care citeºte de la tastaturã douã ºiruri de caractere formate fiecare din cel
mult 100 de litere ale alfabetului englez ºi, apelând subprogramul nrap descris mai sus,
verificã dacã cele douã ºiruri sunt formate din exact aceleaºi caractere, eventual în altã ordine.
În caz afirmativ programul va afiºa pe ecran mesajul "DA", altfel va afiºa "NU"*/

#include <iostream>
#include <string.h>
using namespace std;
int nrap(char s[101],char c)
{
   int i,k=0;
   for(i=0;i<strlen(s);i++)
     if(s[i]==c)
        k++;
   return k;
}
int main()
{
    char s1[101],s2[101],sw=0,i;
    cin>>s1>>s2;
    if(strlen(s1)!=strlen(s2))
        cout<<"NU";
    else{
           for(i=0;i<strlen(s1);i++)
                if(nrap(s1,s1[i])!=nrap(s2,s1[i]))
                {
                    sw=1;break;
                }
            if(!sw)cout<<"DA";
            else cout<<"NU";
        }
    return 0;
}
