//C++ program to check a person is Eligable for voting or not
#include<iostream>
using namespace std;

int main()
{
	int age;

	cout<<"Enter your age : ";
	cin>>age;

	//person is teenager or not
	//>=13 and <=19
	if(age>=13 && age<=19)
	{
		cout<<"You are a Teenager"<<endl;
	}
	else
	{
		cout<<"You are not a Teenager"<<endl;
	}


	//condition to check voting eligility
	if(age>=18)
	{
		cout<<"You are eligible for voting"<<endl;
	}
	else
	{
		cout<<"You are not eligible for voating"<<endl;
	}

	return 0;
}
