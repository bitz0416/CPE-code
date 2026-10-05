#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, i, j, count;
	string CountryName[2000];
	string line;
 
 	cin >> n;
 		
	for (i = 0; i < n; i++)
	{
		cin >> CountryName[i];
		getline(cin, line);
	}
	
	sort(CountryName, CountryName + n);
	
	i = 0;
	while (i < n)
	{
	    cout << CountryName[i] << " ";
	    count = 1;
	    for (j = i + 1; j < n; j++)
	        if (CountryName[j] != CountryName[i])
	           break;
            else
               count++;
        cout << count << endl;            
        i += count;
    }	
	 
    return 0;
}
