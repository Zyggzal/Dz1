#include "Library.h"

Library::Library()
{
	name = "";
}

Library::Library(string n)
{
	name = n;
}

void Library::setName(string n)
{
	name = n;
}

string Library::getName() const
{
	return name;
}

void Library::addPub(Publication a)
{
	all.push_back(&a);
}

Publication Library::findPub(int n) const
{
	return *all[n];
}

void Library::delPub(int n)
{
	all.erase(all.begin() + n);
}

void Library::show() const
{
	cout << "Library " << name << endl;
	for (int i = 0; i < all.size(); i++)
	{
		cout << i + 1 << ") ";
		all[i]->show();
	}
}
