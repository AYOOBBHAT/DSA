#include<bits/stdc++.h>
using namespace std;



class Node{

    public:
    int key;
    Node*left;
    Node*right;
    Node(int key){

        this->key=key;
        left=right=NULL;
    }
};

Node*insert(Node*root,int x){

    if(root==NULL){
        return new Node(x);
    }
//recursive  case
if(x < root->key){
    root->left=insert(root->left,x);
}

else{

    root->right=insert(root->right,x);
}


return root;



}

void print(Node*root){
    if(root==NULL)return;
    print (root->left);
    cout<<root->key << ","<<endl;
    print (root->right);


}


int main(){

    Node*root=NULL;
    int arr[]={1,3,4,6,8,7,9};
    for (int x:arr){
        root=insert(root,x);


    }
}