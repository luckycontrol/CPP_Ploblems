#include <iostream>
#ifndef BINARY_SEARCH
#define BINARY_SEARCH

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;

class BinarySearchTree {
    private:
        TreeNode* node;
        int tree_size;

    public:
        BinarySearchTree() {
            tree_size = 0;
            node = NULL;
        }

        TreeNode* search(int key) {
            while (node != NULL) {
                if (node->data == key) return node;
                else if(node->data > key) {
                    node = node->right;
                }
                else {
                    node = node->left;
                }
            }

            return NULL;
        }
};

#endif