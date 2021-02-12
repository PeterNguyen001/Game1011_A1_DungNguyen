#pragma once
#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

class Student : public Person
{
private:
	string m_college;
	string m_program;
	int m_semester;
public:
	Student();
	Student(string name, int age, string college, string program, int semester);

	void setCollege(string college)
	{
		m_college = college;
	}
	string getCollege()
	{
		return m_college;
	}

	void setProgram(string program)
	{
		m_program= program;
	}
	string getProgram()
	{
		return m_program;
	}

	void setSemester(int semester)
	{
		m_semester = semester;
	}
	int getSemester()
	{
		return m_semester;
	}
};

class NonGamingStudent : public Student
{
private:
	string m_service;
	int m_hours;
public:
	NonGamingStudent();
	NonGamingStudent(string name, int age, string college, string program, int semester, string service, int hour);

	void setService(string service)
	{
		m_service = service;
	}
	string getService()
	{
		return m_service;
	}

	void setHours(int hours)
	{
		m_hours = hours;
	}
	int getHours()
	{
		return m_hours;
	}
};

class GamingStudent : public Student
{
private:
	string m_device;
	int m_hours;
public:
	GamingStudent();
	GamingStudent(string name, int age, string college, string program, int semester, string device, int hour);

	void setDevice(string device)
	{
		m_device = device;
	}
	string getDevice()
	{
		return m_device;
	}

	void setHours(int hours)
	{
		m_hours = hours;
	}
	int getHours()
	{
		return m_hours;
	}
};