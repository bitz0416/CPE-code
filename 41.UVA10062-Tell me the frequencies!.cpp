#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
  	int Min_ASCII, Max_ASCII, Max_Count;
	int i, j;
	bool newline = false;
		
	while(getline(cin, S))
	{
    	int ASCII[256] = {0};
    	Min_ASCII = 256;
    	Max_ASCII = 0;
    	Max_Count = 0;

    	for(i = 0; i < S.length(); i++)
		{
      		ASCII[(int) S[i]]++;
      		Min_ASCII = min(Min_ASCII, (int) S[i]);
      		Max_ASCII = max(Max_ASCII, (int) S[i]);
      		Max_Count = max(Max_Count, ASCII[(int) S[i]]);
    	}

		if (newline == true)
			cout << endl;

    	for(i = 1; i <= Max_Count; i++)
      		for(j = Max_ASCII; j >= Min_ASCII; j--)
        		if(ASCII[j] == i)
          			cout << j << ' ' << i << endl;
          			
        newline = true;
	}
	
  	return 0;
}
