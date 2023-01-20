#include "Book.h"

Book::Book()
{
	resume = "";
}

Book::Book(string n, string a, int y, string r):Publication(n,a,y)
{
	resume = r;
}

void Book::setRes(string r)
{
	resume = r;
}

string Book::getRes() const
{
	return resume;
}

void Book::show() const
{
	cout << name << " by " << author << " - " << year << endl;
	cout << resume << endl;
}
