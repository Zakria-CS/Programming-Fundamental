#include<iostream>
using namespace std;
int main(){
	int arr[3][3],even=0,odd=1;
	cout<<"Please enter the value of the two D array.";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"\nYour Entered Values are: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]%2==0){
				even=even+arr[i][j];
			}
			else{
				odd=odd*arr[i][j];
			}
		}
	}
	cout<<"Sum of Even number in your program are : "<<even<<endl;
	cout<<"Product of odd number in your program are : "<<odd<<endl;
	
	
	return 0;
}