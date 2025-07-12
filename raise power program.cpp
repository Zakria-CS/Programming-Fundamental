#include<iostream>
using namespace std;
int main(){
	int n,m,product=1;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"Enter value of power : ";
	cin>>m;
	int i=1;
	while(i<=m){
		product=product*n;
		i++;
	}
	cout<<"Your final resule is "<<product<<endl;
	
	
	
	return 0;
}