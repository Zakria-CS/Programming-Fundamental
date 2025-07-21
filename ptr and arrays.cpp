//Pointers and arrays.
#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,4,5,6,7};
	int *ptr;
	ptr=arr;
	cout<<"First index adress is : "<<ptr<<endl;
	cout<<"First index value is : "<<*ptr<<endl;
	cout<<"Second index adress is : "<<ptr+1<<endl;
	cout<<"Second Index value is : "<<*(ptr+1)<<endl;
	
	return 0;
}