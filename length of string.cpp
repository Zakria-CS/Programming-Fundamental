#include<iostream>
using namespace std;
int main(){
	char name[50];
	cout<<"Enter any string ";
	cin.getline(name,50);
	
	int count=0;
	for(int i=0;name[i]!='\0';i++){
		count++;
	}
	cout<<"Entered String Length is "<<count<<endl;
	
	return 0;
	
}