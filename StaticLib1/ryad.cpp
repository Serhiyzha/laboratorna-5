#include "pch.h"
#include "ryad.h"
ryad::ryad(const string& v) : value(v) {}
string ryad::getValue() const
{
	return value;
}
int ryad::length() const
{
	return value.length();
}
string ryad::replace() const
{
	return value;
}