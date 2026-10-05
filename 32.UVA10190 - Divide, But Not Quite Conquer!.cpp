#include <iostream>
#include <vector>
using namespace std;

int main()
{

	long long int n, m, i;
	//vector <long long int> V;  
	vector <int> V; 
	bool divisable;
	
	while(cin >> n >> m)
	{
		divisable = true;
		V.clear();
		V.push_back(n);
    	
		if((m < 2) || (n < 2) || (m > n))
        	cout << "Boring!\n";
    	else
    	{
        	while(n != 1)
            	if(n % m == 0)
            	{
                	n /= m;
                	V.push_back(n);
            	}
            	else
            	{
                	divisable = false;
                	break;
            	}

            if(divisable)
            {
                for(i = 0; i < V.size(); i++)
	            {
                	cout << V[i];
                	if (i < V.size() - 1)
                		cout << ' ';
                }
				cout << endl;
            }
            else
                cout << "Boring!\n";
    	}
	}
	
	return 0;
}
