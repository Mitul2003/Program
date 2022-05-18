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
int hightOfNodes(Node *root)
{
    if(root == NULL)
        return 0;
    int lhight = hightOfNodes(root->left);
    int rhight = hightOfNodes(root->right);
    return max(lhight,rhight) + 1;
}
// longest path between two end nodes
int calcDiameter(Node* root)
{
        if(root == NULL)
        return 0;
    int lhight = hightOfNodes(root->left);
    int rhight = hightOfNodes(root->right);
    int currDiameter = lhight + rhight + 1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter, max(lDiameter,rDiameter));
}
 
int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << hightOfNodes(root) << endl;
    cout << calcDiameter(root) << endl;
    return 0;
}