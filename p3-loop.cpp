#include<iostream>
using namespace std;
int main(){
	int i=0;
	int n;
	cout<<"ENTER A NUMBER : ";
	cin>>n;
	do{
		cout<<"THIS PROGRAM IS RUN FOR "<<i<<" TIME "<<endl;
		i++;
	}while(i<=n);
	return 0;
}