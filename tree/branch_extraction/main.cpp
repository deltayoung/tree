#include <iostream>
#include <fstream>
#include <ios>
#include <string>
#include <sstream>
using namespace std;

#include "Point.h"

int main()
{
	string	inputFile = "C:/Users/gobeawanl/Documents/Tree Modelling/Data/tree-neighbourhood.txt",
			aLine;
	fstream fileStream(inputFile, ios::in);
	const int numNeighbours = 6;

	if (fileStream.is_open())
	{
		stringstream ss;
		float x, y, z;
		int neighbours[numNeighbours];	// nearest 6 neighbours in order of increasing distance
		while (getline(fileStream, aLine))
		{
			ss.str(aLine);
			Point newPoint;
			ss >> x >> y >> z;
			newPoint.setPoint(x, y, z);
			for (int i = 0; i < numNeighbours; i++)
				ss >> neighbours[i];


		}
		fileStream.close();


	}


	return 0;
}