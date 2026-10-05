#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() 
{
	int n;
	vector <int> V_Nums;
    int Mid;
    int CountMid;
    int DiffNum;
	int Num, i;	
 
    while (cin >> n) 
	{
		V_Nums.clear();
		CountMid = 0;
    	DiffNum = 0;
		
        while (n--) 
		{
            cin >> Num;
            V_Nums.push_back(Num);
        }
        sort(V_Nums.begin(), V_Nums.end());
        Mid = (V_Nums.size() - 1) / 2;
        if (V_Nums.size() % 2) 
		{
            for (i = 0; i < V_Nums.size(); i++)
            	if (V_Nums[i] == V_Nums[Mid])
                	CountMid++;
            DiffNum = 1;
        }
        else 
		{
            for (i = Mid; i >= 0; i--)
            	if (V_Nums[i] == V_Nums[Mid])
                	CountMid++;
            for (i = Mid + 1; i < V_Nums.size(); i++)
            	if (V_Nums[i] == V_Nums[Mid + 1])
                	CountMid++;
            DiffNum = V_Nums[Mid + 1] - V_Nums[Mid] + 1;
        }
        cout << V_Nums[Mid] << " " << CountMid << " " << DiffNum << endl;
    }
 
    return 0;
}
