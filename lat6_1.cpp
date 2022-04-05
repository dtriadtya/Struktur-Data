#include <iostream>
#include <conio.h> 

using namespace std;

int main() { 
  int Nilai[20]; 
  int i, N,angka,Bilangan; 
  cout<<"masukkan banyaknya bilangan ="; 
  cin>>N; 
   
  //MEMBACA ELEMEN ARRAY 
  for (i=0;i<N;i++) { 
    cout<<"masukkan elemen ke -"<<i<<"="; 
    cin>>Nilai[i];
  } 
   
   //mencetak elemen array 
    cout<<"\n\nDeretan Bilangann ="; 
    for(i=0;i<N;i++) 
    cout<<Nilai[i]<<"";
    cout<<"\n\nMasukkan bilangan yang akan dicari ="; 
    cin>>Bilangan; 
     
    //melakukan pencarian 
    i=0; 
    do
    {
      if(Nilai[i]== Bilangan) 
       angka=Nilai[i]; 
       i++;
    }
    while (i<N);
    if(angka==Bilangan) 
       cout<<"Bilangan"<<Bilangan<<"Ditemukan"; 
       else 
        cout<<"Bilangan"<<Bilangan<<"tidak ditemukan"; 
        getch();
}