#include<iostream>
using namespace std;
int main(){
	int i=0;
	int n;
	cout<<"ENTER A NUMBER : ";
	cin>>n;
	do{
		cout<<"THIS PROGRAM IS RUN FOR "<<n<<" TIME "<<endl;
		n--;
	}while(n>=i);
	return 0;
}