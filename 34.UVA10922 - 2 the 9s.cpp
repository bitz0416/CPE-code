#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string InttoString(int num)
{
	stringstream SS;
	string Str;
	
	SS << num;
	SS >> Str;

	return Str;
}

int main()
{
	string Str, Ori_Str;
	int i, Sum, Nine_deg;
	 
	while ((cin >> Ori_Str) && (Ori_Str != "0")) 
	{
		Str = Ori_Str;
		if (Ori_Str.length() == 1)
			Nine_deg = 1;
		else
		{
			Nine_deg = 0;
			while (Str.length() > 1)
			{
				Nine_deg++;
				Sum = 0;
				for (i = 0; i < Str.length(); i++)
					Sum += (Str[i] - '0');
				Str = InttoString(Sum);	
			}
		}

		if ((Str[0] - '0') % 9 == 0)
			cout << Ori_Str << " is a multiple of 9 and has 9-degree " << Nine_deg << ".\n";
		else
			cout << Ori_Str << " is not a multiple of 9.\n";
	}

	return 0;
} 
