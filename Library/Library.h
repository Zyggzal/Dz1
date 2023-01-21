#pragma once
#include<string>
#include<iostream>
#include<vector>
#include"Publication.h"

using namespace std;
class Library
{
private:
	string name;
	vector<Publication*> all;
public:
	Library();
	Library(string n);

	void setName(string n);
	string getName() const;

	void show() const;
};

