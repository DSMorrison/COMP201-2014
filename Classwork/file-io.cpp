#include <iostream>
#include <fstream>
using namespace std;

//g++ file-io.cpp -o file-io.exe
//file-io input.txt
//argv[0] = /path/to/file-io.exe
//argv[1] = input.txt
//argc = 2

//string is the C++ style-string
//char* is the C style-string

int main(int argc, char* argv[])
{
ifstream in;
in.open(argv[1]);
int number;

while(!in.eof())
{
in >> number;
cout << number << endl;
}

return 0;
}