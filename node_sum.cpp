#include<bits/stdc++.h>
using namespace std;



struct Node{


    int key;
    Node*left,*right;


};
int Sum (Node*root){
int sum=0;
queue<Node*>q;
q.push(root);
q.push(NULL);
while(!q.empty()){
Node*temp=q.front();
if (temp==NULL){
    q.pop();
    if (!q.empty()){
        q.push(NULL);

    }
}

else {
    sum+=temp->key;
    q.pop();
    if (temp->left){
        q.push(temp->left){

        }
        if (temp->right){
            q.push(temp->right);
        }
    }
}
return sum;

}



    





