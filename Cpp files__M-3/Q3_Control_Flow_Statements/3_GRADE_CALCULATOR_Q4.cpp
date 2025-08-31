//GRADE CALCULATOR:

//Write a C++ program that takes a student’s marks as input and calculates the grade based on if-else conditions.

#include<iostream>

using namespace std;

int main()
{
	int marks;
	
	cout<<"Check the grade of the student and check his/her grade by entering marks"<<endl<<endl;
	
	cout<<"First enter marks and we will display grade: ";
	cin>>marks;
	
	if(marks >= 90 && marks <= 100)
	{
		cout<<"Student got A grade"<<endl;
	}
	
	else if(marks >= 80 && marks <= 89)
	{
		cout<<"Student got B grade"<<endl;
	}
	
	else if(marks >= 70 && marks <= 79)
	{
		cout<<"Student got C grade"<<endl;
	}
	
	else if(marks >= 50 && marks <= 69)
	{
		cout<<"Student got D grade"<<endl;
	}
	
	else {
		cout<<"He/She failed"<<endl;
	}
	
	return 0;
}
