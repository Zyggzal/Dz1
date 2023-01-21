#include "Publication.h"
#include"Error.h"

Publication::Publication()
{
	name = "";
	author = "";
	year = 0;
}

Publication::Publication(string n, string a, int y)
{
	if (year <= 0)throw Error(2);
	else year = y;
	name = n;
	author = a;
}

void Publication::setName(string n)
{
	name = n;
}

void Publication::setAuth(string a)
{
	author = a;
}

void Publication::setYear(int y)
{
	year = y;
}

string Publication::getName() const
{
	return name;
}

string Publication::getAuth() const
{
	return author;
}

int Publication::getYear() const
{
	return year;
}

void Publication::show() const
{
	if (name == "" || author == "")throw Error(1);
	cout << name << " by " << author << " - " << year << endl;
}

