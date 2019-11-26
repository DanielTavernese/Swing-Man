#include "HighScore.h"

HighScore::HighScore() {
//	ifstream fin( "HighScore.txt" );
//	string line;
//	while( getline( fin, line ) ) {
//	    // process each line
//	    if( line.find( "HIGHSCORE" ) != string::npos ) {
//	        // cap. line
//	        stringstream ss( line );
//	        ss >> this->HighestScore; // this will ignore whitespace
//	        //...
//	        ss.str("");
//	        ss.clear();
//	    }
//	    else{
//	    	this->HighestScore = 0;
//	    }
	string str;
	ifstream myfile ("HighScore.txt");
	int score;
	if (myfile.is_open()){
		while (!myfile.eof()){
			myfile >> str;
			score = stoi(str);
		}
		myfile.close();
	}
	else cout << "Unable to open file";
	this->HighestScore = score;
//	stringstream ss;
//	ss << str;
//	string temp;
//	int found;
//	while (!ss.eof()) {
//		ss >> temp;
//		if (stringstream(temp) >> found){
//			this->HighestScore = found;
//		}
//		temp = "";
//	}
};
void HighScore::setHighScore(int score){
	if(this->HighestScore < score){
		this->HighestScore = score;
	}
}
int HighScore::getHighScore(){
	return this->HighestScore;
}

