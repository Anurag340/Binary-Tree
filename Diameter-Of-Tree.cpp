#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node*left;
    Node*right;


    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};


class solution{
    public:

    pair<int,int> diameter(Node* root){
        //base case
        if(root ==NULL){
            pair<int,int>p={0,0};
            return p;

        }

        pair<int,int>leftDia = diameter(root->left);
        pair<int,int>rightDia = diameter(root->right);

        int op1 = leftDia.first;
        int opt2 = rightDia.first;
        int opt3 = leftDia.second + rightDia.second + 1;

        pair<int,int>ans;
        ans.first = max(op1,max(opt2,opt3));
        ans.second = max(leftDia.second , rightDia.second) + 1 ;

        return ans;


    }


};

