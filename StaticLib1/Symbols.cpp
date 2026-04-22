#include "pch.h"
#include "Symbols.h"
Symbols::Symbols(const string& v) : ryad(v) {}

string Symbols::replace() const
{
	string res;
	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] == '4')
		{
			res += "!!";
		}
		else
			res += value[i];
	}
	return res;
}