#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"ENTER A NUMBER : ";
	cin>>n;
	int sum=0;
	
	
	cout<<"Your program output is "<<endl;
	
	for(int i=0;n>=i;n--){
		cout<<n<<endl;
		sum+=n;
		
	}
	cout<<"Your final resut is : "<<sum<<endl;
	
	
	
	return 0;
}