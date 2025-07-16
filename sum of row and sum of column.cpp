#include<iostream>
using namespace std;
int main(){
	//declaration of variable for row and column.
	int row,col;
	cout<<"Please Enter the number of row : ";
	cin>>row;
	cout<<"Please Enter the number of the column : ";
	cin>>col;
	
	int arr[row][col];
	
	//taking element of array input from user.
	cout<<"Please Enter the elements of array : ";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	
	//sum of row and printing them
	cout<<"\nSum of row : "<<endl;
	for(int i=0;i<row;i++){
		int sum=0;
		for(int j=0;j<col;j++){
			sum=sum+arr[i][j];
			
		}
			cout<<"Row number "<<i<<" sum is "<<sum<<endl;
	}
	
	//sum of column and printing them
	cout<<"\nSum of Column : "<<endl;
	for(int i=0;i<col;i++){
		int sum=0;
		for(int j=0;j<row;j++){
			sum=sum+arr[j][i];

		}
		cout<<"column number "<<i<<" sum is "<<sum<<endl;
		
	}
	
	
	return 0;
}