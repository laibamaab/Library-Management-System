#include"book.h"
void book::display()
{
	library::display();
	cout << "\tAUTHOR: " << author << endl;
	cout << "\tPRICE: " << price << endl;
	cout << "\tSTATUS: " << status << endl;
	cout << endl << endl;
}
void book::create()
{
	cout << "\n\tNEW BOOK ENTRY...\n";
	library::create();
	cin.ignore();
	cout << "\tEnter The Author's Name ";
	getline(cin, author);
	cout << "\tEnter Price ";
	cin >> price;
	cin.ignore();
	cout << "\n\n\tBook Created.." << endl;
}
double book::tellprice()
{
	return price;
}
string book::tellauthor()
{
	return author;
}
string book::tellstatus()
{
	return status;
}
void book::addtoken() {}
void book::resettoken() {}
void book::getbookno(string t) {}
void book::updatestatus(string s)
{
	status = s;
}