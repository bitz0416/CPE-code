#include <iostream>
using namespace std;
typedef char* CharArrayPtr;

bool Square_Check_per_Size(char **Arr, int r, int c, int size)
{
	int i, j;
	
	for (i = r - size; i <= r + size; i++)
		for (j = c - size; j <= c + size; j++)
			if ((i == r - size) || (i == r + size))
			{
				if (Arr[i][j] != Arr[r][c])
					return false;
			}
			else if ((j == c - size) || (j == c + size))
			{
				if (Arr[i][j] != Arr[r][c])
					return false;				
			}
	
	return true;	
}

int main()
{
	int T, M, N, Q, r, c;
	int i, j, size;
	
	cin >> T;
	while (T--)
	{
		cin >> M >> N >> Q;
		
		CharArrayPtr *Arr = new CharArrayPtr [M];
		for (i = 0; i < M; i++)
			Arr[i] = new char [N];

		for (i = 0; i < M; i++)
			for (j = 0; j < N; j++)
				cin >> Arr[i][j];
		
		cout << M << " " << N << " " << Q << endl;
			
		for (i = 0; i < Q; i++)
		{
			cin >> r >> c;
			size = 1;
			
			while ((r - size >= 0) && (r + size < M) && (c - size >= 0) && (c + size < N) && 
			        Square_Check_per_Size(Arr, r, c, size))
				size++;

			size--;
			cout << size * 2 + 1 << endl;
		}

		for (i = 0; i < M; i++)                   
			delete [] Arr[i];
		delete [] Arr;  
	}
		
	return 0;
}
