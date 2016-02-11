#ifndef GUARD_board_h
#define GUARD_board_h

#include <string>
#include <vector>

// board.h
class Board
{
public:

	std::vector < std::vector<std::tuple<double, bool>> > grid;
	std::vector < std::vector<std::tuple<double, bool>> > new_grid;
	void jacobiUpdate();
	void writeBoard(std::string);
	void bmpInitialise(std::string);
	bool iterateAgain(double);
};

#endif
