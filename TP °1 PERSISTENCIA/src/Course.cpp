#include "../include/Course.hpp"

Course::Course(/* args */){}
Course::~Course(){}
void Course::setIdentifier(int identifier){ this->identifier = identifier; }
void Course::setName(string name){ this->name = name; }
int Course::getIdentifier(){ return this->identifier; }
string Course::getName(){ return this->name; }
