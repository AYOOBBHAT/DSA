#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = right = NULL;
    }
};

Node* buildTree() {
    int d;
    cin >> d;

    if (d == -1) {
        return NULL;
    }

    Node* n = new Node(d);
    n->left = buildTree();  // Removed unnecessary parameter
    n->right = buildTree(); // Removed unnecessary parameter
    return n;
}

int main() {
    Node* root = buildTree();
    // Rest of your code goes here
    return 0;
}
