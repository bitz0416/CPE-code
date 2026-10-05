#include <iostream>
using namespace std;

void Calculate_Cheapest_Price_Base(int n, int price[])
{
	int i, base, test;
	long long int cheapest = 9999999999;
    int testPrice[35];
    
	for (i = 2; i <= 36; i++)
	{
        test = n;
        testPrice[i - 2] = 0;
        for(base = i; test > 0; test /= base)
        	testPrice[i - 2] += price[test % base];
        if(testPrice[i - 2] < cheapest) 
        	cheapest = testPrice[i - 2];
    }

    cout << "Cheapest base(s) for number " << n << ":";
    
	for(i = 2; i <= 36; i++)
        if(testPrice[i - 2] == cheapest)
			cout << " " << i ;
    cout << endl;
}

int main()
{
    int nCase, testCase, n, i, j;
    int price[36];
    
	cin >> nCase;
    
	for(j = 0; j < nCase; j++)
	{
        for(i = 0; i < 36; i++)
			cin >> price[i];
        cin >> testCase;
        cout << "Case " << j + 1 << ":\n";
        while (testCase--)
		{
            cin >> n;
            Calculate_Cheapest_Price_Base(n, price);
        }
        if(j < nCase - 1)  // 最後一個case結束後不須再換行 
			cout << endl;
    }
    
	return 0;
} 
