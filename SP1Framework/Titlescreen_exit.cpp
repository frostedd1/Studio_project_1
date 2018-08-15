#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string titleexit()
{

	string line;
	ifstream myfile("exit.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			for (int index = 0; index < line.size(); index++)
			{
				switch (line[index])
				{
				case '-':
					line[index] = (char)196;
					break;
				case '|':
					line[index] = (char)179;
					break;
				case '.':
					line[index] = (char)218;
					break;
				case ',':
					line[index] = (char)192;
					break;
				}
			}
		}
		myfile.close();
		return line;
	}
}
