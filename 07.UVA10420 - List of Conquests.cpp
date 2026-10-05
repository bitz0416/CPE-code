#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    int n, i, j, count;
	vector <string> CountryName;
    string line;
 
 	cin >> n;
 		
	for (i = 0; i < n; i++)
	{
		cin >> line;
		CountryName.push_back(line);
		getline(cin, line);
	}
	
	sort(CountryName.begin(), CountryName.end());
	
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
