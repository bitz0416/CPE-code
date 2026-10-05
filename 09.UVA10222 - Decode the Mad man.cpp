#include<iostream>
#include<string>
#include <cctype>
using namespace std;

int main()
{
    char c[2];
    int i;
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string input_char_str;
    
	while (cin.get(c[0]))
	{
        c[0] = tolower(c[0]);                 
        if (isspace(c[0]))
			cout << c[0];  
        else
		{
			c[1] = '\0';
			input_char_str = c;			
			i = keyboard.find(input_char_str);
        	cout << keyboard[i-2];
        }
    }
	
    return 0;
}
