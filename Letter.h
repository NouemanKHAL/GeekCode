/*
 * Letter.h
 *
 *  Created on: 13 août 2017
 *      Author: Terrexo
 */

#ifndef LETTER_H_
#define LETTER_H_

#include <string>

using namespace std;

class Letter {
public:
	Letter();

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
