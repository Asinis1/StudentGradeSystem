#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

const unsigned char PASSED = 1 << 0;
const unsigned char FAILED = 1 << 1;
const unsigned char EXEMPT = 1 << 2;

struct Student
{
    int id;
    string name;
    float grade;
    unsigned char status;

    Student* next;
};

Student* createStudent(int id, string name, float grade);
void printStudent(Student* student);

#endif