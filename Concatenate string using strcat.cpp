#include<iostream>
#include<string>
using namespace std;
int main(){
	
	char  A[20],B[20];
	cout<<"Enter Your Fisrt string : ";
	cin.getline(A,20);
	cout<<"Enter Your Second string : ";
	cin.getline(B,20);
	
	cout<<"Your Fisrt string is : "<<A<<endl;
	cout<<"Your Fisrt string length is "<<strlen(A) <<endl;
	cout<<"Your Second string is : "<<B<<endl;
	cout<<"Your Second string length is "<<strlen(B) <<endl;
	strcat(A,B);
	
	cout<<"Concatenate String is  : "<<A<<endl;
	cout<<"Now Your Final string length is : "<<strlen(A);
	
	return 0;
}