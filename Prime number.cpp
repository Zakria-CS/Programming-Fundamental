#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cout<<"Please enter a number : ";
	cin>>n;
	for(int i=1;n>=i;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"Entered Value is a Prime number "<<n<<endl;
		
	}
	else{
		cout<<"Entered Value is not prime number "<<n<<endl;
	}
	
	
	
	return 0;
}