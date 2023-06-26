#include <iostream>
using namespace std;

class node {
   public:
    int data;
    node* left;
    node* right;
    node(int data = 0) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void inorder(node* n) {
    if (n) {
        inorder(n->left);
        cout << n->data << " ";
        inorder(n->right);
    }
}

int main() {
     return 0; }