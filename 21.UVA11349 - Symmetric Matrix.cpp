#include<iostream>
#include<string>
using namespace std;

string Is_Symmetric(long long int M[], int size)
{
	int f, r = size - 1;
		
	for (f = 0; f < size / 2; f++)
		if (M[f] != M[r--])
			return "Non-symmetric.\n";
	
	return "Symmetric.\n";
}

int main()
{
	int T, n;
	char c;
	int i;
	int Negative, Num = 1;
	
	cin >> T;
	
	while (T--)
	{
		cin >> c >> c >> n;
		long long int *M = new long long int [n * n];
		Negative = 0;
		for (i = 0; i < n * n; i++)
		{
			cin >> M[i];
			if (M[i] < 0)
				Negative = 1;
		}
		
		cout << "Test #" << Num << ": ";
		Num++;
		if (Negative == 1)
			cout << "Non-symmetric.\n";
		else
			cout << Is_Symmetric(M, n * n);
					
		delete [] M;
	}

  	return 0;
}
