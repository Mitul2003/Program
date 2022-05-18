#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
#define print(T,n) for(int i = 0 ; i < n ; i++) cout << T[i] << " ";
 
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int height(Node * root)
{
    if(root == NULL)
        return 0;
    int lhight = height(root->left);
    int rhight = height(root->right);
    return max(lhight,rhight) + 1;
}
bool isBalance(Node *root)
{
    if(root == NULL)
        return true;
    if(isBalance(root->left) == false)
        return false;
    if(isBalance(root->right) == false)
        return false;

    int lh = height(root->left); 
    int lr = height(root->right); 

    if(abs(lh - lr) <= 1) return true;
    else return false;
}

  
 
int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    if(isBalance(root)) cout << "Balanced tree";
    else cout << "UnBalanced treee";

    return 0;
}