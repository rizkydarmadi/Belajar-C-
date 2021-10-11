#include<iostream>
using namespace std;

main(){
	int i;
	for(i=0;i<10;i++){
	
	
	cout<<"\t profit calculation \n\n";
	
	int net,total2,total3,lot2,sell,total1,total,lot,buy;
	char emiten[4];
	
	cout<<"emiten : ";cin>>emiten;
	cout<<"buy : ";cin>>buy;
	cout<<"how many lot : ";cin>>lot;
	total=buy*lot;
	total1=total*100;
	cout<<"total: "<<total1;
	cout<<"\n\n\n";
	
	cout<<"sell: ";cin>>sell;
	cout<<"how many lot: ";cin>>lot2;
	total2=sell*lot2;
	total3=total2*100;
	cout<<"total: "<<total3<<endl;
	cout<<"=======================\n\n";
	
	net=total3-total1;
	cout<<"your profit: "<<net<<endl;
	
	cout<<"end\n";
	cout<<"======================\n"
	
	
}
}
