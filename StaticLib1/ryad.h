#pragma once
#include <string>
using namespace std;
class ryad
{
protected:
	string value;

public:
	ryad(const string& v);
	virtual ~ryad() {};

	string getValue() const;

	virtual int length() const;
	virtual string replace() const;
};

