#include "Magazine.h"

Magazine::Magazine()
{

	//fghfr
}

Magazine::Magazine(string n, string a, int y)
{
	::Magazine(n, a, y);
}

string Magazine::getArt(int n)
{
	if(n<articles.size())
	return articles[n+1];
}

void Magazine::addArt(string a)
{
	articles.push_back(a);
}

void Magazine::show() const
{
	cout << name << " by " << author << " - " << year << endl;
	cout << "Articles: \n";
	for (int i = 0; i < articles.size(); i++)
	{
		cout << i + 1 << ") "<<articles[i];
	}
}
