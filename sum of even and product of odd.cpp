#include<iostream>
using namespace std;
int main(){
	int n,sum=0,product=1;
	cout<<"Please Enter a number ";
	cin>>n;
	int digit;
	for(int i=0;i<n;n=n/10){

		digit=n%10;
		if(digit%2==0){
			sum+=digit;
		}
		else{
			product*=digit;
		}
	}
	cout<<"Your Value for sum is "<<sum<<endl;
	cout<<"Your Value for Product is : "<<product<<endl;
	
	return 0;
	
}