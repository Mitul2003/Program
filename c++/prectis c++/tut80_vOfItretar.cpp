#include<bits/stdc++.h>
using namespace std;

/*
itretar
.begin() == v[0]
.ebd() == next to last

*/
void printvec(vector<int> &v){
    cout<<"Size of vector is : "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    

}
int main(){
    // vector<int> v ={1,2,3,4,5};
    // printvec(v);
    // cout<<endl;
    
    // vector<int> :: iterator it;
    // for ( it = v.begin(); it != v.end(); it++)
    // {
    //     cout<<(*it)<<endl; //it++ -> next iterator (in vec. continus location )
    //                         // it+1 -> next local
        
        
    // }
    vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator it;
        for ( it = v_p.begin(); it != v_p.end(); it++)
        {
             cout<<(*it).first<< " "<<(*it).second<<endl;
            //  cout<< (it->first) << " "<< (it->second) << endl;
        }
    
return 0;
}