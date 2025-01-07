#include <iostream>
using namespace std;

// Define the structure of a tree node
struct Node {
    int data;
    Node* left;
    Node* right;
    
    // Constructor to initialize a node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int sum=0;
// Function to calculate the sum of leaf nodes
void solve(Node* root) {
    if (root == NULL) return ; // Base case: If the node is NULL, return 0

    if (root->left == NULL && root->right == NULL) {
        sum+=root->data; // If it's a leaf node, return its value
    }

    // Recursively calculate the sum of the left and right subtrees
    // return solve(root->left) + solve(root->right);
    solve(root->left);
    solve(root->right);
}

// Wrapper function to call the solve function
int leafSum(Node* root) {
     solve(root);
     return sum;
}

int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    // root->right = new Node(2);
    root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    // root->left->left->left = new Node(8);
    // root->left->left->right = new Node(9);
    // root->right->right->left = new Node(10);
    // root->right->right->right = new Node(11);

    // Visual representation of the tree:
    //                 1
    //              /     \
    //            2         3
    //          /   \     /   \
    //         4     5   6     7
    //        / \           /   \
    //       8   9        10    11

    // Calculate the sum of leaf nodes
    int result = leafSum(root);

    // Output the result
    cout << "Sum of leaf nodes: " << result << endl;

    return 0;
}
