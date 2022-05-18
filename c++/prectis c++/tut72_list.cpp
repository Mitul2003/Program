#include<iostream>
#include<list>
using namespace std;

void Display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout << *it<<" ";
    }
    cout<<endl;
    
}

int main(){
    list<int> list1;    // List of 0 Length
    // int size,element;
    // cout<<"Enter your Size";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>element;

    //     list1.push_back(element);  
    // }
    
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12); 
    // list<int> :: iterator iter;
    // iter = list1.begin();  // beging -> first element ne point kare
     Display(list1);
     // Removing element from the list
     // list1.pop_front();
     // list1.remove(9);

//  sorting the list
//  list1.sort();
//  Display(list1);

    list1.reverse();
    Display(list1);

     list<int> list2(3);  // Empty list of size 3
     list<int> :: iterator iter;
     iter = list2.begin();
     *iter = 45;
     iter++;
     *iter = 6;
     iter++;
     *iter = 9;
     iter++;

    Display(list2);
    list1.sort();
    list2.sort();

    list1.merge(list2);
    cout<<"List 1 after Merging : ";
    Display(list1);

    return 0;
}