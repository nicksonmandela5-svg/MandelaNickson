#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: inherits from Person
class Student : public Person {
protected:
    string studentID;

public:
    void setStudentDetails(string id) {
        studentID = id;
    }

    void displayStudent() {
        displayPerson(); // Inherited from Person
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class: inherits from Student
class UniversityStudent : public Student {
private:
    string course;

public:
    void setCourse(string c) {
        course = c;
    }

    void displayUniversityStudent() {
        displayStudent(); // Inherited from Student
        cout << "Course: " << course << endl;
    }
};

int main() {
    UniversityStudent student;

    // Using inherited and locally defined members
    student.setPersonDetails("John", 21);
    student.setStudentDetails("STU102");
    student.setCourse("Computer Science");

    cout << "UNIVERSITY STUDENT DETAILS" << endl;
    cout << "--------------------------" << endl;

    student.displayUniversityStudent();

    return 0;
}