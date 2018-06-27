#ifndef __PAST_H_
#define __PAST_H_






class Past
{
public:
	Past(int nRows, int nCols);
	bool markIt(int r, int c);
	void printThePast() const;
};

#endif 