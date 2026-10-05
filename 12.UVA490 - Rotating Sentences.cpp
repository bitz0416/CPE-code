#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[100][101];
	int Len[100];
    int MaxLen = 0, n = 0, i, j, k, SpaceFlag;

	while (cin.getline(str[n], 101))
	{
		Len[n] = strlen(str[n]);
		if (Len[n] > MaxLen)
			MaxLen = Len[n];
		n++;
	}
	
	for (j = 0; j < MaxLen; j++)
	{
		for (i = n - 1; i >= 0; i--)
			if (j < Len[i])
				cout << str[i][j];
			else
			{
				SpaceFlag = false;
				for (k = i - 1; k >= 0; k--)
					if ((Len[i] <= Len[k]) && (j < Len[k]))
					{
						 SpaceFlag = true;
						 break;
					}
				if (SpaceFlag == true)
					cout << ' ';
			} 
		cout << endl;
	}

  return 0;
}
