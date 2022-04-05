#include <iostream>
#include <conio.h> 

using namespace std;
  
int Maksimum (int a, int b, int c);
int main() {
  int a=8, b=12, c=5; 
  cout<<"Nilai a ="<<a; 
  cout<<"\nNilai b ="<<b; 
  cout<<"\nNilai C ="<<c; 
  cout<<"\nNilai Terbesar : "<<Maksimum ( a, b, c ) ;
  getch();
} 
 
int Maksimum (int x, int y, int z){ 
  int Besar =x; 
  if (y>Besar)
     Besar=y; 
     if(z>Besar) 
     Besar=z; 
  return (Besar);
}