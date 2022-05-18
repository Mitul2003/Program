#include<iostream>
using namespace std;

class Empoly{
    int id;
    int salary;
    public:
        void setId(void){
            salary=122;
            cout<<"Enter the id of  empoly = ";
            cin>>id;
        }

        void getId(void){
            cout<<"The id of this empoly = " <<id<<endl;
        }
};

int main(){
    Empoly mitul,jay,vijay,karishl;
    //mitul.setId();
    //mitul.getId();

    Empoly fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
    
    return 0;
}