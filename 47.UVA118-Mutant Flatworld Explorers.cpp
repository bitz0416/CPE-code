#include <iostream>
#include <string> 
using namespace std;

int main()
{
	int mapX, mapY, i, j, robotX, robotY, dir;
    char position, orientation[4] = {'N','E','S','W'};
    string instruction;
    bool lost, scent[51][51] = {false};
    
    cin >> mapX >> mapY;
    while(cin >> robotX >> robotY >> position)
	{
		lost = false;
        if(position == 'N')
        	dir = 0;
        else if(position == 'E')
            dir = 1;
        else if(position == 'S')
            dir = 2;
        else if(position == 'W')
            dir = 3;
        
        cin >> instruction;
        
        for(i = 0; i < instruction.length(); i++)
		{
			if (instruction[i] == 'L')
				dir = (dir + 3) % 4;
			else if (instruction[i] == 'R')
				dir = (dir + 1) % 4;
			else // instruction[i] == 'F'
			{
				if (dir == 0) // N
			 		robotY++;
				else if (dir == 1) // E
					robotX++;
				else if (dir == 2) // S
					robotY--;
				else // dir == 3, W
					robotX--;
				
				if(robotX < 0 || robotX > mapX || robotY < 0 || robotY > mapY)
				{
					if (dir == 0) // N
			 			robotY--;
					else if (dir == 1) // E
						robotX--;
					else if (dir == 2) // S
						robotY++;
					else // dir == 3, W
						robotX++;
					
					if(!scent[robotX][robotY])
					{
                    	lost = true;
                        scent[robotX][robotY] = true;
                        break;
                    }
				}
			}
		}
		cout << robotX << " " << robotY << " " << orientation[dir];
		if(lost)
        	cout << " LOST";
        cout << endl;
	}
	
	return 0;
}
