#include <iostream>
using namespace std;

int main(){
	int kodemenu;
	float in,out,nilaiawal,balance;
	
	cout<<"bincard tanggo\n";
	cout<<"1. barang masuk\n";
	cout<<"2. barang keluar\n";
	cout<<"3. keluar program\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"pilih nomer : ";cin>>kodemenu;
	
	switch(kodemenu){
		
		case 1:
			{
				//rumus in adalah nilai awal + barang masuk//
				cout<<"masukan nilai awal : \n";cin>>nilaiawal;
				cout<<"masukan jumlah barang masuk : \n";cin>>in;
				balance=nilaiawal+in;
				cout<<"balancenya adalah : "<<balance<<endl;
				break;
				
			}
	}
	
	return 0;
	
}
