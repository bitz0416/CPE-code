#include <iostream>
#include <string>
#include <map>
using namespace std;
// botanical(植物), dormant(沉睡的，休眠的), climate(天氣, 氣候)
// conifer(針葉樹), needles(針), lumber(木料), decorative(裝飾)
// inventory(目錄,存貨), population(族群) 
int main()
{
	int NumCase, i, total;
	string S;  	
	map <string, int> Species;
	map <string, int>::iterator iter;
	
	cin >> NumCase;
    getline(cin, S); 
    cin.ignore();
    
    for(i = 0; i < NumCase; i++)
	{
		Species.clear();
        total = 0;
    			
		while(getline(cin, S) && (S != ""))
		{
        	Species[S]++;
        	total++;
      	}

		if(i > 0)
    		cout << endl;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(4);
      	for(iter = Species.begin(); iter != Species.end() ; iter++)
	    	cout << iter->first << ' ' << ((double) iter->second / total) * 100 << endl;
    }

	return 0;
}
