#include<iostream>
using namespace   std;
int main(){
	int a,b,c;
	cout<<"Enter the value of the a : ";
	cin>>a;
	cout<<"Enter the value of the b : ";
	cin>>b;
	cout<<"Enter the value of the c : ";
	cin>>c;
	
	if(a>b&& a>c){
		cout<<"The maximum value is a : "<<a<<endl;
	}
	else if(b>a&&b>c){
		cout<<"The maximum value is b : "<<b<<endl;
	}
	else{
		cout<<"The maximum value is c : "<<c<<endl;
	}
	return 0;
}