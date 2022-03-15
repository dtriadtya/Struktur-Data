#include <iostream>
#include <conio.h> 
#include <stdio.h>
using namespace std;

struct Mahasiswa {
 char Nim [9]; 
 char Nama [25]; 
 char Alamat [40]; 
 short Umur;
 }; 
  
 main() { 
   Mahasiswa Mhs; 
   cout<<"Nim     :"; 
   cin.getline(Mhs.Nim,9); 
   cout<< "Nama   :"; 
   cin.getline(Mhs.Nama,25); 
   cout<<"Alamat  :"; 
   cin.getline(Mhs.Alamat,40); 
   cout<<"Umur    :"; 
   cin>>Mhs.Umur; 
   cout<<"\nNim      :"<<Mhs.Nim; 
   cout<<"\nNama     :"<<Mhs.Nama;
   cout<<"\nAlamat   :"<<Mhs.Alamat; 
   cout<<"\nUmur     :"<<Mhs.Umur; 
   getch();
 }