#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    long int sum[2];
    
    while (cin >> s)
    {
        if (s == "0")
           break;
        
        sum[0] = 0;
    	sum[1] = 0;
        for (int i = 0; i < s.length(); i++)
            sum[i % 2] += s[i] - '0';
        if ((sum[0] - sum[1]) % 11 == 0)
           cout << s << " is a multiple of 11.\n";   
        else
           cout << s << " is not a multiple of 11.\n"; 
    }
     
     return 0;
}
