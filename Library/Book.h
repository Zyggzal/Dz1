#pragma once
#include "Publication.h"

class Book : public Publication
{
protected:
	string resume;
public:
	Book();
	Book(string n, string a, int y, string r);

	void setRes(string r);
	string getRes() const;

	void show() const override;
};

