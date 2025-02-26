#pragma once
#include"library.h"
class book :public library {
	string author;
	double price;
	string status;
public:
	book() :library()
	{
		author = " ";
		price = 0;
		status = "Available";
	}
	book(string n, int ID, string a, double p, string y) :library(n, ID)
	{
		author = a;
		price = p;
		status = y;
	}
	void display();
	void create();
	double tellprice();
	string tellauthor();
	string tellstatus();
	void addtoken();
	void resettoken();
	void getbookno(string t);
	void updatestatus(string s);
};