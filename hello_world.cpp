#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main()
{
	cout << "Hello world!" << endl;
	cout << "This is just learning C++\n";
	cout << endl;

	cout << "   /|" << endl;
	cout << "  / |" << endl;
	cout << " /  |" << endl;
	cout << "/___|" << endl;
	cout << endl;

	//// VARIABLES
	cout << "VARIABLES" << endl;
	string name = "Abdu";
	int age = 28;
	cout << "My name is " << name << " and I am " << age << "year old" << endl;


	//// DATATYPES
	cout << "DATATYPES" << endl;
	//Char
	char grade = 'A';

	// String
	string text = "IIM A";

	// Numbers
	int age_s = 69;
	double gpa = 3.45;
	bool ismale = true;

	cout << text << endl;
	cout << "length of text is " << text.length() << endl;
	cout << text[4] << endl;

	text[4] = 'B';
	cout << text << endl;

	//// Maths
	cout << 5 + 6 << endl;


	int wnum = 5;

	wnum--;
	
	cout << wnum << endl;

	cout << pow(2, 6) << endl;



	//// INPUT
	int ages_;
	cout << "Enter your age: ";
	cin >> ages_;

	cout << "You are " << ages_ << " old" << endl;

	string name_;
	cout << "Enter your name: ";
	cin.ignore();  // use this before getline()
	getline(cin, name_);
	
	cout << "Your name is " << name_ << endl;

	char grad;
	cout << "Enter your grade: ";
	cin >> grad;
	cout << "your grade is " << grad;



	return 0;


}