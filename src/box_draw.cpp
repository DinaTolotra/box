#include "../include/box.hpp"


void Box::drawTopLine(int const lineBoxcount, int const contentMaxSize) {
	//	top left corner
	std::cout << utf8_border.at("RD");
	//	first cell floor
	for (int i=0; i<contentMaxSize; i++) {
		std::cout << utf8_border.at("RL");
	}
	//	last lineBoxcount-1 cell floor
	for (int i=1; i<lineBoxcount; i++) {
		//	fork
		std::cout << utf8_border.at("RDL");
		for (int j=0; j<contentMaxSize; j++)
			//	horizontal line
			std::cout << utf8_border.at("RL");
	}
	//	top right corner
	std::cout << utf8_border.at("DL") << '\n';
}


void Box::drawMiddleLine(int const lineBoxcount, int const contentMaxSize) {
	//	left line
	std::cout << utf8_border.at("URD");
	//	first cell floor
	for (int i=0; i<contentMaxSize; i++) {
		std::cout << utf8_border.at("RL");		
	}
	//	last lineBoxcount-1 cell floor
	for (int i=1; i<lineBoxcount; i++) {
		//	fork
		std::cout << utf8_border.at("URDL");
		for (int j=0; j<contentMaxSize; j++)
			//	horizontal line
			std::cout << utf8_border.at("RL");
	}
	//	right line
	std::cout << utf8_border.at("UDL") << '\n';
}

void Box::drawBottomLine(int const lineBoxcount, int const contentMaxSize) {
	//	bottom left corner
	std::cout << utf8_border.at("UR");
	//	first cell floor
	for (int i=0; i<contentMaxSize; i++) {
		std::cout << utf8_border.at("RL");
	}
	//	last lineBoxcount-1 cell floor
	for (int i=1; i<lineBoxcount; i++) {
		std::cout << utf8_border.at("URL");
		for (int j=0; j<contentMaxSize; j++)				
			std::cout << utf8_border.at("RL");
	}
	//	bottom right corner
	std::cout << utf8_border.at("UL") << '\n';
}

void Box::drawContentLine(vector<string> const & lineContent, int lineBoxcount, int contentMaxSize) {
	//	left line
	std::cout << utf8_border.at("UD");

	//	current string
	string current = lineContent.front();
	//	current string contentMaxSize
	int currentSize = current.size();
	//	empty space contentMaxSize to fill
	int emptySpaceSize = contentMaxSize-currentSize;

	//	current string output
	std::cout << current;
	//	empty space output
	for (int i=0; i<emptySpaceSize; i++) {
		std::cout << utf8_border.at("");
	}

	for (int i=1; i<lineBoxcount; i++) {
		//	word separator
		std::cout << utf8_border.at("UD");

		//	word update
		current = lineContent.at(i);
		currentSize = current.size();
		emptySpaceSize = contentMaxSize-currentSize;

		//	current string output
		std::cout << current;
		//	empty space output
		for (int i=0; i<emptySpaceSize; i++) {
			std::cout << utf8_border.at("");
		}
	}

	//	right line
	std::cout << utf8_border.at("UD") << '\n';
}