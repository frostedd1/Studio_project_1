#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string sixthlevel()
{

	string line;
	ifstream myfile("map5.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			for (int index = 0; index < line.size(); index++)
			{
				switch (line[index])
				{
				case '#':
					line[index] = 219;
					break;
				case '$':
					line[index] = ' '; //negative trap tile
					break;
				case '!':
					line[index] = ' '; // positive trap tile
					break;
				case '&':
					line[index] = ' ';//monster tile
					break;
				case '@':
					line[index] = 177; // ending tile
					break;
				}
			}
		}
		myfile.close();
	}
	return line;
}
