// INITIAL TEST INT MAIN


#include "Game.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;






int main()
{
	// Initialize the random number generator.  (You don't need to
	// understand how this works.)
	srand(static_cast<unsigned int>(time(0)));

	// Create a game
	// Use this instead to create a mini-game:   Game g(3, 3, 2);
	Game g(15, 18, 80);

	// Play the game
	g.play();
}


// PAST TEST INT MAIN, COMPLETED DOES NOT COMPILE
//
//#include "Past.h"
//int main()
//{
//	Past pt;
//}////// ARENA TEST 1 INT MAIN, COMPLETED DOES NOT COMPILE////#include "globals.h"
//#include "Robot.h"
//#include "Player.h"
//int main()
//{
//	Arena a(10, 10);
//}//// ROBOT TEST 1 INT MAIN, COMPLETED DOES NOT COMPILE////#include "Player.h"
//#include "Arena.h"
////int main()
//{
//	Arena a(10, 20);
//	Player p(&a, 2, 3);
//	Robot r(&a, 1, 1);
//}

// PLAYER TEST 1 INT MAIN, COMPLETED FUNCTIONALLY COMPILES

//#include "Arena.h"
//#include "Player.h"
//#include "Past.h"
//#include "globals.h"
//int main()
//{
//	Arena a(2, 2);
//	a.addPlayer(1, 1);
//	a.player()->move(RIGHT);
//	a.player()->stand();
//	a.player()->move(DOWN);
//	a.thePast().printThePast();
//}


//// PLAYER AND ARENA TEST INT MAIN, COMPLETED FUNCTIONAL

//#include "Player.h"
//#include "Arena.h"
//int main()
//{
//	Arena a(10, 20);
//	Player p(&a, 2, 3);
//}

//// ARENA AND PLAYER TEST INT MAIN, COMPLETED FUNCTIONAL


//#include "Arena.h"
//#include "Player.h"
//int main()
//{
//	Arena a(10, 20);
//	Player p(&a, 2, 3);
//}

//// GLOBALS , ARENA , PLAYER TEST INT MAIN, COMPLETED FUNCTIONAL

//#include "globals.h"
//#include "Player.h"
//#include "Arena.h"
//int main()
//{
//	Arena a(10, 20);
//	Player p(&a, 2, 3);
//}


//// ARENA INCLUDE TEST,COMPLETED FUNCTIONAL


//#include "Arena.h"
//int main()
//{
//	Arena a(10, 18);
//	a.addPlayer(2, 2);
//}

////PLAYER INCLUDE TEST, COMPLETED FUNCTIONAL


//#include "Player.h"
//int main()
//{
//	Player p(0, 1, 1);
//}

// ROBOT INCLUDE TEST, COMPLETED FUNCTIONAL

//#include "Robot.h"
//int main()
//{
//	Robot r(0, 1, 1);
//}

// PAST INCLUDE TEST, COMPLETED


//#include "Past.h"
//int main()
//{
//	Past pt(2, 2);
//	pt.markIt(1, 1);
//	pt.printThePast();
//}

// TESTING FOR CONFLICTING COMPILES



//#include "Game.h"
//#include "Game.h"
//#include "Arena.h"
//#include "Arena.h"
//#include "Past.h"
//#include "Past.h"
//#include "Player.h"
//#include "Player.h"
//#include "Robot.h"
//#include "Robot.h"
//#include "globals.h"
//#include "globals.h"
//int main()
//{}


