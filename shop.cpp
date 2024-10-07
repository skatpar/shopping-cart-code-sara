#include <iostream>
using namespace std;

int main() {
	int num=0;
	int exit;
	int qnt;
	int price;
	
	do{
	
	cout<<"press 1 for books(per item price= 500\n";
	cout<<"press 2 for Tshirt (per item price= 700\n";
	cout<<"press 3 for Shoes(per item price= 1000\n";
	cout<<"press 0 to exit"<<endl;
	cout<<"enter a number: ";
	cin >> num;
			
		if (num==1){
	
			cout<< "you have selected books\n "<<endl;
			cout<< "enter quantity : ";
			cin>>qnt;
			price=(qnt*500);
			cout<<endl<<"the price is: "<<(qnt*500)<<endl;}
		else if (num==2){
	
			cout<< "you haves selected Tshirts: "<<endl;
			cout<< "enter quantity : ";
			cin>>qnt;
			cout<<endl<<"price is: "<<(qnt*700)<<endl;
			price=(qnt*700);}
		else if (num==3){
	
			cout<< "you have selected shoes: "<<endl;
			cout<< "enter quantity : ";
			cin>>qnt;
			price=(qnt*100);
			cout<<endl<<"the price is: "<<(qnt*100)<<endl;}
		else if (num==0){
		
			}
	
	
	}
	
	while (num!=0);
	price+=price;
	cout<<"total price is:" << price;
	

		
	







return 0;
}
