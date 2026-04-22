#include "pch.h"
#include "Digits.h"
Digits::Digits(const string& v) : ryad(v) {}

string Digits::replace() const
{
	string res;
	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] == '3')
		{
			res += "11";
		}
		else
			res += value[i];
	}
	return res;
}