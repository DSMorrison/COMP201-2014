#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int next, sum = 0;
	string argv[2];
	ifstream in;
	ofstream out;

	cout << "Enter the name of the input file: ";
	cin >> argv[0];

	in.open(argv[0]);
	if (in.fail())
	{
		cout << "Couldn't open " << argv[0] << ".\n";
		return 1;
	}

	cout << "Enter the name of the output file: ";
	cin >> argv[1];

	out.open(argv[1]);
	if (out.fail())
	{
		cout << "Couldn't open " << argv[1] << ".\n";
		return 1;
	}

	out << "x\tx^2\tCurrent Sum" << endl;
	out << "=\t===\t===========" << endl;
	while (!in.eof())
	{
		in >> next;
		out << next << "\t " << next*next << "\t " << (sum += next) << endl;

	}

	in.close();
	out.close();
	return 0;
}