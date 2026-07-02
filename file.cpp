#include <iostream>
#include <fstream>
#include "file.h"

using namespace std;

void saveToFile(LinkedList& list, const char* filename)
{
    ofstream file(filename);

    if (!file)
    {
        cout << "File could not be opened!" << endl;
        return;
    }

    Student* temp = list.getHead();

    while (temp != nullptr)
    {
        file << temp->id << " "
             << temp->name << " "
             << temp->grade << " "
             << (int)temp->status << endl;

        temp = temp->next;
    }

    file.close();

    cout << "Students saved successfully." << endl;
}

void loadFromFile(LinkedList& list, const char* filename)
{
    ifstream file(filename);

    if (!file)
    {
        cout << "File not found." << endl;
        return;
    }

    int id;
    string name;
    float grade;
    int status;

    while (file >> id >> name >> grade >> status)
    {
        list.addStudent(id, name, grade);
    }

    file.close();

    cout << "Students loaded successfully." << endl;
}