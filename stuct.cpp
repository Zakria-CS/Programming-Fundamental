#include<iostream>
using namespace std;
struct student{
	string name;
	int id;
	string degree;
	string university;
	float fee;
};
int main(){
	student a;
	a.name="Muhammad Zakria";
	a.id=12345;
	a.degree="Computer Science";
	a.university="University Of Lahore";
	a.fee=200000.0;
	
	cout<<"Your Detail is : "<<endl;
	cout<<"Name is : "<<a.name<<endl;
	cout<<"Id is : "<<a.id<<endl;
	cout<<"Degree is : "<<a.degree<<endl;
	cout<<"University is : "<<a.university<<endl;
	cout<<"Fee is : "<<a.fee<<endl;
	
	return 0;
}