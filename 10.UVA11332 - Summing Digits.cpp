#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	int i, F;
	char tmp[11];
	//stringstream SS;
		
	while ((cin >> n) && (n != "0"))
	{
		while (n.length() != 1)
		{
			F = 0;
			for (i = 0; i < n.length(); i++)
				F += (n[i] - '0');
			sprintf(tmp, "%d", F);
			n = tmp;
			/*
			SS << F;
			SS >> n;
  			*/    
		}
		cout << n << endl;
	}
					
	return 0;
}
