#pragma once
#include <string>

using std::string;

class Student
{
private:
    int identifier;
    string name;
    string surname;
public:
    Student(/* args */);
    ~Student();
    void setIdentifier(int identifier);
    void setName(string name);
    void setSurname(string surname);
    int getIdentifier() ;
    string getName() ;
    string getSurname() ;
};