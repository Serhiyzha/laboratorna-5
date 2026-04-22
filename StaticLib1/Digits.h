#pragma once
#include "ryad.h"
class Digits : public ryad
{
public:
	Digits(const string& v);
	string replace() const override;
};