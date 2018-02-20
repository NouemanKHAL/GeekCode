//============================================================================
// Name        : MyFirstProject.cpp
// Author      : Noueman Khalikine
// Version     : 1.01 FIXED K letter
// Copyright   : Contact me at : noueman.khal@gmail.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Letter.h"

using namespace std;


int main() {
	// declarer liste d'objet
	
	Letter tab[50];
	Letter A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;
{
A.setLine("#####",0);
A.setLine("#   #",1);
A.setLine("#####",2);
A.setLine("#   #",3);
A.setLine("#   #",4);

B.setLine("#####",0);
B.setLine("#   #",1);
B.setLine("#### ",2);
B.setLine("#   #",3);
B.setLine("#####",4);

C.setLine("#####",0);
C.setLine("#    ",1);
C.setLine("#    ",2);
C.setLine("#    ",3);
C.setLine("#####",4);

D.setLine("#####",0);
D.setLine("#   #",1);
D.setLine("#   #",2);
D.setLine("#   #",3);
D.setLine("#####",4);

E.setLine("#####",0);
E.setLine("#    ",1);
E.setLine("#####",2);
E.setLine("#    ",3);
E.setLine("#####",4);

F.setLine("#####",0);
F.setLine("#    ",1);
F.setLine("#####",2);
F.setLine("#    ",3);
F.setLine("#    ",4);

G.setLine("#####",0);
G.setLine("#    ",1);
G.setLine("# ###",2);
G.setLine("#   #",3);
G.setLine("#####",4);

H.setLine("#   #",0);
H.setLine("#   #",1);
H.setLine("#####",2);
H.setLine("#   #",3);
H.setLine("#   #",4);

I.setLine("#####",0);
I.setLine("  #  ",1);
I.setLine("  #  ",2);
I.setLine("  #  ",3);
I.setLine("#####",4);

J.setLine("#####",0);
J.setLine("    #",1);
J.setLine("    #",2);
J.setLine("#   #",3);
J.setLine("#####",4);

K.setLine("#   #",0);
K.setLine("#  # ",1);
K.setLine("###  ",2);
K.setLine("#  # ",3);
K.setLine("#   #",4);

L.setLine("#    ",0);
L.setLine("#    ",1);
L.setLine("#    ",2);
L.setLine("#    ",3);
L.setLine("#####",4);

M.setLine("#   #",0);
M.setLine("## ##",1);
M.setLine("# # #",2);
M.setLine("#   #",3);
M.setLine("#   #",4);

N.setLine("#   #",0);
N.setLine("##  #",1);
N.setLine("# # #",2);
N.setLine("#  ##",3);
N.setLine("#   #",4);

O.setLine("#####",0);
O.setLine("#   #",1);
O.setLine("#   #",2);
O.setLine("#   #",3);
O.setLine("#####",4);

P.setLine("#####",0);
P.setLine("#   #",1);
P.setLine("#####",2);
P.setLine("#    ",3);
P.setLine("#    ",4);

Q.setLine("#####",0);
Q.setLine("#   #",1);
Q.setLine("#   #",2);
Q.setLine("# # #",3);
Q.setLine("#####",4);

R.setLine("#####",0);
R.setLine("#   #",1);
R.setLine("#### ",2);
R.setLine("#  ##",3);
R.setLine("#   #",4);

S.setLine("#####",0);
S.setLine("#    ",1);
S.setLine("#####",2);
S.setLine("    #",3);
S.setLine("#####",4);

T.setLine("#####",0);
T.setLine("  #  ",1);
T.setLine("  #  ",2);
T.setLine("  #  ",3);
T.setLine("  #  ",4);

U.setLine("#   #",0);
U.setLine("#   #",1);
U.setLine("#   #",2);
U.setLine("#   #",3);
U.setLine("#####",4);

V.setLine("#   #",0);
V.setLine("#   #",1);
V.setLine("#   #",2);
V.setLine(" # # ",3);
V.setLine("  #  ",4);

W.setLine("#   #",0);
W.setLine("#   #",1);
W.setLine("# # #",2);
W.setLine("## ##",3);
W.setLine("#   #",4);

X.setLine("#   #",0);
X.setLine(" # # ",1);
X.setLine("  #  ",2);
X.setLine(" # # ",3);
X.setLine("#   #",4);

Y.setLine("#   #",0);
Y.setLine(" # # ",1);
Y.setLine("  #  ",2);
Y.setLine("  #  ",3);
Y.setLine("  #  ",4);

Z.setLine("#####",0);
Z.setLine("   # ",1);
Z.setLine("  #  ",2);
Z.setLine(" #   ",3);
Z.setLine("#####",4);


}
	string name;
	unsigned int i,j, cpt=0;
	// lire le mot en input
	cout << "Please Input Your Name : " ;
	cin >> name;
	cout << "\n\n";

	// switch case ==> affecter au tableau l'objet correspondant à chaque lettre
	for( i=0;i<name.length();i++){
		name[i]=toupper(name[i]);
		switch(name[i]){
			case 'A': liste[cpt]=A;cpt++;break;
			case 'B': liste[cpt]=B;cpt++;break;
			case 'C': liste[cpt]=C;cpt++;break;
			case 'D': liste[cpt]=D;cpt++;break;
			case 'E': liste[cpt]=E;cpt++;break;
			case 'F': liste[cpt]=F;cpt++;break;
			case 'G': liste[cpt]=G;cpt++;break;
			case 'H': liste[cpt]=H;cpt++;break;
			case 'I': liste[cpt]=I;cpt++;break;
			case 'J': liste[cpt]=J;cpt++;break;
			case 'K': liste[cpt]=K;cpt++;break;
			case 'L': liste[cpt]=L;cpt++;break;
			case 'M': liste[cpt]=M;cpt++;break;
			case 'N': liste[cpt]=N;cpt++;break;
			case 'O': liste[cpt]=O;cpt++;break;
			case 'P': liste[cpt]=P;cpt++;break;
			case 'Q': liste[cpt]=Q;cpt++;break;
			case 'R': liste[cpt]=R;cpt++;break;
			case 'S': liste[cpt]=S;cpt++;break;
			case 'T': liste[cpt]=T;cpt++;break;
			case 'U': liste[cpt]=U;cpt++;break;
			case 'V': liste[cpt]=V;cpt++;break;
			case 'W': liste[cpt]=W;cpt++;break;
			case 'X': liste[cpt]=X;cpt++;break;
			case 'Y': liste[cpt]=Y;cpt++;break;
			case 'Z': liste[cpt]=Z;cpt++;break;
		}
	}

	for( j=0;j<5;j++){

			for( i=0;i<cpt;i++){

						cout << liste[i].getLine(j) << ' ';
			}

			cout << endl;

	}


	ofstream myfile;
	  myfile.open ("YourName.txt");

		for( j=0;j<5;j++){

				for( i=0;i<cpt;i++){

							myfile << liste[i].getLine(j) << ' ';
				}

				myfile << endl;

		}
	  myfile.close();


	// switch case ==> affecter au tableau l'objet correspondant à chaque lettre
	// for, parcourir tableau - concatener jusqu'a positionFinale :) via un compteur / pointeur
	// ez


	cout << "\n\n\n" << "WriteYourName v1.0 :" << endl << "BY TERREXO - Contact : noueman.khal@gmail.com , Enjoy ! ;)" << endl << endl;

	system("PAUSE");
	return 0;
}
