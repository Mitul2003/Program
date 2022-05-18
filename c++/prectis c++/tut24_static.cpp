#include <iostream>
using namespace std;
//count is static data member of class Employ
class Empoly
{
    int id;
    static int count; //*************

public:
    void setData(void)
    {
        cout << "Enter your  id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this Empoly is " << id << " and this is empoly number" << count << endl;
    }
    static void getcount(void){                              // static Function
        cout<<"The value of count is "<<count<<endl;
    }
};

int Empoly ::count; //=1000;  // Default value 0

int main()
{
    Empoly mitul, rohan, dhaval;
    // mitul.id=1     // privet data
    mitul.setData();
    mitul.getdata();

    rohan.setData();
    rohan.getdata();

    dhaval.setData();
    dhaval.getdata();

    Empoly :: getcount();
    return 0;
}