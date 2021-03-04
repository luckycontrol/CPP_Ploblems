#include <iostream>
#ifndef BINARY_SEARCH
#define BINARY_SEARCH

struct TreeNode {
    int key;
    // TreeNode를 가리키는 left, right 포인터 변수
    TreeNode *left, *right;
};

class BinarySearchTree {
    private:
        // TreeNode를 가리키는 포인터 변수
        TreeNode *root;

    public:
        BinarySearchTree() {
            root = NULL;
        }

        void insert(int key) {
            TreeNode *p, *t;

            p = NULL;
            t = root;

            while (t != NULL) {
                if (t->key == key) {
                    std::cout << "입력하신 값이 이미 있어요." << std::endl;
                    return;
                }

                p = t;
                if (key > t->key) {
                    t = t->right;
                } else {
                    t = t->left;
                }
            }

            TreeNode *n = new TreeNode;
            if (n == NULL) return;

            n->key = key;
            n->left = n->right = NULL;

            if (p != NULL) {
                if (key > p->key) {
                    p->right = n;
                } else {
                    p->left = n;
                }
            } else {
                root = n;
            }
        }

        TreeNode *search(int key) {
            TreeNode *t = root;

            while (t != NULL) {
                if (t->key == key) {
                    std::cout << "발견했어요!" << std::endl;
                    return t;
                }

                else if(key > t->key) {
                    t = t->right;
                } else {
                    t = t->left;
                }
            }

            return NULL;
        }

        
};

#endif