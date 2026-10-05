#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int S, N, I;  // S tests, N players, the I-th player
    double p;

    cin >> S;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);    
    cout.precision(4);
    
	while (S > 0) 
    {
    	cin >> N >> p >> I;
                    
        if (p == 0.0)
        	cout << "0.0000\n";
        else
        	cout << pow(1 - p, I - 1) * p / (1 - pow(1 - p, N)) << endl;
             
        S--;
    }
    
    return 0;
}
