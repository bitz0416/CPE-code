#include<iostream>
#include<cmath>
#include <string>
using namespace std;

int Bin_to_Dec(string BinaryString)
{
    int Len = BinaryString.length(), i, j, sum = 0;
    
    j = Len - 1;
    for (i = 0; i < Len; i++, j--)
        sum += ((int)BinaryString.at(i) - (int)('0')) * ((int)pow(2.0, j));
    
    return sum;    
}

int gcd(int a, int b)
{
  int tmp;
  
  while((tmp = a % b) != 0)
  {
    a = b;
    b = tmp;
  }

  return b;
}

int main()
{
    int N, i;
    string S1, S2;
 
 	cin >> N;
 	
	for (i = 0; i < N; i++)
	{
		cin >> S1;
		cin >> S2;
		
		if (gcd(Bin_to_Dec(S1), Bin_to_Dec(S2)) > 1)
		   cout << "Pair #" << (i + 1) << ": All you need is love!\n";
        else
           cout << "Pair #" << (i + 1) << ": Love is not all you need!\n";
	}

    return 0;
}
