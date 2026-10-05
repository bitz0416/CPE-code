#include <iostream>
using namespace std;

int main() 
{
	int x1, y1, x2, y2;
	int S1, S2;
	int n, Case = 0, i, j, s, Num_steps;
	
	cin >> n;
	while (n--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		Case++;
		cout << "Case " << Case << ": ";
		
		S1 = x1 + y1;
		S2 = x2 + y2;
		
		Num_steps = 0;
		if (S1 == S2)
			for (i = x1, j = y1; i < x2, j > y2; i++, j--)
				Num_steps++;
		else
			for (s = S1; s <= S2; s++)
			{
				if (s == S1)
					for (i = x1, j = y1; i + j <= S1, i, j >= 0; i++, j--)
						Num_steps++;
				else if (s == S2)
					for (i = 0, j = S2; i < x2, j > y2; i++, j--)
						Num_steps++;
				else
					Num_steps += (s + 1);					
			}	
		
		cout << Num_steps << endl;
	}
	
    return 0;
}
