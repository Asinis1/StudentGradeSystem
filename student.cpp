#include <iostream>
#include "student.h"
using namespace std;

Student* createStudent(int id, string name, float grade)
{
    Student* newStudent = new Student;

    newStudent->id = id;
    newStudent->name = name;
    newStudent->grade = grade;
    newStudent->next = nullptr;

    if (grade >= 50)
        newStudent->status = PASSED;
    else
        newStudent->status = FAILED;

    return newStudent;
}

void printStudent(Student* student)
{
    cout << "---------------------------" << endl;
    cout << "ID     : " << student->id << endl;
    cout << "Name   : " << student->name << endl;
    cout << "Grade  : " << student->grade << endl;

    cout << "Status : ";

    if(student->status & PASSED)
        cout << "Passed";

    else if(student->status & FAILED)
        cout << "Failed";

    else if(student->status & EXEMPT)
        cout << "Exempt";

    cout << endl;
}

