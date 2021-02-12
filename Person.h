#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person
{
private:
	
    string m_name;
	int m_age;

public:
	
	Person();
	
	Person(string name, int age);

    virtual void setName(string name) 
	{
		m_name = name;
	}
	virtual  string getName() const
	{
		return m_name;
	}

	virtual  void setAge(int age)
	{
		m_age = age;
	}
	virtual  int getAge() const
	{
		return m_age;
	}

	virtual void displayInfor() = 0;
};

inline Person::Person()
{
	getName();
	getAge();
}

inline Person::Person(string name, int age)
{
	setName(name);
	setAge(age);
}

