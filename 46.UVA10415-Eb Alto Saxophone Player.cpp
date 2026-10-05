#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, i, j;
    string song;
	string key[256]; 
	key['c'] = "0111001111";
	key['d'] = "0111001110";
	key['e'] = "0111001100";
	key['f'] = "0111001000";
	key['g'] = "0111000000";
	key['a'] = "0110000000";
	key['b'] = "0100000000";
	key['C'] = "0010000000";
	key['D'] = "1111001110";
	key['E'] = "1111001100";
	key['F'] = "1111001000";
	key['G'] = "1111000000";
	key['A'] = "1110000000";
	key['B'] = "1100000000";
	
 	cin >> t;
    
	while(t--)
	{
        int ans[10] = {0};
        bool check[10] = {false};

        cin >> song;
		for (i = 0; i < song.length(); i++)
		    for(j = 0; j < 10; j++)
			    if((key[song[i]][j] == '1') && (!check[j]))
				{
                    ans[j]++;
                    check[j] = true;
                }
                else if(key[song[i]][j] == '0')
                    check[j] = false;
               
        cout << ans[0];
        for(j = 1; j < 10; j++)
            cout << " " << ans[j];
        cout << endl;
    } 
	return 0;
}
