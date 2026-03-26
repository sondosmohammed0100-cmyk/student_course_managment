#include "Person.h"

Person::Person(string n)
{
	m_name = n;
}

string Person::get_name()
{
	return m_name;
}
