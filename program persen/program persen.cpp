#include<iostream>
using namespace std;

int main(){
	
	char item[20];
	int fee,diskon,total,harga_awal;
	
	cout<<"program penghitung persen"<<endl;
	cout<<"========================="<<endl;
	cout<<"nama item : ";cin>>item;
	cout<<"========================="<<endl;
	cout<<"harga awal : ";cin>>harga_awal;
	cout<<"diskon : ";cin>>diskon;
	cout<<"========================="<<endl;
	total=(harga_awal*diskon)/100;
	fee=harga_awal-total;
	cout<<"pay : Rp."<<fee;
	if(fee==0){
		cout<<" gratis"<<endl;
	}
	
	cin.get();
	return 0;
}
