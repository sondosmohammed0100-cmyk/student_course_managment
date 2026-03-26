#ifndef MANAGMENT_H_
#define MANAGMENT_H_
#include"Person.h"
#include"Student.h"
#include<vector>
#include<iostream>
#include<algorithm>

#include<set>
class Managment
{
private:
	vector<Student>students;
	
public:
	
	void Add_Student(int id, string name, double gpa);
	void Remove_Student(int id);
	void Print_All_Students();
	void Sort_Students();
	void Search_Student(int id);
	void Count_Student_if(double gpa);
	void Count_Student(double gpa);
	



};
#endif // !MANAGMENT_H_


