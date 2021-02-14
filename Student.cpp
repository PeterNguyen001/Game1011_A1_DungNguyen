#pragma once
#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

Student::Student()
{
	setName("");
	setAge(1);
	setCollege("");
	setProgram("");
	setSemester(0);
}

Student::Student(string name, int age, string college, string program, int semester) : Person(name, age)
{
	setCollege(college);
	setProgram(program);
	setSemester(semester);
}

NonGamingStudent::NonGamingStudent()
{
	setName("");
	setAge(1);
	setCollege("");
	setProgram("");
	setSemester(0);
	setService("");
	setHours(0);
}

NonGamingStudent::NonGamingStudent(string name, int age, string college, string program, int semester, string service,
	int hour) : Student(name, age, college, program,semester)
{
	setService(service);
	setHours(hour);
}

GamingStudent::GamingStudent()
{
	setName("");
	setAge(0);
	setCollege("");
	setProgram("");
	setSemester(0);
	setDevice("");
	setHours(0);
}

GamingStudent::GamingStudent(string name, int age, string college, string program, int semester, string device,
	int hour) : Student(name, age, college, program, semester)
{
	setDevice(device);
	setHours(hour);
}
