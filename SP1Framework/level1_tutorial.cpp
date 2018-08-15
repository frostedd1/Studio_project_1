#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string firstlevel()
{
	string total;
	string line;
	ifstream myfile("tutmap.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			for (unsigned int index = 0; index < line.size(); index++)
			{
				switch (line[index])
				{
				case '#':
					line[index] = (char)219;
					break;
				case '$':
<<<<<<< HEAD
					line[index] = (char)176;
=======
					line[index] = (char)176; //negative trap tile
>>>>>>> a2269f7820acb356eb3cbef3d62fe1a900ee9ce4
					break;
				case '!':
					line[index] = (char)178; // positive trap tile
					break;
				case '&':
					line[index] = ' ';//monster tile
					break;
				case '@':
					line[index] = (char)177; // ending tile
					break;
				}
			}
			total += line + '\n';
		}
		myfile.close();
		return total;
	}
}
