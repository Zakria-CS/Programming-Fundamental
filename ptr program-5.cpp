#include<iostream>
using namespace std;
void increment(int *a){
	*a=*(a)+1;
	cout<<"Adress of a is "<<a<<endl;
}
int main(){
	int a;
	a=10;
	cout<<"Value before increment is : "<<a<<endl;
	increment(&a);
	cout<<"Value after increment is : "<<a<<endl;
	
	cout<<"\nAdress of a is "<<&a<<endl;
	
	return 0;
}