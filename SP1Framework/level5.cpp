#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string fifthlevel()
{

	string line;
	ifstream myfile("map4.txt");
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
					line[index] = 'M';
					break;
				case '%':
					line[index] = 'E';
					break;
				}
			}
<<<<<<< HEAD
			cout << line << endl;
		}
		myfile.close();
=======
		}
		myfile.close();
		return line;
>>>>>>> parent of 2dbf7ec... UIs
	}
	return line;
}
