#include <iostream>
using namespace std;
typedef char* CharArrayPtr;

void Fill(char **field, int x, int y)
{
	int i, j;
	
    for (i = -1; i <= 1; i++)
    	for (j = -1; j <= 1; j++)
            if (field[x + i][y + j] != '*')
            	field[x + i][y + j]++;
}

int main()
{
    int N = 1, n, m;
    int i, j;
    char c;
        
    while ((cin >> n >> m) && ((n != 0) && (m != 0)))
    {
    	CharArrayPtr *field = new CharArrayPtr [n + 2];
		for (i = 0; i < n + 2; i++)     		    
			field[i] = new char [m + 2];

        for(i = 1; i <= n; i++)
            for(j = 1; j <= m; j++)
            	field[i][j] = '0';

        for(i = 1; i <= n; i++)
	        for(j = 1; j <= m; j++)
			{
                cin.get(c);
                while (c == '\n')
					cin.get(c);

                if (c == '*')
				{
                    field[i][j]='*';
                    Fill(field, i, j);
                }
            }
            
        if (N != 1) 
			cout << endl;
			
        cout << "Field #" << N << ':' << endl;
        for(i = 1; i <= n; i++)
		{
        	for(j = 1; j <= m; j++)
        		cout << field[i][j];
            cout << endl;
        }
        N++;
        
		for (i = 0; i < n + 2; i++)     		    
			delete [] field[i];
		delete [] field;
    }	
    
	return 0;
}
