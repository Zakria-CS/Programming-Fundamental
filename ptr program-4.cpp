#include<iostream>
using namespace std;
int main(){
	int a=5;
	int *ptr;
	ptr=&a;
	*ptr=6;
	int **q;
	q=&ptr;
	int ***r;
	r=&q;
	cout<<"Value of a is "<<a<<endl;
	cout<<"Adress of a is "<<*ptr<<endl;
	cout<<"Adress of ptr is "<<*q<<endl;
	cout<<"Adress of ptr is "<<*(*q)<<endl;
	cout<<"Adress of q is "<<*(*(*r))<<endl;
	
	return 0;
}