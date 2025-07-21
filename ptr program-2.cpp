#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *ptr=&a;
	cout<<"Value of a is : "<<*ptr<<endl;
	cout<<"Adress of a is : "<<ptr<<endl;
	cout<<"Size of integer is : "<<sizeof(int)<<endl;
	cout<<"Adress of a by adding 1 is : "<<ptr+1<<endl;
	return 0;
}