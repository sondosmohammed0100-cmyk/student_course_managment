#include <iostream>
#include"Managment.h"

int main()
{

//Global Variables
     int id = 0;
     string name = "";
     double gpa = 0;
    int num_student=0;
    int num_course=0;
    int id_course = 0;
    string name_course = "";
    double credit_Hour = 0;

// make object from Student Management Class
     Managment m1;
   
//commands of Operations
    
    cout << "\nPlease follow these commands" << endl;
    cout << "\n      Add --> for adding new student\n ";
    cout << "\n      Remove --> for delete student\n";
    cout << "\n      Search --> for finding student\n";
    cout << "\n      Print --> for Display all students\n";
    cout << "\n      Enroll --> for Enroll student in a course\n";
    cout << "\n      P_Courses --> for print courses student\n";
    cout << "\n      Sort --> for sort student by GPA\n";
    cout << "\n      count_if --> for Count number of students\n";
    cout << "\n      Exit --> for finishing the program\n";
    cout << "\nEnter command" << endl;
    string command;
    while (true) {

        getline(cin, command);
        for (auto& c : command) {

            c = tolower(c);

        }
        
        if (command == "exit") {
            cout << "\n**********GoodBy***********" << endl;
            break;
        }
        else if(command == "add"){
            
            cout << "How many students want to add: ";
            cin >> num_student;
        for (int i = 0;i < num_student;i++) {
                cout << "\nStudent" << i + 1 << endl;
                cout << "Id: ";
                cin >> id;
                cout << "name: ";
                cin >> name;
                cout << "Gpa: ";
                cin >> gpa;
                m1.Add_Student(id,name, gpa);
            }
        cin.ignore();

        }
        else if (command == "remove") {
            cout << "\n Enter Id of Student: ";
            cin >> id;
            m1.Remove_Student(id);
            cin.ignore();

        }
        else if (command == "search") {
            cout << "\n Enter the id: ";
            cin >> id;

            m1.Search_Student(id);
            cin.ignore();
        }
        else if(command == "print"){

            cout << "\n All Students\n";

            m1.Print_All_Students();
        }
        else if (command == "enroll") {

            


        }
        else if (command == "sort") {
            m1.Sort_Students();
            cout << "Students After Sorting" << endl;
            m1.Print_All_Students();

        }
        else if (command == "p_Courses") {

        }
        else if (command == "count_if") {
            cout << "\nEnter the Gpa " << endl;
            cin >> gpa;
            m1.Count_Student_if(gpa);
            cin.ignore();

        }
        else if (command == "count") {
            cout << "\nEnter the Gpa " << endl;
            cin >> gpa;
            m1.Count_Student(gpa);
            cin.ignore();

        }

        else {
            cout << "Command not Right" << endl;
        }




    }

    
    
    
    
}

