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
		int position=0;

	public:
		Letter();

		string getLine(int n){
			return lines[n];
		}

		void setLine(string line , int n){
			if(n==position) position++;
			lines[n]=line;
		}

};

#endif /* LETTER_H_ */
