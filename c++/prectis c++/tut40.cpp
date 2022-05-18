#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

class Exam : public Student
{
protected:
    float maths;
    float physic;

public:
    void set_mark(float, float);
    void get_mark(void);
};

class Result : public Exam
{
    float per;

public:
    void Display_result()
    {
        get_roll_number();
        get_mark();
        cout << "Your per. is " << (maths + physic) / 2 <<" %"<< endl;
    }
};

void Exam ::set_mark(float m1, float m2)
{
    maths = m1;
    physic = m2;
}

void Exam ::get_mark(void)
{
    cout << "THe mark obtained in maths are : " << maths << endl;
    cout << "THe mark obtained in physics are : " << physic << endl;
}

void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

int main()
{
    /*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
    */
   
    Result mitul;
    mitul.set_roll_number(1261);
    mitul.set_mark(88.0 , 85.0);
    mitul.Display_result();
    return 0;
}