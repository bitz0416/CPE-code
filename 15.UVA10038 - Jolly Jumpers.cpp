#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int n, i;
	bool Jolly;
	int tmp;
	
	while (cin >> n)
	{
		int s[3000];
		int diff[3000] = {0};
		
		Jolly = true;		
		i = 0;
		while (i < n)
			cin >> s[i++];
		
		for (i = 1; i <= n - 1; i++) 
		{
			tmp = abs(s[i] - s[i - 1]);
			if ((tmp >= 1) & (tmp <= n - 1))
				diff[tmp]++;
			else
				Jolly = false;
		}
		
		if (Jolly != false)
			for (i = 1; i <= n - 1; i++)
				if (diff[i] > 1)
				{
					Jolly = false;
					break;
				}
		
		if (Jolly == true)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;						
	}

  return 0;
}
