#include<iostream>
using namespace std;
int main(){
	int n,x,y,z;
	cout<<"Please enter a number : ";
	cin>>n;
	x=0;
	y=1;
	z=0;
	for(z=0;z<=n;z=x+y){
		cout<<z<<endl;
		x=y;
		y=z;
	}   
	
	return 0;
}