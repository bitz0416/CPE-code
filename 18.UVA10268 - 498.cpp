#include<iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    long long int x, a, sum;
    vector <long long int> y;
    int i, n;
    char c;
 
    while (cin >> x)
    { 
        y.clear();
        i = 0;
        while (cin >> a)
        {
        	y.push_back(a);
            i++;
             
        	cin.get(c);
            if (c == '\n')
            	break;
        }
                
        sum = 0;
        n = i - 1;    // n is number of items after the derivative of polynomial
        
        for (i = 0; i <= n - 1; i++)
            sum += y[i] * (n - i) * (long long int) pow((double) x, n - i - 1);
        
        cout << sum << endl;
    }
    
    return 0;
}
