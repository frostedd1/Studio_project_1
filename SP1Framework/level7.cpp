#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string seventhlevel()
{

	string line;
	ifstream myfile("map6.txt");
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
					line[index] = ' ';
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