#include <iostream>
#include <conio.h> 
  
 using namespace std; 

 main() { 
   int x=8, y; 
   int *xPtr; 
   xPtr=&x; 
   cout<<"Nilai        ="<<x<<endl; 
   cout<<"Alamat       ="<<&x<<endl; 
   cout<<"Alamat       = "<<xPtr<<endl ;
   cout<<"Nilai yang disimpan pada alamat " ;
   cout<<xPtr<<" adalah "<< *xPtr;
getch ();
 }  


