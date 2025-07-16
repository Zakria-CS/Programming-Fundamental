#include<iostream>
using namespace std;
int main(){
	int arr[5][5];
	cout<<"Please enter the element of the array. ";
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"\nRight Diagonal Elements are : "<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i==j){
				cout<<arr[i][j]<<" ";
			}
		}
	}
	cout<<"\nLeft Diagonal Elements are : "<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i+j==4){
				cout<<arr[i][j]<<" ";
			}
		}
	}
	
	
	return 0;
}