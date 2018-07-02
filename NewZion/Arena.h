
class Player;

class Robot;



#include<string>
#include"globals.h"
#include"Past.h"\


#ifndef __ARENA_H_
#define __ARENA_H_

#include<iostream>
using namespace std;

class Arena
{
public:
	// Constructor/destructor
	Arena(int nRows, int nCols) :m_Past(nRows, nCols) {
		if (nRows <= 0 || nCols <= 0 || nRows > MAXROWS || nCols > MAXCOLS)
		{
			cout << "***** Arena created with invalid size " << nRows << " by "
				<< nCols << "!" << endl;
			exit(1);
		}
		m_rows = nRows;
		m_cols = nCols;
		m_player = nullptr;
		m_nRobots = 0;
		const int i = nRows, j = nCols;



	};
	~Arena();

	// Accessors
	int     rows() const;
	int     cols() const;
	Player* player() const;
	int     robotCount() const;
	int     nRobotsAt(int r, int c) const;
	void    display(std::string msg) const;
	Past& thePast();

	// Mutators
	bool   addRobot(int r, int c);
	bool   addPlayer(int r, int c);
	void   damageRobotAt(int r, int c);
	bool   moveRobots();

private:
	int     m_rows;
	int     m_cols;
	Player* m_player;
	Robot*  m_robots[MAXROBOTS];
	int     m_nRobots;
	Past   m_Past;
};

#endif // !