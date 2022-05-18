#include <iostream>
#include <cstring>
using namespace std;

class MD  // absrec class. --> ani parthi biji derived class banav va
{
protected:
    string title;
    float rating;

public:
    MD(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0; // pure vitual function 
    
};

class MDvideo : public MD
{
    float videolength;

public:
    MDvideo(string s, float r, float vl) : MD(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "THis is a amejing video with title" << title << endl;
        cout << "Rating : " << rating << " out of five star " << endl;
        cout << "Length of this video if : " << videolength << " second " << endl;
        cout<<endl;
    }
};
class MDtex : public MD
{
    int words;

public:
    MDtex(string s, float r, int wc) : MD(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
        cout<<endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "MItul dudhat";
    vlen = 4.56;
    rating = 4.89;

    MDvideo djvideo(title, rating, vlen); 

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    MDtex djText(title, rating, words);
    // djText.display();

    MD *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/*

Rules for virtual functions
1.They cannot be static
2.They are accessed by object pointers
3.Virtual functions can be a friend of another class
4.A virtual function in the base class might not be used.
5.If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class

*/