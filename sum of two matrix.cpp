#include<iostream>
using namespace std;
int main(){
	int row,col;
	cout<<"Please enter the  Row : ";
	cin>>row;
	cout<<"Please enter the column : ";
	cin>>col;
	int arr1[row][col],arr2[row][col],sum[row][col];
	
	
	cout<<"\nPlease Enter the elements of first array : ";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"\nPlease enter the elements of second array : ";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr2[i][j];
		}
	}
	cout<<"\nFirst Array Elements are "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr1[i][j]<<" ";
		}
	}
	cout<<"\nSecond Array Elements are "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr2[i][j]<<" ";
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	cout<<"\nHere is final result of your two matrix sum : "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<sum[i][j]<<" ";
		}
	}
	
	return 0;

	
}