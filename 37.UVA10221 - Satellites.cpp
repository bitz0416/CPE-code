#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// arc (弧度), chord (弦)
// orbit (軌道)
// minute (角分或弧分) 
int main()
{
	double PI = 2 * acos(0); // PI: 圓周率 
	//cout << "π= " << PI << endl;
    double s, a, r;
    double arc, chord;
    string str;
    
	while(cin >> s >> a >> str)
    {
    	if(str == "min")
        	a /= 60;     // 1°（度）= 60′（角分) 
            
    	if (a > 180)
			a = 360 - a;
		
		r = 6440 + s;

        arc = 2 * PI * r * (a / 360);
        // 1π（弳度）= 180°
        chord = sqrt(r * r + r * r - 2 * r * r * cos(a * PI / 180));
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(6);
        cout<< arc << " " << chord <<endl;
    }
	
	return 0;	
} 
