#include<iostream>
using namespace std;
int main(){
	//declaration of variables
	int n, factorial=1;
	/* 1 is assigned to factorial because 
	multiplication of 1 with any number does 
	not cause to any change in number.*/
	
	//asking for value from user
	cout<<"Please enter a number : ";
	cin>>n;
	
	/*using while loop and condition is 
	n greater than or equal to 1.*/
	while(n>=1)	
	{
		factorial=factorial*n; //calculating factorial
		n--; //decrement in user entered value 
		
	}
	
	//printing whole factorial 
	cout<<"Factorial of given value is : "<<factorial;
	
	return 0;
}