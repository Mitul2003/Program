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

    int replace(Node *root)
    {
            if(root == NULL)
                return 0;

        replace(root->left);
        replace(root->right);

        if(root->left != NULL)
            root->data += root->left->data;

        if(root->right != NULL)
            root->data += root->right->data;
    }

    void print_tree(Node *root)
    {
        if(root == NULL)
            return;
        cout << root->data << " ";
        print_tree(root->left);
        print_tree(root->right);
    }
    
    int main(){
        struct Node *root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);

        root->left->left = new Node(4);
        root->left->right = new Node(5);
        root->right->left = new Node(6);
        root->right->right = new Node(7);

        replace(root);
        print_tree(root);
        return 0;
    }