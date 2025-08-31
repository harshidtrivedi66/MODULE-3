//2. Basic Input/Output

//Write a C++ program that accepts user input for their name and age and then displays a personalized greeting.

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name;
	int age;
	
	cout<<"Enter your name : "<<endl;
	cin>>name;

	cout<<"Enter your age : "<<endl;
	cin>>age;
	
	cout<<"Name is : "<<name<<endl;
	
	cout<<"Age is : "<<age<<endl;
		
	return 0;
}
