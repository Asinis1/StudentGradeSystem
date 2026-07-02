#include <iostream>
#include "linkedlist.h"

using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
}

void LinkedList::addStudent(int id, string name, float grade)
{
    Student* newStudent = createStudent(id, name, grade);

    if(head == nullptr)
    {
        head = newStudent;
        return;
    }

    Student* temp = head;

    while(temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newStudent;
}

void LinkedList::displayStudents()
{
    if(head == nullptr)
    {
        cout << "No students found." << endl;
        return;
    }

    Student* temp = head;

    while(temp != nullptr)
    {
        printStudent(temp);
        temp = temp->next;
    }
}

Student* LinkedList::searchStudent(int id)
{
    Student* temp = head;

    while(temp != nullptr)
    {
        if(temp->id == id)
            return temp;

        temp = temp->next;
    }

    return nullptr;
}

void LinkedList::deleteStudent(int id)
{
    if(head == nullptr)
        return;

    if(head->id == id)
    {
        Student* deleted = head;
        head = head->next;
        delete deleted;
        return;
    }

    Student* prev = head;
    Student* current = head->next;

    while(current != nullptr)
    {
        if(current->id == id)
        {
            prev->next = current->next;
            delete current;
            return;
        }

        prev = current;
        current = current->next;
    }
}

Student* LinkedList::getHead()
{
    return head;
}