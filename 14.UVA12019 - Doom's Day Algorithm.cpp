#include <iostream>
#include <string>
using namespace std;

int main()
{
	string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int doomsday[12] = {10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};
	int N, M, D, i, index;
	
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cin >> M >> D;
		index = D - doomsday[M - 1];
		if (index >= 0)
			index %= 7;
		else
		{
			while (index < 0)
				index += 7;
			index %= 7;
		}
		cout << week[index] << endl;
	}
	
	return 0;
}
