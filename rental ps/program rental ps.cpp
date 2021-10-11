#include <iostream>
#include <istream>
using namespace std;

int main(){
	
	int no_tv,jenis_ps; 
	float jam,cash,tarif,kredit,uangnya;
	
	cout<<"main di tv no berapa : ";cin>>no_tv;
	cout<<"masukan ps (1,2,3,4) : ";cin>>jenis_ps;
	cout<<"mau main berapa jam : ";cin>>jam;
	cout<<"====================================\n";
	cout<<"uang kamu : ";cin>>uangnya;
	cout<<"====================================\n";
	cout<<"\n";
	cout<<"\n";
	
	switch(jenis_ps){
		case 1:
			tarif=3000;
			cash=tarif*jam;
			kredit=uangnya-cash;
			cout<<"nomer tv : "<<no_tv<<endl;
			cout<<"tarif kamu adalah "<<cash<<endl;
			//cout<<"kembalianya : "<<kredit<<endl;
			cout<<"have a nice day"<<endl;
			if(uangnya < cash){
				cout<<"maaf duitnya kurang"<<kredit<<endl;
			}
			break;
			
			
	}
	
	


	
	cin.get();
	return 0;
}
