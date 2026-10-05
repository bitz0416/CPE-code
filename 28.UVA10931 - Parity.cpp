#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long int I;
	int P, r, i;
	vector <int> B;
	
	while ((cin >> I) && (I != 0))
	{
		P = 0;
		B.clear();
		
		while(I)
		{
			r = I % 2;
			B.push_back(r);			
        	if(r) 
				P++;
        	I /= 2;
      	}		
		cout << "The parity of ";
		for (i = B.size() - 1; i >= 0; i--)
			cout << B[i];
		cout << " is " << P << " (mod 2).\n";		
	}

	return 0;
} 
