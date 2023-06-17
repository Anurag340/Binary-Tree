#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node*left,*right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;


    }
};

class solution{
    public:

    pair<bool,int>balancedTree(Node*root){

        // base case

        if(root==NULL){
            pair<bool,int>p={true,0};
            return p;
        }

        pair<bool,int>leftPart=balancedTree(root->left);
        pair<bool,int>rightPart=balancedTree(root->right);



        bool leftAns = leftPart.first;
        bool rightAns = rightPart.first;

        bool value = abs(leftPart.second - rightPart.second) <= 1 ;

        pair<bool,int>ans;
        int h1 = max(leftPart.second , rightPart.second) + 1;
        ans.second=h1;

        if(leftAns && rightAns && value){
            ans.first=true;
        }

        else{
            ans.first=false;

        }

        return ans;



    }
};

