


#include "Past.h"
#include"Player.h"
#include "globals.h"
#include<iostream>
using std::cout;
using std::endl;

Past::Past()
{
	nRows = 0;
	nCols = 0;
}

Past::Past(int Rows, int Cols)
{
	nRows = Rows;
	nCols = Cols;
	for (int r = 0; r <nRows+1; r++)
	{
		for (int c = 0; c < nCols+1; c++)
			pastgrid[r][c] = '.';
	}

}

bool Past::markIt( int r,  int c)
{
	if (r < nRows+1 && c < nCols+1) {
		if (pastgrid[r][c] == '.') {
			pastgrid[r][c] = 'A';
			return true;
		}
		else if (pastgrid[r][c] < 'A' + 25) {
			pastgrid[r][c]++;
				return true;
		}
	}

	else
	return false;
}

void Past::printThePast() const
{
	clearScreen();
	for (int r = 1; r <nRows+1; r++)
	{
		for (int c = 1; c < nCols+1; c++)
			cout << pastgrid[r][c];
		cout << endl;
	}
	cout << endl;
	std::cin.ignore(10000,'\n');

}

