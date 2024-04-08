#include <iostream>
using namespace std;

// Define the struct
struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int value) : key(value), left(nullptr), right(nullptr) {}
};

// Function to insert a new node into the BST
Node* insertNode(Node* root, int key) {
    // If the tree is empty, create a new node and make it the root
    if (root == nullptr) {
        return new Node(key);
    }
    
    // If the key is less than the current node's key, insert into the left subtree
    if (key < root->key) {
        root->left = insertNode(root->left, key);
    }
    // If the key is greater than the current node's key, insert into the right subtree
    else if (key > root->key) {
        root->right = insertNode(root->right, key);
    }
    
    // If the key is already present in the tree, do nothing
    return root;
}

// Function to print the inorder traversal of the BST
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->key << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;

    // Insert nodes into the BST
    root = insertNode(root, 10);
    insertNode(root, 5);
    insertNode(root, 15);
    insertNode(root, 7);
    insertNode(root, 12);
    insertNode(root, 20);

    cout << "Inorder traversal of the BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}

