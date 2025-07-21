#include<iostream>
using namespace std;
int main(){
	int a;
	int *ptr;
	ptr=&a;
	cout<<"Adress of a using & of a is : "<<&a<<endl;
	cout<<"Adress of a using pointer is : "<<ptr<<endl;
	cout<<"Value of a is "<<a<<endl;

	
	return 0;
}