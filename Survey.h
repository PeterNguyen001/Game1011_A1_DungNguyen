#pragma once
#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

class Survey
{
private:
	int m_size;
	Student** m_list;

	float m_nonGamerSize = 0.0f;
	float m_gamerSize = 0.0f;


	float m_totalNonGamerHours=0.0f;
	float m_totalGamerHours=0.0f;
	float m_totalNonGamerAge=0.0f;
	float m_totalGamerAge=0.0f;

	float m_averageNonGamerAge;
	float m_averageGamerAge;
	float m_averageNonGamerHours ;
	float m_averageGamerHours ;

	string m_service[4] = { "Netflix","Disney Plus","Hulu","Amazon Prime" };
	string m_device[3] = { "PC","PS","Xbox" };

	string m_mostService;
	string m_mostDevice;
public:
	void setSize(int size)
	{
		m_size = size;
	}
	int getSize()
	{
		return m_size;
	}

	float getAverageNonGamerAge()
	{
		return m_averageNonGamerAge;
	}
	float getAverageGamerAge()
	{
		return m_averageGamerAge;
	}

	float getAverageNonGamerHours()
	{
		return m_averageNonGamerHours;
	}
	float getAverageGamerHours()
	{
		return m_averageGamerHours;
	}

	string getMostService()
	{
		return m_mostService;
	}
	string getMostDevice()
	{
		return m_mostDevice;
	}

	int RandomAge();
	int RandomHour();
	string RandomService();
	string RandomDevice();

	void Process();

	void DeleteList();
};

