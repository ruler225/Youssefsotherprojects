#ifndef FILELOG_H
#define FILELOG_H

#include<iostream>
#include<string>
#include<fstream>
#include<strstream>

using namespace std;

class filelog {
protected:
	string filename;
	ofstream log;
public:
	filelog(string name): filename(name) {
	filename += ".log";
	log.open(filename);
	}   

	bool warning(string item) {
	if (log.fail())
		return false;

		log << "Warning: " << item << endl;
		
	return true;
	}


	bool error(string item) {
	if (log.fail())
		return false;

		log << "ERROR: " << item << endl;
		
	return true;
	}


	bool info(string item) {
	if (log.fail())
		return false;

		log << "Information: " << item << endl;

	return true;
	}

	bool bad() {
	if (log.fail())
		return true;

	else 
		return false;
	}

	bool good() {
	if (log.fail()) 
		return false;
	
	else {
		log << "Information: The log file was created and opened successfully." << endl;
		return true;
	}
	}

};



#endif


