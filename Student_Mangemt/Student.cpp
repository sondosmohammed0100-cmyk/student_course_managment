#include "Student.h"

Student::Student(int id,string n ,double gpa):Person(n)
{
	m_id = id;
	m_gpa = gpa;
}

int Student::get_Id()
{
	return m_id;
}

double Student::get_GPA()
{
	return m_gpa;
}

bool Student::operator==(const double gpa)
{
	return this->get_GPA()==gpa;
}
