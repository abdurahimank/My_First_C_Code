#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string getDayofweek(int dayNum) {
	string dayName;

	switch (dayNum) 
	{
	case 0:
		dayName = "Sunday";
		break;
	case 1:
		dayName = "Monday";
		break;
	case 2:
		dayName = "Tuesday";
		break;
	case 3:
		dayName = "Wednesday";
		break;
	case 4:
		dayName = "Thursday";
		break;
	case 5:
		dayName = "Friday";
		break;
	case 6:
		dayName = "Saturday";
		break;
	default:
		dayName = "Invalid day number";

	return dayName;
	}
	

}

int main()
{

	//// SWITCH CASE
	cout << getDayofweek(4) << endl;

	cout << getDayofweek(2) << endl;



	//// WHILE LOOP
	int i = 1;

	while (i <= 5) 
	{
		cout << i << endl;
		i++;

	}
	cout << "next" << endl;
	int j = 6;
	do {
		cout << j << endl;
		j++;
	} while (j <= 5);



	//// FOR LOOP
	for(int i = 9; i <= 15; i++)
	{
		cout << i << endl;
	
	}



	return 0;
}