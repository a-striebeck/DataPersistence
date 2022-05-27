#include "../include/Student.hpp"

Student::Student(/* args */){}
Student::~Student(){}
void Student::setIdentifier(int identifier){ this->identifier = identifier; }
void Student::setName(string name){ this->name = name; }
void Student::setSurname(string surname){ this->surname = surname; }
int Student::getIdentifier() { return this->identifier; }
string Student::getName() { return this->name; }
string Student::getSurname() { return this->surname; }
