#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	long long int i, j;
	
	while (cin >> i >> j)
		cout << abs(i - j) << endl;	
	
	return 0;
}
