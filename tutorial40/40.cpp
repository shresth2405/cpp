#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};
void Student::set_roll_no(int a)
{
    roll_no = a;
}
void Student::get_roll_no()
{
    cout << "THe roll no. is: " << roll_no << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam::set_marks(float a, float b)
{
    maths = a;
    physics = b;
}
void Exam::get_marks()
{
    cout << "The marks of maths and physics are :" << maths << " & " << physics << " respectively" << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display(void);
};

void Result::display()
{
    get_roll_no();
    cout << "The percentage is " << (maths + physics) / 2 << endl;
    ;
}

int main()
{
    cout << "Hello World" << endl;
    Result Harry;
    Harry.set_roll_no(12);
    Harry.set_marks(45, 90);
    Harry.display();
    return 0;
}