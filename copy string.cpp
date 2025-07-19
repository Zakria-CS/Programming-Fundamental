#include<iostream>
using namespace std;
int main(){
	
	char arr[50],arr2[50];
	
	cout<<"Please enter the value of the first array : ";
	cin.getline(arr,50);
	
	for(int i=0;i<50;i++){
		arr2[i]=arr[i];
	}
	cout<<"Your Fisrt Array value is : "<<arr<<endl;
	cout<<"Your Second array is : "<<arr2<<endl;
	
	return 0;
	
}