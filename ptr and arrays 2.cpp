#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,3,4,5,6};
	int *ptr=arr;
	
	for(int i=0;i<5;i++){
		cout<<"Adress of index "<<i<<" is : "<<(ptr+i)<<endl;
		cout<<"Value at index "<<i<<" is : "<<*(ptr+i)<<endl;
	}
	return 0;
}