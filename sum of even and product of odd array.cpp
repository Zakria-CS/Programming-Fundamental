#include<iostream>
using namespace std;
int main(){
	int a [10]={1,2,3,4,5,6,7,8,9,11};
	int even=0,odd=1;
	for(int i=0;i<10;i++){
		if(a[i]%2==0){
			even=even+a[i];
		}
		else{
			odd=odd*a[i];
		}
	}
	cout<<"sum of even number in the array : "<<even<<endl;
	cout<<"product of odd number in the array : "<<odd<<endl;
}