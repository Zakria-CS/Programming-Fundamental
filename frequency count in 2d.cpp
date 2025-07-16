#include<iostream>
using namespace std;
int main(){
	int arr[3][3],fre=0,n;
	cout<<"Please enter the value of the two D array.";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Please enter the number that you want to check frequency. ";
	cin>>n;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(n==arr[i][j]){
				fre++;
			}
		}
	}
	cout<<"Count Frequency of your etered value of "<<n<<" is "<<fre<<endl;
	
	return 0;
}