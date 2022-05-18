#include<iostream>
using namespace std;
// pair<int,int>p; Decleration
int main(){
    pair<int,string> p;
    // p = make_pair(2,"abc");
    p = {2,"abc"};
    pair<int,string> p1 = p; // copy pair
    pair<int,string>& p1 = p; // refernce pair
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    pair<int,int> p_aree[3];
    p_aree[0] = {1,2};
    p_aree[2] = {2,3};
    p_aree[3] = {3,4};
    swap(p_aree[0],p_aree[3]);
    return 0;
}
