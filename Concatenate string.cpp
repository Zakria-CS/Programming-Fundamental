#include<iostream>
using namespace std;
int main(){
	char A[50],B[50],C[50],i,j;
	cout<<"Please enter the first string : ";
	cin.getline(A,50);
	cout<<"Please enter the second string : ";
	cin.getline(B,50);
	for(i=0;A[i]!='\0';i++){
		C[i]=A[i];
	}
	for(j=0;B[j]!='\0';j++){
		C[i]=B[j];
		i++;
	}
	
	cout<<"Your Final Result is : "<<C;
	return 0;
}