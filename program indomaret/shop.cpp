#include<iostream>
using namespace std;

int main(){
	int confirm;
	int total,yes,no,kode_barang,cek,cty,harga;
	
	
	cout<<"kode barang: ";cin>>kode_barang;
	cout<<"silahkan masukan jumlahnya: ";cin>>cty;
	cout<<"============================"<<endl;
	
	switch(kode_barang){
		case 1:
		cout<<"anda membeli rinso: ";cin>>confirm;
		//cout<<"============================"<<endl;
		if (confirm==yes){
		harga =1000;
		total=harga*cty;
		cout<<"============================"<<endl;
		cout<<"harganya jadi: Rp."<<total<<endl;
		break;
	}case 2:
		cout<<"anda membeli cornetto: ";cin>>confirm;
		//cout<<"============================"<<endl;
		if (confirm==yes){
		harga =5000;
		total=harga*cty;
		cout<<"============================"<<endl;
		cout<<"harganya jadi: Rp."<<total<<endl;
		break;	
	}case 3:
		cout<<"anda membeli kitkat: ";cin>>confirm;
		//cout<<"============================"<<endl;
		if (confirm==yes){
		harga =7000;
		total=harga*cty;
		cout<<"============================"<<endl;
		cout<<"harganya jadi: Rp."<<total<<endl;
    break;
	}case 4:
		cout<<"anda membeli kinder joy: ";cin>>confirm;
		//cout<<"============================"<<endl;
		if (confirm==yes){
		harga =10000;
		total=harga*cty;
		cout<<"============================"<<endl;
		cout<<"harganya jadi: Rp."<<total<<endl;
		break;
}
}
	cin.get();
	return 0;
}
