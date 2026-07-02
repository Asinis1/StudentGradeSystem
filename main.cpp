#include <iostream>
#include "linkedlist.h"
#include "file.h"

using namespace std;

int main()
{
    LinkedList list;

    int choice;

    do
    {
        cout << "\n===== Student Grade Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Save to File\n";
        cout << "6. Load from File\n";
        cout << "7. Exit\n";

        cout << "\nChoice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
        {
            int id;
            string name;
            float grade;

            cout << "ID: ";
            cin >> id;

            cout << "Name: ";
            cin >> name;

            cout << "Grade: ";
            cin >> grade;

            list.addStudent(id, name, grade);

            cout << "Student added.\n";
            break;
        }

        case 2:
            list.displayStudents();
            break;

        case 3:
        {
            int id;

            cout << "Enter ID: ";
            cin >> id;

            Student* student = list.searchStudent(id);

            if(student != nullptr)
                printStudent(student);
            else
                cout << "Student not found.\n";

            break;
        }

        case 4:
        {
            int id;

            cout << "Enter ID: ";
            cin >> id;

            list.deleteStudent(id);

            cout << "Student deleted.\n";

            break;
        }

        case 5:
            saveToFile(list, "students.txt");
            break;

        case 6:
            loadFromFile(list, "students.txt");
            break;

        case 7:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while(choice != 7);

    return 0;
}