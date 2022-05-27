#pragma once
#include <string>

using std::string;

class Course
{
private:
    int identifier;
    string name;
public:
    Course(/* args */);
    ~Course();
    void setIdentifier(int identifier);
    void setName(string name);
    int getIdentifier();
    string getName();
};