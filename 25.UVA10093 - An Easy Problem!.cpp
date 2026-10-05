#include <iostream>
#include <cctype>
#include <string>
using namespace std;
// 若正整數 R (於N進位系統中) 之各個位數之總和可以整除 (N-1), 則表示 R 可整除 (N-1)
// 假設 R = 25, R之各個位數總和 = 2 + 5 = 7, 且 7 可整除 (8-1), 亦即 N = 8,
// 若將 R = 25 (於8進位系統) 轉換成10進位, 可得 21, 21 可整除 (8-1) 
int main()
{
	string str;
    int R, Sum, Max, i;
   
	while(getline(cin, str))
    {
        Sum = 0;
        Max = 1;
        
		for(i = 0; i < str.length(); i++)
        {
            R = 0;
            if (isdigit(str[i]))
				R = str[i] - int('0');
            else if (isupper(str[i])) 
				R = str[i] - int('A') + 10;
            else if (islower(str[i]))
				R = str[i] - int('a') + 36;
            Sum += R;
            if(R > Max)
				Max = R;
        }
        
        for(int N = Max; N <= 62; N++)
        {
            if (Sum % N == 0)
            {
                cout << (N + 1) << endl;
                break;
            }
            else if(N == 62) 
				cout << "such number is impossible!" << endl;
        }
    }
    return 0;
}
