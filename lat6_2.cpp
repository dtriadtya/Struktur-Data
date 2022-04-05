#include <iostream>
#include <conio.h> 

using namespace std;

int main() {
   int Nilai[20]; 
   int posisi [20]; 
   int i,N,Bilangan,Banyak=0; 
   bool Ketemu; 
   cout<<"masukkan Banyaknya Bilangan ="; 
   cin>>N;  
    
  //membaca elemen array 
  for(i=0;i<N;i++) { 
    cout<<"Masukkan elemen ke -"<<i<<"="; 
    cin>>Nilai[i];
  } 
  //mencetak elemen array 
  cout<<"\n\nDeretan Bilangan="; 
  for (i=0;i<N;i++)  
       cout<<Nilai[i]<<""; 
       cout<<"\n\nMasukkan Bilangan yang akan dicari="; 
       cin>>Bilangan; 
        
  //menlakukan pencarian 
  for (i=0;i<N;i++) { 
    if (Nilai[i]==Bilangan) { 
      Ketemu = true; 
      posisi[Banyak]=i; 
      Banyak++;
    } 
  } 
  if (Ketemu){ 
    cout<<"Bilangan"<<Bilangan<<"Ditemukan sebanyak"<<Banyak; 
    cout<<"\npada posisi ke="; 
    for(i=0;i<Banyak;i++) 
    cout<<posisi[i]<<"";
  } 
  else  
  { 
  cout<<"Bilangan"<<Bilangan<<"Tidak ditemukan";
  }
 getch();     
}