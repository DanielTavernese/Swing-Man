#pragma once

#include <SDL.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

class HighScore{
public:
	HighScore();
	int getHighScore();
	void setHighScore(int score);
	void writeHighScore();
private:
	int HighestScore = 0;
};
