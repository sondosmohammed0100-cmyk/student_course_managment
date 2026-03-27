#ifndef PERSON_H_
#define PERSON_H_
#include<string>
using namespace std;
class Person
{
protected:
	string m_name;

public:
	Person(string n);
	string get_name();
};

#endif // !PERSON_H_


