#include <iostream>
using namespace std;

/*
Inheritance:
student -->test [Done]
student-->sports [Done]
test --> result [Done]
sports --> result [Done]
*/

class Student
{
protected:
    int roll_no;

public:
    void setnumber(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_mark(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_mark(void)
    {
        cout << "Your Result is here: " << endl
             << "maths: " << maths << endl
             << "physics " << physics << endl;
    }
};

class Sport : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your pt score is " << score << endl;
    }
};

class result : public Test, public Sport
{
private:
    float total;

public:
    void Didplay(void)
    {
        total = maths + physics + score;
        print_number();
        print_mark();
        print_score();
        cout << "YOur total score is : " << total << endl;
    }
};

int main()
{
    result mitul;
    mitul.setnumber(1261);
    mitul.set_mark(78.5, 88.5);
    mitul.set_score(9);
    mitul.Didplay();

    return 0;
}