#include"globals.h"
#ifndef __PAST_H_
#define __PAST_H_


class Past
{
public:
	
	Past(int Rows, int Cols);
	bool markIt( int r, int c);
	void printThePast() const;

private:
	int nRows;
	int nCols;

	char pastgrid[MAXROWS][MAXCOLS];
	
};

#endif 