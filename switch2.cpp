#include<iostream>
using namespace std;

int main(){
	int value;
	cout <<" Enter the value:";
	cin>>value;
	
	switch(value){
		case 1:
			cout<<" The value is one : ";
			break;
		
		case 2:
			cout<<" The value is two : ";
			break;
		case 3:
			cout <<" The value is three:";
			break;
		default:
			cout<<" You must enter 1-3:";
			break;			
	}
}
