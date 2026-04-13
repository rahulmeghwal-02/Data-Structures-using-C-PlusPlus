#include <iostream>
using namespace std;

// Record (or struct) to represent a student
struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{

    Student s1;
    s1 = {1034, "rahul", 73.2};
    cout << "Roll No : " << s1.rollNo << endl;
    cout << "Name : " << s1.name << endl;
    cout << "Marks : " << s1.marks << endl;

    return 0;
}