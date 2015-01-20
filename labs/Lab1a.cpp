#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	int next, sum = 0;
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

	cout << "x\tx^2\tCurrent Sum" << endl;
	cout << "=\t===\t===========" << endl;
	while (!in.eof())
	{
		in >> next;
		cout << next << "\t " << next*next << "\t " << (sum += next) << endl;
		
	}


	

	in.close();

	return 0;
}