#include <iostream>
using namespace std;

int main()
{
 	long long int S, D, A;
 	int i;
 	
 	while (cin >> S >> D)
 	{
 		i = 0;
 		while (true)
 		{
 			A = (S + (S + i)) * (i + 1) / 2;
			if (A >= D)
			{
				cout << (S + i) << endl;
				break;
			}
			i++; 			
		}
 	}
    
    return 0;
}
