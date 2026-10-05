#include<iostream>
#include<cstdlib> 
//#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  int n, r, s;
  //vector <int> S;
  int S[30000];
  int house, d, i, j;
  
  cin >> n;

  for(i = 0; i < n; i++)
  {
  	  //S.clear();
      for (int k = 0; k < 30000; k++)
      	S[k] = 0;
	  cin >> r;
      for(j = 0; j < r; j++)
      {
      	//cin >> s;
      	//S.push_back(s);
      	
      	cin >> S[j];
	  }
      sort(S, S + r);
	  
      house = S[r / 2];
      d = 0;
	  for(j = 0; j < r; j++)
      	d += abs(house - S[j]);
      cout << d << endl;
  }

  return 0;
}
