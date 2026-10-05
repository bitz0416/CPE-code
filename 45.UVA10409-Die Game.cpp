#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	int u, d, n, s, e, w;
	string direction;
	
	while ((cin >> N) && (N != 0))
	{
		u = 1; d = 6; n = 2; s = 5; e = 4; w = 3;
		while (N--)
		{
			cin >> direction;
			if (direction[0] == 'n')
			{
				d = n; n = u;
				u = 7 - d; s = 7 - n;
			}
			if (direction[0] == 's')
			{
				s = u; u = n, 
                d = 7 - u; n = 7 - s;
			}
			if (direction[0] == 'e')
			{
				e = u; u = w;
                d = 7 - u; w = 7 - e;
			}
			if (direction[0] == 'w')
			{	
				d = w; w = u;
                u = 7 - d; e = 7 - w;
			}
		}
		cout << u << endl;
	}

	return 0;	
} 
