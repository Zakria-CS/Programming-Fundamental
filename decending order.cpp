#include<iostream>
using namespace std;
int main(){
	int arr[5],n;
	cout<<"Please enter the element of the array ";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
			n=arr[i];
			arr[i]=arr[j];
			arr[j]=n;	
			}
		}
	}
	cout<<"Values after decending  order : "<<endl;
	for(int i=4;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	
	return 0;
	
}