#ifndef MANAGMENT_H_
#define MANAGMENT_H_
#include"Person.h"
#include"Student.h"
#include<vector>
#include<iostream>
#include<algorithm>

#include<set>
#include<utility>
#include<map>
class Managment
{
private:
	vector<Student>students;
	map<int,set<pair<int, string>>> course_student;
	
public:
	void Add_Student(int id, string name, double gpa);
	void Remove_Student(int id);
	void Print_All_Students();
	void Sort_Students();
	void Search_Student(int id);
	void Count_Student_if(double gpa);
	void Count_Student(double gpa);
	void Enroll_course(int id_student,int id_course,string name_course);
	void DisplayCourses(int id_student);

};
#endif // !MANAGMENT_H_


