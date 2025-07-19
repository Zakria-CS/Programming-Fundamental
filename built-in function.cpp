#include<iostream>
#include<string>
using namespace std;
int main(){
	
	char  A[20],B[20];
	cout<<"Enter Your string : ";
	cin.getline(A,20);
	
	cout<<"Your string is : "<<A<<endl;
	cout<<"Your string length is "<<strlen(A) <<endl;
	strcpy(B,A);
	cout<<"String Copy is : "<<B<<endl;
	
	return 0;
}