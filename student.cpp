#include"student.h"
void student::create()
{
	cout << "\n\tNEW STUDENT ENTRY...\n";
	library::create();
	cin.ignore();
	do
	{
		cout << "\tEnter The Programme of The Student ";
		getline(cin, programme);
	} while (programme != "Bs" && programme != "Ms");
	cout << "\n\n\tStudent Record Created..";
}
void student::display()
{
	library::display();
	cout << "\tNO OF BOOK ISSUE: " << token << endl;
	cout << "\tPROGRAMME: " << programme << endl;
	if (token == 1)
	{
		cout << "\tBOOK No: " << bookno << endl;
	}
	cout << endl << endl;
}
double student::tellprice()
{
	return token;
}
string student::tellstatus()
{
	return bookno;
}
string student::tellauthor()
{
	return programme;
}
void student::addtoken()
{
	token = 1;
}
void student::resettoken()
{
	token = 0;
}
void student::getbookno(string t)
{
	bookno = t;
}
void student::updatestatus(string s)
{}