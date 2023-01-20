#pragma once
#include<iostream>
#include<string>

using namespace std;
class Publication
{
protected:
	string name;
	string author;
	int year;
public:

	Publication();
	Publication(string n, string a, int y);

	void setName(string n);
	void setAuth(string a);
	void setYear(int y);

	string getName() const;
	string getAuth() const;
	int getYear() const;

	virtual void show() const;
};



