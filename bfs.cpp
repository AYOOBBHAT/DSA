#include<bits/stdc++.h>
using namespace std;




class Node{

    public:
    int data;
    Node*left;
    Node*right;




    Node(int d){

        data=d;
        left=right=NULL;

    }


    Node*levelOrder(Node*root){

        queue<Node*>q;

        q.push(root);
        q.push(NULL);

        while (!q.empty()){

            Node*temp=q.front();
            if(temp==NULL){
                cout<<endl;
                q.pop();
            if(!q.empty)(){

              q.push(NULL);


            }
            }
            
        }


    }


};


int main(){


}