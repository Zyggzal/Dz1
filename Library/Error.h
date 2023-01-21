#pragma once
#include<string>
class Error
{
protected:
	int id;
public:
	Error(int i) {
		id = i;
	}

	std::string Err() {
		switch (id)
		{
		case 1: return "Publication not created - Unacceptable name.\n"; break;
		case 2: return "Publication not created - Unacceptable year.\n"; break;
		case 3: return "Publication not created - Unacceptable name.\n"; break;
		}
	}
};

