/*Consider�m definit un subprogram nrap care are doi parametri: un sir de caractere s de lungime
cel mult 100 si un caracter c. Subprogramul nrap �ntoarce num�rul aparitiilor caracterului c �n sirul s.
a) Scrie�i defini�ia complet� a subprogramului nrap.
b) Scrie�i un program care cite�te de la tastatur� dou� �iruri de caractere formate fiecare din cel
mult 100 de litere ale alfabetului englez �i, apel�nd subprogramul nrap descris mai sus,
verific� dac� cele dou� �iruri sunt formate din exact acelea�i caractere, eventual �n alt� ordine.
�n caz afirmativ programul va afi�a pe ecran mesajul "DA", altfel va afi�a "NU"*/

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
