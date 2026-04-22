#pragma once
#include "ryad.h"

class Symbols : public ryad
{
public:
	Symbols(const string& v);
	string replace() const override;
};