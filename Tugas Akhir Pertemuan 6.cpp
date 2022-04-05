#include <iostream>
#include <conio.h>
using namespace std;
 
main() {
   bool ketemu;
   int posisi[25];
   int c,i,banyak=0;
   int data[25]={34,8,50,74,87,90,12,25,20,30,35,45,40,22,29,72,60,55,53,12,32,33,12,41,12};
   cout<<"Data : ";
  
  for(i=0;i<25;i++){
  cout<<data[i]<<" ";
 }
  
   cout<<"\n\nData yang dicari : ";
     cin>>c;
     for (i=0;i<25;i++) {
     if (data[i]==c) {
     ketemu=true;
     posisi[banyak]=i+1;
     banyak++;
  }
    }
  
    if (ketemu){
    cout<<"Data : "<<c;
    cout<<"\nDitemukan sebanyak "<<banyak;
    cout<<"\nPada posisi ke ";
   
   for(i=0;i<banyak;i++){
   cout<<posisi[i]<<" ";
  }
    }
 else
 {
  cout<<"Data "<<c<<" tidak ditemukan";
 }
 getch();
}