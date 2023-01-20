#pragma once
#include "Publication.h"
#include<vector>

class Magazine : public Publication
{
protected:
	vector <string> articles;
public:
	Magazine();
	Magazine(string n, string a, int y);

	string getArt(int n);
	void addArt(string a);

	void show() const override;
};

