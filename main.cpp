#include <iostream>
#include <vector>
#include "box.hpp"

using namespace std;

int main() {
	Box box;
	vector<vector<string>> content = {
		{"Greeting", "Hello world"},
		{"Introducing", "My name is Tolotra"}
	};
	box.setContent(content);
	box.drawFullBox();

	return 0;
}