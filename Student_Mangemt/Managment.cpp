#include "Managment.h"
void Managment::Add_Student(int id, string name, double gpa)
{
    if (gpa < 0 || gpa > 4) {
        cout << "\nGPA must be between 0 and 4" << endl;
        return;
    }

    
    for (auto& s : students) {
        if (s.get_Id() == id) {
            cout << "\nID must be unique" << endl;
            return;
        }
    }

    
    Student student(id, name, gpa);
    students.push_back(student);
	cout << "\nStudent Added succesfully" << endl;
}

void Managment::Remove_Student(int id)
{
    for (auto it = students.begin();it != students.end();) {
        if (it->get_Id() == id) {
            it = students.erase(it);
            cout << "\nStudent removed Successfully" << endl;
        }
        else {
            ++it;
            
        }

   }

}

void Managment::Print_All_Students()
{
    
	
	for (auto& s : students) {
		cout << "\nId: " << s.get_Id()<<" Name: "<< s.get_name() <<" GPA: " << s.get_GPA() <<endl;
		
		
	}
}
bool func(Student &s1, Student &s2) {
    return s1.get_GPA() > s2.get_GPA();

}
void Managment::Sort_Students()
{
    
  // when using the lambda function
//[captures](Params){body}
    auto compare = [](  Student &s1,Student &s2) { return s1.get_GPA() > s2.get_GPA(); };

    sort(students.begin(), students.end(), compare);
       
// when I create a compare function 
    /*sort(students.begin(), students.end(), func);*/
   
}

void Managment::Search_Student(int id)
{
    auto found = [&id](Student& s) {
       return s.get_Id() == id;};
   

   auto it= find_if(students.begin(), students.end(), found);
   if (it != students.end()) {
       cout << "Student founded" << endl;
       cout << "\nId: " << it->get_Id() << " Name: " << it->get_name() << " GPA: " << it->get_GPA() << endl;
   }
   else {
       cout << "\n Not Found" << endl;
   }

}

void Managment::Count_Student_if(double gpa)
{
   
    auto count_student = [&gpa](Student s) {
        return  s.get_GPA()>gpa;
        };
   auto num_student= count_if(students.begin(), students.end(), count_student);
    cout <<"Number of student is:  "<< num_student << endl;
    
}


void Managment::Count_Student(double gpa)
{
  
    auto num_student = count(students.begin(), students.end(),gpa);
    cout << "Number of student is:  " << num_student << endl;
}





