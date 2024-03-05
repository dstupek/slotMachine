#pragma once
#ifndef Reel_H
#define Reel_H
#include <string>
using namespace std;

class Reel
{
	private: 
		string faces[20];
		string position;
		string selectedFace;
		int index;
	public: 
		Reel();
		string getFace();
		string getPosition();
		string spin();
	
};
#endif

