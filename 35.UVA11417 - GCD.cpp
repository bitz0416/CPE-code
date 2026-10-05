#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  int tmp;
  
  while((tmp = a % b) != 0)
  {
    a = b;
    b = tmp;
  }

  return b;
}

int main()
{
	int N, i, j, G;
	
	while (cin >> N)
		if (N != 0)
		{
			G = 0;
			for(i = 1; i < N; i++)
				for(j = i + 1; j <= N; j++)
					G += gcd(i, j);
			cout << G << endl;
		}
		
	return 0;
}
