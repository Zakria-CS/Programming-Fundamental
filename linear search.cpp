#include<iostream>
using namespace std;
int main(){
	int arr[10],key,flag=0,pos=0;
	cout<<"Please enter the element of the array : ";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	cout<<"Please enter the value you want to find : ";
	cin>>key;
	for(int i=0;i<10;i++){
		if(key==arr[i]){
			pos=i;
			flag=1;
			break;
		}
	}
	if(flag==1){
		cout<<"Your value is found at index "<<pos<<" with value "<<key<<endl;
		cout<<"Value of flag is "<<flag<<endl;
	}
	else{
		cout<<"Your values "<<key<<" is not found!"<<endl;
		cout<<"value of flag is "<<flag<<endl;
	}
	
	return 0;
}