#include <iostream>
using namespace std;

int main()
{
 	int n;
 	long long int s, d, a, b;
 	
 	cin >> n;
 	
 	while (n--)
 	{
 		cin >> s >> d;
		a = s + d;
		if (a % 2)
			cout << "impossible\n";
		else
		{
			a /= 2;
			b = s - a;
			if (b < 0)
				cout << "impossible\n";
			else
				cout << a << " " << b << endl;
		}
	}
    
    return 0;
}
