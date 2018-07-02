#ifndef __PAST_H_
#define __PAST_H_


#include"globals.h"



class Past
{
public:
	Past();
	Past(int Rows, int Cols);
	bool markIt( int r, int c);
	void printThePast() const;

private:
	int nRows;
	int nCols;

	char pastgrid[MAXROWS][MAXCOLS];
	
};

#endif 