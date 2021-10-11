#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
struct mahasiswa
{
	char nim[15];
	char nama[25];
	char alamat[40];
	short umur;
	
};
main()
{
	mahasiswa mhs;
	cout<<"nim		: ";cin.getline(mhs.nim,15);
	cout<<"nama		: ";cin.getline(mhs.nama,25);
	cout<<"alamat		: ";cin.getline(mhs.alamat,40);
	cout<<"umur 		: ";cin>>mhs.umur;
	cout<<"\n\n nim: "<<mhs.nim;
	cout<<"\nama: "<<mhs.nama;
	cout<<"\nalamat: "<<mhs.alamat;
	cout<<"\numur: "<<mhs.umur;
	getch();
}
