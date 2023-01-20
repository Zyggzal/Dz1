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
	string desc;
public:
	Publication();
	Publication(string n, string a, int y, string d);



	void setName(string n);
	void setAuth(string a);
	void setYear(int y);
	void setDesc(string d);

	string getName() const;
	string getAuth() const;
	int getYear() const;
	string getDesc() const;
};



