#include<iostream>
using namespace std;
int main(){
	int n,x,y,z;
	cout<<"Please enter a number : ";
	cin>>n;
	x=0;
	y=1;
	z=0;
	for(int count=0;count<=n;count++){
		cout<<count<<" : "<<z<<endl;
		x=y;
		y=z;
		z=x+y;
	}   
	
	return 0;
}