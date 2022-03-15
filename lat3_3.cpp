#include <iostream>
#include <stdio.h> 
#include <conio.h> 

using namespace std;

struct Mahasiswa
{
  char Nim [9]; 
  char Nama [25]; 
  char Alamat [40]; 
  int Umur;
}; 
  
    main() { 
      Mahasiswa Mhs [5]; 
        int i; 
        for (i=0;i<5;i++) 
        { 
          cout<<"Nim     :"; 
          cin>>Mhs[i].Nim; 
          cout<<"Nama    :"; 
          cin>>Mhs[i].Nama; 
          cout<<"Alamat  :"; 
          cin>>Mhs[i].Alamat; 
          cout<<"Umur    :"; 
          cin>>Mhs[i].Umur;
        } 
      for(i=0;i<5;i++) 
      { 
        cout<<"\n\nNim    :"<<Mhs[i].Nim; 
        cout<<"\n\nNama   :"<<Mhs[i].Nama; 
        cout<<"\n\nAlamat :"<<Mhs[i].Alamat; 
        cout<<"\n\nUmur   :"<<Mhs[i].Umur;
      } 
      getch();
    }
