#include<iostream>
using namespace std;
int main(){
	int a[5];
	cout<<"Please enter the element of the array : ";
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<"Your values in orginal ordered are : "<<endl;
	for(int i=0;i<5;i++){
		cout<<"Value at index "<<i<<" is "<<a[i]<<endl;
	}
	cout<<"\Values in reverse order : \n";
	for(int i=4;i>=0;i--){
		cout<<"Value at index "<<i<<" is "<<a[i]<<endl;
	}
	
	
	return 0;
}