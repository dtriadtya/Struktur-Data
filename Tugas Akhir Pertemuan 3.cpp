#include <iostream>
#include <stdlib.h> 
#include <stdio.h>
#include <conio.h> 
     
using namespace std;
struct Tinggal
{
  char Jalan [50]; 
  char Kota [15]; 
  char Kode_pos [6];
}; 

struct Tanggal_Lahir
{
  int Tanggal; 
  int Bulan; 
  int Tahun;
}; 
  
   
struct Tanggal_Mulai_Kerja 
{
  int Tanggal; 
  int Bulan; 
  int Tahun;
};

struct Biodata
{
  char Nama [25]; 
  char NIP [9]; 
  char Unit_Kerja[15];
  char Jabatan [10]; 
  char Agama [10]; 
  Tanggal_Lahir Lahir;   
  Tanggal_Mulai_Kerja  Kerja; 
  Tinggal Alamat;
}; 
 
int main ()
{
 Biodata Pegawai [5]; 
 int i; 
 for (i = 0; i<2; i++)
 {
   cout<<"\nNIP   :";
   cin>>Pegawai[i].NIP;  
   cout<<"\nNama  :"; 
   cin>>Pegawai[i].Nama; 
   cout<<"\nUnit kerja  :"; 
   cin>>Pegawai[i].Unit_Kerja; 
   cout<<"\nJabatan   :"; 
   cin>>Pegawai[i].Jabatan; 
   cout<<"\nAgama   :"; 
   cin>>Pegawai[i].Agama; 
   cout<<"\nTanggal Lahir"; 
   cout<<"\nTanggal   :"; 
   cin>>Pegawai[i].Lahir.Tanggal; 
   cout<<"\nBulan   :"; 
   cin>>Pegawai[i].Lahir.Bulan; 
   cout<<"\nTahun   :"; 
   cin>>Pegawai[i].Lahir.Tahun; 
   cout<<"\nAlamat"; 
   cout<<"\nJalan   :"; 
   cin>>Pegawai[i].Alamat.Jalan; 
   cout<<"\nKota   :"; 
   cin>>Pegawai[i].Alamat.Kota; 
   cout<<"\nKode Pos  :"; 
   cin>>Pegawai[i].Alamat.Kode_pos; 
   cout<<"\nTanggal Mulai Kerja"; 
   cout<<"\nTanggal   :"; 
   cin>>Pegawai[i].Kerja.Tanggal; 
   cout<<"\nBulan   :"; 
   cin>>Pegawai[i].Kerja.Bulan; 
   cout<<"\nTahun   :"; 
   cin>>Pegawai[i].Kerja.Tahun;
 }  
  cout<<endl;
  cout<<"Mencetak Biodata Pegawai"; 
  for (i = 0; i<2; i++)
  {
    cout<<"\nNIP   :"<<Pegawai[i].NIP; 
    cout<<"\nNama   :"<<Pegawai[i].Nama; 
    cout<<"\nAlamat   :"<<Pegawai[i].Alamat.Jalan<<"-"<<Pegawai[i].Alamat.Kota<<"-"<<Pegawai[i].Alamat.Kode_pos; 
    cout<<"\nJabatan   :"<<Pegawai[i].Jabatan; 
    cout<<"\nAgama   :"<<Pegawai[i].Agama;  
    cout<<"\nTanggal Lahir   :"<<Pegawai[i].Lahir.Tanggal<<"-"<<Pegawai[i].Lahir.Bulan<<"-"<<Pegawai[i].Lahir.Tahun;
    cout<<"\nTanggal Mulai Kerja   :"<<Pegawai[i].Kerja.Tanggal<<"-"<<Pegawai[i].Kerja.Bulan<<"-"<<Pegawai[i].Kerja.Tahun;
    cout<<"\nUnit Kerja   ::"<<Pegawai[i].Unit_Kerja; 
    cout<<endl;
  }
  getch();
}




