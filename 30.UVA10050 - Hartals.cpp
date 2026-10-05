#include<iostream>
using namespace std;

int main()
{
  int days[3650];
  int cases, strike, period, numParty, t, count;
  int i, j, k;
  
  cin >> cases;
  for(i = 0; i < cases; i++)
  {
    for(k = 0; k < 3650; k++)
            days[k] = 0;
    count = 0;
    cin >> period;
    cin >> numParty;
    for(j = 0; j < numParty; j++)
    {
        cin >> strike;
        t = strike;        
        while(t <= period)
        {
           days[t] = 1;
           t += strike;  
        }      
    }     
    for(j = 1; j <= period; j++)
       if ((days[j] == 1) && (j % 7 != 6) && (j % 7 != 0)) 
          count++;     
    
    cout << count <<endl;           
  }   
  
   return 0; 
}
