#include <iostream>
#include "vector"
#include "Symbols.h"
#include "Digits.h"

void process(const vector<ryad*>& arr);

int main()
{
	Symbols s("a4b44");
	Digits d("1335");

	vector<ryad*> arr = { &s, &d };

	process(arr);
	return 0;
}