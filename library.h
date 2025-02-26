#pragma once
#include<iostream>
using namespace std;
#include<string>
class library {
	string name;
	int id;
public:
	library();
	library(string n, int ID);
	virtual void display();
	virtual void create();
	string tellname();
	int tellid();
	virtual double tellprice() = 0;
	virtual string tellstatus() = 0;
	virtual string tellauthor() = 0;
	virtual void addtoken() = 0;
	virtual void resettoken() = 0;
	virtual void getbookno(string t) = 0;
	virtual void updatestatus(string s) = 0;
};
