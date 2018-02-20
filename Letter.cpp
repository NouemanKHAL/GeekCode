#ifndef LETTER_H_
#define LETTER_H_

#include <string>

using namespace std;

class Letter {
public:
	Letter(char* adc);

	string getLine(int n){
		return lines[n];
	}

	void setLine( string line , int n){
		if(n==position) position++;
		lines[n]=line;
	}
private:
	string lines[5];
	int position=0;

};

#endif /* LETTER_H_ */
