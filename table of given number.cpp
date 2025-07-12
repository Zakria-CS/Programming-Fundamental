#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Please enter a number : ";
	cin>>n;
	cout<<"\nHere is your table : \n";
	for(int i=1;i<=10;i++){
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
	return 0;
}