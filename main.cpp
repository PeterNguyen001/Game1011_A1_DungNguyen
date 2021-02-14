#include <string>
#include <iostream>

#include "Person.h"
#include "Student.h"
#include"Survey.h"

using namespace std;

int main()
{
	Survey survey;
	int size;
	do
	{
		cout << "Please enter a number (max: 500): ";
		cin >> size;
	} while (size > 500);
	survey.setSize(size);
	survey.Process();


	cout << "Non gaming students:\n"
		<< "  Average age: " << survey.getAverageNonGamerAge() << endl
		<< "  Average hours: " << survey.getAverageNonGamerHours() << endl
		<< "  Most favorite service: " << survey.getMostService() << endl << endl;
	
	cout << "Gaming students:\n"
		<< "  Average age: " << survey.getAverageGamerAge() << endl
		<< "  Average hours: " << survey.getAverageGamerHours() << endl
		<< "  Most favorite service: " << survey.getMostDevice() << endl << endl;

	survey.DeleteList();
	return 1;

}