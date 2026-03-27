#include <iostream>
#include"Managment.h"

int main()
{

//Global Variables
     int id = 0;
     string name = "";
     double gpa = 0;
    int num_student=0;
    int num_courses=0;
    int id_course = 0;
    string name_course = "";
    

// make object from Student Management Class
     Managment m1;
   
//commands of Operations
    
    cout << "\nPlease follow these commands" << endl;
    cout << "\n***********************************************" << endl;
    cout << "\n      Add --> for adding new student\n ";
    cout << "\n      Remove --> for delete student\n";
    cout << "\n      Search --> for finding student\n";
    cout << "\n      Print --> for Display all students\n";
    cout << "\n      Enroll --> for Enroll student in a course\n";
    cout << "\n      Display --> for print courses of student\n";
    cout << "\n      Sort --> for sort student by GPA\n";
    cout << "\n      count_if --> for Count number of students\n";
    cout << "\n      Exit --> for finishing the program\n";
    cout << "\n***********************************************" << endl;
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

            cout << "How many courses want to add: ";
            cin >> num_courses;
            for (int i = 0;i < num_courses;i++) {
                cout << "\nCourse" << i + 1 << endl;
                cout << "Id of Student: ";
                cin >> id;
                cout << "Id of course: ";
                cin >> id_course;
                cout << "name of course: ";
                cin.ignore();
                getline(cin, name_course);
                
                m1.Enroll_course(id, id_course, name_course);
                
            }
            cin.ignore();

        }
        else if (command == "sort") {
            m1.Sort_Students();
            cout << "Students After Sorting" << endl;
            m1.Print_All_Students();

        }
        else if (command == "display") {
            cout << "Id of Student: ";
            cin >> id;

            m1.DisplayCourses(id);
            cin.ignore();

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

