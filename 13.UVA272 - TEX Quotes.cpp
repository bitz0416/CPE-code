#include <iostream>
using namespace std;

int main()
{
 	char c;
 	int k = 1;
 	
 	while (cin.get(c))
 	{
		if (c != '"') 
			cout << c;
		else if (k % 2)
		{
			cout << "``";
			k++;
		}
		else
		{
			cout << "''";	
			k++;
		}
	}
    
    return 0;
}
