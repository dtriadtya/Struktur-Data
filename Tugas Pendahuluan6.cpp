#include <iostream>

using namespace std;

main(){
    int i;
    int cari, ketemu;
    int A[100];

    cout<<"PROGRAM SEARCHING Liniear\n";
    cout<<"masukan 7 buah data : \n\n";
    for(i=1; i<=7; i++)
    {
        cout<<"masukan data ke-"<<i<<" = ";
        cin>>A[i];
    }
    cout<<endl;
    cout<<"Input bilangan yang cari : ";cin>>cari;
    cout<<endl;

    ketemu=0;
    for(i=0; i<=7; i++)
    {
        if (A[i]==cari)
        {
            ketemu=1;
            cout<<"Data ditemukan pada indeks ke-"<<i<<endl;
        }
    }
    if(ketemu==0)
    {
        cout<<"Data tidak ditemukan"<<endl;
    }
}
