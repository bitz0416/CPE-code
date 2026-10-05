#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int S, N, I;  // S tests, N players, the I-th player
    double p,q;

    cin >> S;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);    
    cout.precision(4);
    
	while (S > 0) 
    {
    	cin >> N >> p >> K;
        q = 1 - p;            
        if (p == 0.0)
        	cout << "0.0000\n";
        else
        	cout << pow(q, K - 1) * p / (1 - pow(q, N)) << endl;
             
        S--;
    }
    
    return 0;
}
