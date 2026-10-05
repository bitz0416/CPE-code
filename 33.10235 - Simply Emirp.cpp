#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool Is_Prime(long long int N)
{
	long long int i;
	
	for (i = 2; i < N; i++)
		if (N % i == 0)
			return false;
	return true;
}//sieve 

int main()
{
	string Str;
	long long int N, N_rev;
	
	while (cin >> Str)
	{
		N = strtol(Str.c_str(), NULL, 10);
		if (Is_Prime(N) == false)
			cout << N << " is not prime.\n";
		else
		{
			if (N < 10)
				cout << N << " is prime.\n";
			else
			{
				reverse(Str.begin(), Str.end());
				N_rev = strtol(Str.c_str(), NULL, 10);
				
				if (N == N_rev)
					cout << N << " is prime.\n";
				else
				{
					if (Is_Prime(N_rev))
						cout << N << " is emirp.\n";
					else
						cout << N << " is prime.\n";
				}
			}
		}
	}
		
	return 0;
}
