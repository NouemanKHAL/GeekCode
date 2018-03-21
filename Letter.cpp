#include <string>

using namespace std;

Letter::position = 0;

string Letter::getLine(int n){
	return lines[n];
}

void Letter::setLine(string line , int n){
	if(n==position) position++;
	lines[n]=line;
}



