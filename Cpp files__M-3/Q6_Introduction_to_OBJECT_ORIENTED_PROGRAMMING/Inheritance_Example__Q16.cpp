//Inheritance Example

//Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. Demonstrate reusability through inheritance.

#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    int rollNo;

public:
    void setStudent(string n, int a, int r) {
        setPerson(n, a);   // reuse base class function
        rollNo = r;
    }

    void displayStudent() {
        displayPerson();   // reuse base class display
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacher(string n, int a, string s) {
        setPerson(n, a);   // reuse base class function
        subject = s;
    }

    void displayTeacher() {
        displayPerson();   // reuse base class display
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s1;
    Teacher t1;

    s1.setStudent("Harshid", 20, 101);
    t1.setTeacher("Dev", 35, "Mathematics");

    cout << "--- Student Info ---" << endl;
    s1.displayStudent();

    cout << "\n--- Teacher Info ---" << endl;
    t1.displayTeacher();

    return 0;
}

