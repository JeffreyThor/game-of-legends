//============================================================================== 
// File name    : Village.h
// Author       : Jeffrey Thor
// Date         : 10/22/2015
// Description  : Village Class - Game of Legends
// Collaborators: n/a
//==============================================================================

#ifndef VILLAGE_H
#define VILLAGE_H

#include <string>
#include <vector>
using namespace std;

class Village{
protected:
	std::vector<string> locations;
public:
	//default constructor
	Village();
	//introduces the village
	void intro();
	//sets the village locations
	void setLocations();
	//updates the village locations
	void updateLocations(int level);
	//prints the village locations
	void printLocations();
	//the user msy select a location
	string selection(string name);
};

#endif //VILLAGE_H