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
