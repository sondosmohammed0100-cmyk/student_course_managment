#ifndef STUDENT_H_
#define STUDENT_H_
#include "Person.h"
class Student:public Person
{
private:
	int m_id;
	double m_gpa;
public:
	Student(int id,string n ,double gpa );
	int get_Id();
	double get_GPA();
	//inline bool operator==(const X& lhs, const X& rhs) { /* do actual comparison */ }
	bool operator==(const double gpa);

};
#endif // !STUDENT_H_


