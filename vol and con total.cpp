#include<iostream>
using namespace std;
int main(){
	char name[50];
	cout<<"Enter any string ";
	cin.getline(name,50);
	
	int vol=0;
	int con=0;
	for(int i=0;name[i]!='\0';i++){
		if(name[i]>=65||name[i<=90&&name[i]>=97]||name[i]<=122){
			if(name[i]=='a'||name[i]=='A'||name[i]=='e'||name[i]=='E'||name[i]=='i'||name[i]=='I'||name[i]=='o'
			||name[i]=='O'||name[i]=='u'||name[i]=='U'){
				vol++;
			}
			else{
				con++;
			}
		}
	}
	cout<<"Total number of vovel : "<<vol<<endl;
	cout<<"Total number of con : "<<con<<endl;
	
	return 0;
	
}