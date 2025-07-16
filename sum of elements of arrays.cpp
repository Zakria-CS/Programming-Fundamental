#include<iostream>
using namespace std;
int main(){
	//declaration of array and sum variable
	int a[10],sum=0;
	cout<<"PLease enter the value of the array.\n";
	//using for loop to take input from user 
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	//using for loop to add all elements of array
	for(int i=0;i<10;i++){
		/*working of sum
		first time sum value is 0 
		let user enter 5 ,4,3
		0=0+5 fisrt round
		5=5+4 second round
		9=9+3 third round
		final result will be 12 and control exist from loop
		then display our result.*/
		sum=sum+a[i];
	}
	//here final result will be displayed.
	cout<<"Your Final result is : "<<sum<<endl;
	
	
	
	return 0;
}