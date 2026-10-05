#include <iostream>
using namespace std;

int main()
{
	int N, L;
	int *Train, Swap_Count;
	int i, j, t;
    
    cin >> N;
	
	while(N--)
	{
		cin >> L;
		Train = new int [L];
		Swap_Count = 0;
		    	
		for (i = 0; i < L; i++)
			cin >> Train[i];
		
		for(i = 0; i < L - 1; i++)
        	for(j = 0; j < L - i - 1; j++)
            	if(Train[j] > Train[j + 1])
				{
                	Swap_Count++;
                	t = Train[j];
                	Train[j] = Train[j + 1];
                	Train[j + 1] = t;
                }
                
    	cout << "Optimal train swapping takes " << Swap_Count << " swaps.\n";
    	delete [] Train;
    }
	
	return 0;
}
