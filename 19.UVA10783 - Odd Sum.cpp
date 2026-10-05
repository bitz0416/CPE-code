#include <iostream>
using namespace std;

int main()
{
 	int T, i = 1;
	int a, b, n, sum;
 	
 	cin >> T;
 	
 	while (i <= T)
 	{
 		cin >> a >> b;
		if (a % 2 == 0)
			a++;
		if (b % 2 == 0)
			b--;
		n = (b - a) / 2 + 1;
		sum = (a + b) * n / 2;
		cout << "Case " << i << ": " << sum << endl;
		i++;
	}
    
    return 0;
}
