#include<iostream>
using namespace std;
int main(){
	int arr[10],fre=0,key;
	cout<<"Please enter the elements of the arrays : ";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	cout<<"Please Enter the Value That you Want to find frequency. ";
	cin>>key;
	for(int i=0;i<10;i++){
		if(key==arr[i]){
			fre++;
		}
	}
	cout<<"Frequency of "<<key<<" in the array is "<<fre<<endl;
	
	return 0;
}