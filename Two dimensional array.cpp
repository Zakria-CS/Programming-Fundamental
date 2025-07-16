#include<iostream>
using namespace std;
int main(){
	int arr[3][3];
	cout<<"Please enter the value of the two D array.";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"\nYour Entered Values are: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Your Value at index "<<i<<" "<<j<<" is "<<arr[i][j]<<endl;
		}
	}
	
	
	return 0;
}