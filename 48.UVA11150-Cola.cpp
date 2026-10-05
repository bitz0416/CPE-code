#include <iostream>
using namespace std;

int main()
{
    int N;
    
    while(cin >> N)
    {
        int sum = 0, empty = 0;

        while(N + empty >= 3)
        {
            sum += N;
            empty += N;
            N = empty / 3;
            empty %= 3;
        }

        sum += N;
        if(N + empty == 2)
        	sum++;
        cout << sum << endl;
    }
    
    return 0;
}
