#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string firstlevel()
{
	string line;
	ifstream myfile("tutmap.txt");
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
					line[index] = 176;
					break;
				case '@':
					line[index] = 177;
					break;
				case '%':
					line[index] = 'E';
					break;
				}
			}
			
		}
		myfile.close();
	}

	
	return line;
}
