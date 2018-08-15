#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string thirdlevel()
{

	string line;
	ifstream myfile("map2.txt");
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
					line[index] = 'P';
					break;
				}
			}
<<<<<<< HEAD
<<<<<<< HEAD

		}
		myfile.close();
=======
		}
		myfile.close();
		return line;
>>>>>>> parent of 2dbf7ec... UIs
=======

		}
		myfile.close();
>>>>>>> parent of 4230ada... Merge branch 'master' of https://github.com/frostedd1/Studio_project_1
	}

	
	return line;
}
