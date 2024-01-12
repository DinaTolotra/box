#ifndef BOX
#define BOX

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <cassert>
#include <map>

using namespace std;

//  clockwise priority: Up Right Down Left
static map<string, string> const utf8_border = {
    {"RL", "\u2500"}, {"UD", "\u2502"}, {"RD", "\u250c"},
    {"DL", "\u2510"}, {"UR", "\u2514"}, {"UL", "\u2518"},
    {"URD", "\u251c"}, {"UDL", "\u2524"}, {"RDL", "\u252c"},
    {"URL", "\u2534"}, {"URDL", "\u253c"}, {"", " "}
};

class Box {
private:
    vector<vector<string>> content;

public:
    Box();
    ~Box();

    void drawFullBox();

    void drawTopLine(int const lineBoxCount, int const contentMaxSize);
    void drawMiddleLine(int const lineBoxCount, int const contentMaxSize);
    void drawBottomLine(int const lineBoxCount, int const contentMaxSize);
    void drawContentLine(vector<string> const& lineContent,int lineBoxCount, int contentMaxSize);

    void setContent(vector<vector<string>> content);
};

#endif