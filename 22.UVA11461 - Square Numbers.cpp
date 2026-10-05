#include <iostream>
using namespace std;

int main()
{
	int S[100001] = {0};
	int a, b, i;
	
	for (i = 1; i * i <= 100000; i++)
		S[i * i] = 1;
	for (i = 1; i <= 100000; i++)
		S[i] += S[i - 1];
	
	while (cin >> a >> b)
	{
		if ((a == 0) && (b == 0))
			break;
		else
			cout << S[b] - S[a - 1] << endl;
	}
	
    return 0;
}
