#include "Survey.h"
#include <time.h>
#include <stdlib.h>   

int Survey::RandomAge()
{

	int random = rand() % 11 + 18;
	return random;
}

int Survey::RandomHour()
{

	int random = rand() % 8 + 1;
	return  random;
}

string Survey::RandomService()
{
	string service[4] = {"Netflix","Disney Plus","Hulu","Amazon Prime"};

	int index = rand() % 4;
	return service[index];
}

string Survey::RandomDevice()
{
	string device[3] = { "PC","PS","Xbox"};
	int index = rand() % 3;
	return device[index];
}

void Survey::Process()
{
	srand(time(NULL));
	int service[4] = { 0,0,0,0};
	int device[3] = { 0,0,0};

	m_list = new Student * [m_size];

	for (int i = 0; i < m_size; i++)
	{	

		const int ranAge = RandomAge();
		const string ranService = RandomService();
		const string ranDevice = RandomDevice();
		const int ranHours = RandomHour();

		int random = rand() % 2;

		if (random == 0)
		{
			m_list[i] = new NonGamingStudent("",ranAge,"","",0,ranService,ranHours);

			m_nonGamerSize++;

			m_totalNonGamerAge += ranAge;
			m_totalNonGamerHours += ranHours;

			if (ranService == "Netflix")
			{
				service[0]++;
			}
			if (ranService == "Disney Plus")
			{
				service[1]++;
			}
			if (ranService == "Hulu")
			{
				service[2]++;
			}
			if (ranService == "Amazon Prime")
			{
				service[3]++;
			}
			delete m_list[i];
		}
		else if(random == 1)
		{
			m_list[i] = new GamingStudent("", ranAge, "", "", 0, ranDevice, ranHours);

			m_gamerSize++;

			m_totalGamerAge += ranAge;
			m_totalGamerHours += ranHours;

			if (ranDevice == "PC")
			{
				device[0]++;
			}
			if (ranDevice == "PS")
			{
				device[1]++;
			}
			if (ranDevice == "Xbox")
			{
				device[2]++;
			}
			delete m_list[i];
		}
	}

	m_averageNonGamerAge = m_totalNonGamerAge / m_nonGamerSize ;
	m_averageGamerAge = m_totalGamerAge / m_gamerSize;

	m_averageNonGamerHours = m_totalNonGamerHours / m_nonGamerSize;
	m_averageGamerHours = m_totalGamerHours / m_gamerSize;

	for (int i = 0; i < 4; i++)
	{
		int max = 0;
		if (service[i] > max)
		{
			max = service[i];
			m_mostService = m_service[i];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		int max = 0;
		if (device[i] > max)
		{
			max = device[i];
			m_mostDevice = m_device[i];
		}
	}

	
}

void Survey::DeleteList()
{
	delete [] m_list;
}
