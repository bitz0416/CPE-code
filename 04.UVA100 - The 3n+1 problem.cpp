#include <iostream>
using namespace std;

int main()
{
	int i, j, t, k, n;
	int MaxLen, Len;
	
	while (cin >> i >> j)
	{
		cout << i << " " << j << " ";
		if (i > j)
		{
			t = i;
			i = j;
			j = t;			
		}
		MaxLen = 0;
		for (k = i; k <= j; k++)
		{
			n = k;
			Len = 1;
			while (true)
			{
				if (n == 1)
					break;
				else if (n % 2)
					n = 3 * n + 1;
				else
					n /= 2; 
				Len++;
			}
			if (Len > MaxLen)
				MaxLen = Len; 
		}
		cout << MaxLen << endl;
	}
	
	return 0;
} 
