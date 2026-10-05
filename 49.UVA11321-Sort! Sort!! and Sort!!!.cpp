#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int M;

bool compare(int a, int b)
{
	if (a % M == b % M)
    	if(abs(a) % 2 == abs(b) % 2)
	        if (a % 2)
			    return (a > b);
            else
		        return (a < b);
        else
        	return (abs(a) % 2 > abs(b) % 2); 
	else
    	return (a % M < b % M);
}

int main()
{
    int N, i;
 	int *A;
 	
    while((cin >> N >> M) && N && M)
	{
		A = new int [N];
		for(i = 0; i < N; i++)
	    	cin >> A[i];
        sort(A, A + N, compare);
    	cout << N << " " << M << endl;
    	for(i = 0; i < N; i++)
        	cout << A[i] << endl;
        delete [] A;
    }
    cout << "0 0" <<endl;	

	return 0;	
} 
