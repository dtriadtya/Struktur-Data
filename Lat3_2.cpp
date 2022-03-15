#include <iostream>
#include <stdio.h> 
#include <conio.h>
using namespace std; 
 
struct Tinggal { 
    char Jalan [40]; 
    char Kota  [15]; 
    char Pos   [5];
}; 
 
struct Tanggal_Lahir {
    int Tanggal; 
    int Bulan; 
    int Tahun; 
 }; 
  
struct Mahasiswa { 
    char Nim [9]; 
    char Nama [25]; 
    Tinggal Alamat; 
    Tanggal_Lahir lahir;
};
 
 int main() { 
   Mahasiswa Mhs; 
   cout<<" Nim    :"; 
   cin.getline (Mhs.Nim,9); 
   cout<<" Nama   :"; 
   cin.getline (Mhs.Nama,25); 
   cout<<" Alamat \n"; 
   cout<<"\tJalan     :"; 
   cin.getline (Mhs.Alamat.Jalan,40);  
   cout<<"\tKota      :"; 
   cin.getline (Mhs.Alamat.Kota,15); 
   cout<<"\tKode Pos  :"; 
   cin.getline (Mhs.Alamat.Pos,5); 
   cout<<"Tanggal Lahir  \n"; 
   cout<<"\tTanggal  :"; 
   cin>>Mhs.lahir.Tanggal; 
   cout<<"\tBulan    :"; 
   cin>>Mhs.lahir.Bulan; 
   cout<<"\tTahun    :"; 
   cin>>Mhs.lahir.Tahun; 
   cout<<"\nMencetak Kembali Nilai Anggota\n\n"; 
   cout<<"NIM             :"<<Mhs.Nim; 
   cout<<"\nNama            :"<<Mhs.Nama; 
   cout<<"\nAlamat   \n"; 
   cout<<"\n\tJalan             : "<<Mhs.Alamat.Jalan;
   cout<<"\n\tKota              : "<<Mhs.Alamat.Kota;
   cout<<"\n\tKode Pos          : "<<Mhs.Alamat.Pos;
   cout<<"\n\tTanggal Lahir     : "<<Mhs.lahir.Tanggal<<"-";
   cout<<Mhs.lahir.Bulan<<"-" <<Mhs.lahir.Tahun;
getch ();
 }