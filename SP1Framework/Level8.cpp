#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string firstlevel()
{
	string line;
	ifstream myfile("map9.txt");
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
<<<<<<< HEAD
					line[index] = 176;
=======
					line[index] = (char)176;
>>>>>>> parent of 4230ada... Merge branch 'master' of https://github.com/frostedd1/Studio_project_1
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
<<<<<<< HEAD

=======
>>>>>>> parent of 2dbf7ec... UIs
=======

>>>>>>> parent of 4230ada... Merge branch 'master' of https://github.com/frostedd1/Studio_project_1
		}
		myfile.close();
	}


	return line;
}
