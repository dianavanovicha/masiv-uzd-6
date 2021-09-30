#include <iostream>
#include <array>
using namespace std;
int main() 
{
char mas[100], simbol;

 int n, counter=0;
 cout << " Ievadiet n"  ;
 cin >>n;

 cout << "Ievadiet symbol  ";
 cin >> simbol;
 cout << "Ievadiet simbolu masīvs  ";

for (int i=0; i<n; i++)
  {
    cin >> mas [i];
  
  }
int mas1 [100];
for (int i=0; i<n; i++)
  {
    if (mas[i] == simbol) {counter++; }
  
  }
  
    cout << counter<< " ";
  return 0;
}
 