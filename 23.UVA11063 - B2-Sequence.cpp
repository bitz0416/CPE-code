#include <iostream>
using namespace std;

int main()
{
	int B[100] = {0}, N, i, j, t = 1;
	bool B2;
	int Add[20001] = {0};
	
	while (cin >> N)
	{
		B2 = true; 
		for (i = 0; i < N; i++)
		{
			cin >> B[i];
			if ((i > 0) && (B[i] <= B[i-1]))
				B2 = false;
	 	}
	 	
	 	if (B2 == true)
	 		for (i = 0; i < N; i++)
	 		{
	 			for (j = i; j < N; j++)
	 				if (Add[B[i] + B[j]] != 0)
	 				{
						B2 = false;
						break;
					}
					else
						Add[B[i] + B[j]] = 1;	
				if (B2 == false)
					break;
			}
		
		cout << "Case #" << t << ": It is ";
		if (B2)
			cout << "a B2-Sequence.\n\n";
		else
			cout << "not a B2-Sequence.\n\n";
		
	 	t++;
	}

    return 0;
}
