#include<iostream>
using namespace std;
int main(){
	int a [10]={1,2,3,4,5,6,7,8,9,11};
	int even=0,odd=0;
	for(int i=0;i<10;i++){
		if(a[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	cout<<"Total even number in the array : "<<even<<endl;
	cout<<"Total odd number in the array : "<<odd<<endl;
	return 0;
}