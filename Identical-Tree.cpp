#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;


    Node(int data){

        this->data = data;
        this->left = NULL;
        this->right = NULL;

    }


};

class solution{
    public:

    bool identical(Node* r1 , Node* r2){
        //base case
        if(r1==NULL && r2==NULL){
            return true;

        }

        if(r1!=NULL && r2==NULL){
            return false;
        }

        if(r1==NULL && r2!=NULL){
            return false;

        }

        bool left = identical(r1->left , r2->left);
        bool right = identical(r1->right , r2->right);


        bool value= r1->data == r2->data;



        if(left && right && value){
            return true;
        }
        else{
            return false;
        }



    }


};
