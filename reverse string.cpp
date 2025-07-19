#include<iostream>
#include<string>
using namespace std;
int main(){
	char A[20];
	cout<<"Please Enter String : ";
	cin.getline(A,20);
	
	cout<<"Your Original String is : "<<A<<endl;
	cout<<"Your String in Reverse  : "<<strrev(A)<<endl;
	
	return 0;
}