#pragma once
#include"library.h"
class student :public library {
	string bookno;
	string programme;
	double token;
public:
	student() :library()
	{
		bookno = "0";
		programme = " ";
		token = 0;
	}
	student(string n, int ID, string b, string prog, double t) :library(n, ID)
	{
		bookno = b;
		programme = prog;
		token = t;
	}
	void create();
	void display();
	double tellprice();
	string tellstatus();
	string tellauthor();
	void updatestatus(string s);
	void addtoken();
	void resettoken();
	void getbookno(string t);
};