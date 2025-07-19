#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Please enter the size of array. ";
	cin>>size;
	cin.ignore();
	
	char name[size];
	cout<<"Please enter Your name : ";
	cin.getline(name,size);
	
	for(int i=0;name[i]!='\0';i++){
		cout<<"character number "<<i<<" is : "<<name[i]<<endl;
		
	}
	
	
	
	return 0;
}