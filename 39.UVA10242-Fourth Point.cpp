#include <iostream>
using namespace std;
// parallelogram: 平行四邊形
int main() 
{
	double x1, y1, x2, y2, x3, y3, x4, y4;
	
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
	{
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		
        if((x1 == x3) && (y1 == y3))
        	cout << (x2 + x4) - x1 << " " << (y2 + y4) - y1 << endl;
        else if((x1 == x4) && (y1 == y4))
        	cout << (x2 + x3) - x1 << " " << (y2 + y3) - y1 << endl;
        else if((x2 == x3) && (y2 == y3))
        	cout << (x1 + x4) - x2 << " " << (y1 + y4) - y2 << endl;
        else
            cout << (x1 + x3) - x2 << " " << (y1 + y3) - y2 << endl;
    }
    
    return 0;
}

