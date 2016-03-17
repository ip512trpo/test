#include <iostream.h>
#include <string.h>
#include <conio.h>
using namespace std;
main ()
{
char l[5]={'p','i','d','o','r'};

cout<<"Vvedite tekst:\n";
int i,k=0; char s[5];
gets(s);
for (i=0;i<5;i++){
  if (s[i]!=l[i])
  {cout << "Nope\n";
    k++;
   break;}
    }

if (k==0)
cout << "Cool!\n";
  
getch();
}
