#include "../include/box.hpp"


Box::Box() {}


Box::~Box() {}


void Box::setContent(vector<vector<string>> content) {
    this->content = content;
}


void Box::drawFullBox() {
	int size = 0;	//	greatest string size
	int count = 0;	//	greatest array size

	if (content.empty()) {
		return;		//	to avoid exception
	}

	//	get greatest array size
	for (vector<string> v : content) {
		if (v.size() > count) {
			count = v.size();
		}
	}

	//	get greatest string size
	for (vector<string> v : content) {
		for (string str : v) {
			if (str.size() > size) {
				size = str.size();
			}
		}
	}

	//	fill line with empty string
	for (vector<string>& line : content) {
		for (int i=line.size(); i<count; i++) {
			line.push_back("");
		}
	}

	drawTopLine(count, size);
	drawContentLine(content.front(), count, size);		//	first element(index = 0)
	for (int i=1; i<content.size(); i++) {
		drawMiddleLine(count, size);
		drawContentLine(content.at(i), count, size);	//	ith element(index = i)
	}
	drawBottomLine(count, size);
}