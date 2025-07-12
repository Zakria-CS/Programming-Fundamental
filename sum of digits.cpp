//Here is a simple program which add the all digit entered by user.
#include<iostream>
using namespace std;
int main(){
	int n,sum=0;  //initialization of sum and n variables
	
	cout<<"Please Enter a number : ";
	cin>>n;  //asking user to enter a number 
	//using loop to add the all digits
	for(int i=0;n>0;n=n/10){
		/*n=n/10; is storing integer value in program
		like we enter 237 for n.
		237/10=23.7   here now n contain 23 by automatic 
		type casting.
		*/
		
		sum=sum+n%10;  /* % storing the reminder value and then
		adding in sum varible. like 237%10. first time reminder is 
		7 . so sum already is zero which is 
		0=0+7;
		23%10=3;
		7=7+3
		10=10+2
		12 is final result.
		*/
	} 
	// Here printing the overall result.
	cout<<"Sum is : "<<sum<<endl;
	
	return 0;
}