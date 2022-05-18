#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
        point(int a, int b){
            x=a;
            y=b;
        }
        void displaypoint(){
            cout<<"The point is ("<<x<<" , "<<y<<" ) "<<endl;
        }

};
int main(){
    point p(1,1);
    point q(2,2);
    // point p;
    p.displaypoint();
    q.displaypoint();

    
    return 0;
}