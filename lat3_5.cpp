#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

  struct nilai {
  int nim;
  char nama[20];
  int nilai_tugas;
  int nilai_uts;
  int nilai_uas;
  int nilai_akhir;
  char nilai_huruf;
};
    main()
{
     nilai nil[5];
     int i, data;
     cout<<"PROGRAM MENGHITUNG NILAI AKHIR DAN GRADE MAHASISWA\n"<<endl;
     cout<<"Jumlah Mahasiswa = ";cin>>data;
     for(i=0; i<data; i++)
 
 {
          cout<<"\n====================================================="<<endl;
          cout<<"NIM \t\t: ";cin>>nil[i].nim;
          cout<<"Nama \t\t: ";cin>>nil[i].nama;
          cout<<"Nilai Tugas \t: ";cin>>nil[i].nilai_tugas;
          cout<<"Nilai UTS \t: ";cin>>nil[i].nilai_uts;
          cout<<"Nilai UAS \t: ";cin>>nil[i].nilai_uas;
          nil[i].nilai_akhir=(nil[i].nilai_tugas*20/100)+(nil[i].nilai_uts*35/100)+(nil[i].nilai_uas*45/100);
          if(nil[i].nilai_akhir>85&&nil[i].nilai_akhir<=100)
{
   nil[i].nilai_huruf='A';
}
  else if(nil[i].nilai_akhir>70&&nil[i].nilai_akhir<=85)
{
nil[i].nilai_huruf='B';
}
  else if(nil[i].nilai_akhir>55&&nil[i].nilai_akhir<=70)
{
  nil[i].nilai_huruf='C';
}
  else if(nil[i].nilai_akhir>40&&nil[i].nilai_akhir<=55)
{
  nil[i].nilai_huruf='D';
}
   else
{
   nil[i].nilai_huruf='E';
}
    cout<<endl;
}

     cout<<"Lembar Hasil Nilai Akhir dan Grade"<<endl;
     for(i=0; i<data; i++)
{
     cout<<"\n====================================================="<<endl;
     cout<<"NIM \t\t: "<<nil[i].nim<<endl;
     cout<<"Nama \t\t: "<<nil[i].nama<<endl;
     cout<<"Nilai Tugas \t: "<<nil[i].nilai_tugas<<endl;
     cout<<"Nilai UTS \t: "<<nil[i].nilai_uts<<endl;
     cout<<"Nilai UAS \t: "<<nil[i].nilai_uas<<endl;
     cout<<"Nilai Akhir \t: "<<nil[i].nilai_akhir<<endl;
     cout<<"Grade \t\t: "<<nil[i].nilai_huruf<<endl;
}
getch();
}