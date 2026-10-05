#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	string M;
	int N, X1, X2, B1, B2;

	cin >> N;

    while (N--)
	{
    	cin >> M;
      	B1 = 0;
      	B2 = 0;
      	//sscanf(M.c_str(), "%d", &X1);
 		X1 = strtol(M.c_str(), NULL, 10);
		while(X1)
		{
        	if(X1 % 2) 
				B1++;
        	X1 /= 2;
      	}
      	//sscanf(M.c_str(), "%x", &X2);
      	X2 = strtol(M.c_str(), NULL, 16);
		while(X2)
		{
        	if(X2 % 2) 
				B2++;
        	X2 /= 2;
      	}
	    cout << B1 << " " << B2 << endl;
    }

	return 0;
} 
