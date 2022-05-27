#include <iostream>
#include <fstream>
#include <string>
#include "./include/Course.hpp"
#include "./include/Student.hpp"

using namespace std;

class AttendanceManagement
{
public:
    AttendanceManagement(){}
    ~AttendanceManagement(){}
    void takeAttendance(Student* student, Course* course, string dateTime, bool state)
    {
        ofstream file("./attendance.csv", ios::app);
        if (file)
        {
            file << student->getName() 
            << ',' << student->getSurname() 
            << ',' << student->getIdentifier()
            << ',' << course->getIdentifier()
            << ',' << course->getName()
            << ',' << dateTime
            << ',' << state << '\n';
        }
        file.close();

    }
    void showAttendance()
    {
        ifstream file("./attendance.csv");
        string rawData;
        if (file)
        {
            while (getline(file, rawData))
            {
                cout << rawData << '\n';
            }
        }
        file.close();
        
    }
};

int main()
{
    Student* student = new Student();
    student->setIdentifier(1);
    student->setName("Juan");
    student->setSurname("Perez");

    Course* course = new Course();
    course->setIdentifier(1);
    course->setName("Algebra");

    AttendanceManagement* attendanceManagement = new AttendanceManagement();
    attendanceManagement->takeAttendance(student, course, "2021-06-08", true);

    attendanceManagement->showAttendance();

    delete student;
    delete course;
    delete attendanceManagement;

    return 0;
}