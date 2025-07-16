#include<iostream>
using namespace std;
int main(){
	int arr[10],max,min,maxindex=0,minindex=0;
	cout<<"Please enter the elements of the array : ";
	for(int i=0;i<10;i++){
		cin>>arr[i];
}
	for(int i=0;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
			maxindex=i;
	}
		if(min>arr[i]){
			min=arr[i];
			minindex=i;
			
		}
	}
	cout<<"Maximium value in the array is "<<max<<" at index "<<maxindex<<endl;
	cout<<"Minimum value in the array is "<<min<<" at index "<<minindex<<endl;
	
	
	return 0;
}