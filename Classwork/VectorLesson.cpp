#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main (int argc, char* argv[])
{
vector<long long> numbers(50); //initial capacity is 0

for (int i = 0; i < 50; i++)
{
cout << "Size: " << numbers.size() << " Capacity: " << numbers.capacity() << endl;
//numbers.push_back(pow(2, i) -1);
Numbers[i] = pow(2, i);

}

/*
for (int i = 0; i < numbers.size(); i++)
{
cout << numbers[i] << endl;
}
*/
return 0;

}