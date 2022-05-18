#include<iostream>
#include<vector>
#include<algorithm>

using namespace std; 

template<class t>
void display(vector<t> &c){
cout<<"Display in this vector"<<endl;

    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i]<< " ";
        // cout<<c.at(i)<< " ";

    }
        cout<<endl;
}
int main(){
    // Ways to create a vectore
    // vector<int> vec1;  // zero length integer vectore
    //   int element, size=5;
    // cout<<"Enter the size of your vectore"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector"<<endl;
    //     cin>>element;

    //     vec1.push_back(element);
    // }
    
    // // vec1.pop_back();
    // //vec1.push_back(55);
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();    // beging -> first element ne point kare
    // vec1.insert(iter+1,3,566);
    // display(vec1);

    // vector<char> vec2(4);  // 4-element character vectore
    //  vec2.push_back('5');
    //  display(vec2);

    // vector<char> vec3(vec2);  // 4-element character vectore from vec2
    //  display(vec3);

    vector<int> vec4(4,13);  // 6-element  vectore of 3s
    display(vec4);
    cout<<vec4.size();


  

    

    return 0;
}