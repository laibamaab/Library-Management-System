#include"library.h"
library::library()
{
	name = " ";
	id = 0;
}
library::library(string n, int ID)
{
	name = n;
	id = ID;
}
void library::create()
{
	cin.ignore();
	cout << "\tEnter The Name ";
	getline(cin, name);
	cout << "\tEnter The ID ";
	cin >> id;
}
void library::display()
{
	cout << "\tNAME: " << name << endl;
	cout << "\tID: " << id << endl;
}
string library::tellname()
{
	return name;
}
int library::tellid()
{
	return id;
}