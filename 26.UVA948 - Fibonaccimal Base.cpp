#include <iostream>
#include <vector>
using namespace std;
 
int main() 
{
	vector <long long int> fibTable;
 	int N, i, MaxFibIndex;
 	bool start;
 	long long int num;
 
    fibTable.push_back(0);  // fibTable[0] = 0
    fibTable.push_back(1);  // fibTable[1] = 1
                // when i = 2, fibTable[i] is unknown, hence check fibTable[i-1] 
    for (i = 2; fibTable[i - 1] <= 100000000; i++)
    	fibTable.push_back(fibTable[i - 1] + fibTable[i - 2]);
    MaxFibIndex = i - 1;

    cin >> N;
    while (N--) 
	{
        start = false;
    	cin >> num;
        cout << num << " = ";
        
        for (i = MaxFibIndex; i >= 2; i--) 
        	if (num >= fibTable[i]) 
			{
            	num -= fibTable[i];
                cout << 1;
                start = true;
            }
            else if (start)
                cout << 0;
 
        cout << " (fib)" << endl;
    }
 
    return 0;
}
