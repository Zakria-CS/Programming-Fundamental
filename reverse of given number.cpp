#include<iostream>
using namespace std;
int main(){
	int a,reverse=0;
	cout<<"Please enter a number : ";
	cin>>a;
	while(a>0){
		reverse=(reverse*10)+a%10;
		/*for example user enter 234.
		first time reverse value is 0
		then 0*10=0+234/10 
		reverse = 0+4 now value of reverse is 4
		second time
		reverse = 4*10 +23/10
		40+3
		third time
		reverse =43*10+2/10
		which become 432.
		a%10 is given us reminder .*/
		a=a/10;
		/*a=a/10; dividing value of a by 10 and 
		storing value before fraction
		like first time division 234/10=23.4.
		here now value of a is 23 by automatic type casting*/
	}
	cout<<"Your value after reverse is "<<reverse<<endl;
	return 0;
}