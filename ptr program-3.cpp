#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *ptr=&a;
	cout<<"Value of a is : "<<*ptr<<endl;
	cout<<"Adress of a before increment : "<<ptr<<endl;
	cout<<"Size of integer is : "<<sizeof(int)<<endl;
	cout<<"Adress of a after increment of 1 : "<<ptr+1<<endl;
	cout<<"Now value after increment by 1 : "<<*(ptr+1)<<endl;
	
	return 0;
}