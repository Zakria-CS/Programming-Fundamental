#include<iostream>
#include<string>
using namespace std;
int main(){
	char A[20];
	cout<<"Please Enter String in lower Case : ";
	cin.getline(A,20);
	
	cout<<"Your Original String is : "<<A<<endl;
	cout<<"Your String in Upper case is : "<<strupr(A)<<endl;
	
	return 0;
}