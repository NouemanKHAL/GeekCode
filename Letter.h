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
		string lines[5];
		int position;
	public:
		Letter();
		string getLine(int n);
		void setLine(string line , int n);
};

#endif /* LETTER_H_ */
