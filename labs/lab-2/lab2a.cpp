#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
int value, x, y;
vector<int> math;
string input;

while (cin >> input)
{
	if (input == "+")
	{
		y = math.back();
		math.pop_back();
		x = math.back();
		math.pop_back();
		math.push_back(x+y);
	}
	
	else if (input == "-")
	{
		y = math.back();
		math.pop_back();
		x = math.back();
		math.pop_back();
		math.push_back(x-y);
	}
	
	else if (input == "*")
	{
		y = math.back();
		math.pop_back();
		x = math.back();
		math.pop_back();
		math.push_back(x*y);
	}

	else if (input == "/")
	{
		y = math.back();
		math.pop_back();
		x = math.back();
		math.pop_back();
		math.push_back(x/y);
	}
	
	else if (input == ".")
	{
		break;
	}
	else
	{
		char *end;
		value = strtol(input.c_str(), &end, 10);
		math.push_back(value);
	}
}
/* What does this do? */
while (math.size() > 0)
{
cout << math.back() << endl;
math.pop_back();
}

return 0;
}


