#include <iostream>
#include <cmath>
//D=squrt√((x_2-x_1)²+(y_2-y_1)²)
using namespace std;
class point
{
    int x , y;
public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout<< "the point is (" << x << " , " << y << ")" << endl;
    }
    friend double distance(point, point);
};
double distance(point p1, point p2)
{
    double res = sqrt(pow(p1.x - p2.x, 2) +
                      pow(p1.y - p2.y, 2));
    return res;
}

int main()
{
    point p(1, 0);
    p.display();
    point q(70, 0);
    q.display();
    double result = distance(p, q);
    cout << result << endl;
    return 0;
}