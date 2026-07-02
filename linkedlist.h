#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "student.h"

class LinkedList
{
private:

    Student* head;

public:

    LinkedList();

    void addStudent(int id, string name, float grade);

    void displayStudents();

    Student* searchStudent(int id);

    void deleteStudent(int id);

    Student* getHead();

};
#endif