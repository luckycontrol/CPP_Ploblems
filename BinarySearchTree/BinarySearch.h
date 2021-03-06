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

        // 크면 오른쪽, 작으면 왼쪽 서브트리로..
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
                t = (key > t->key) ? t->right : t->left;
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

        void remove(int key) {
            TreeNode *p, *t, *child, *succ_p, *succ;

            p = NULL;
            t = root;

            while(t != NULL && t->key != key) {
                p = t;
                t = (key > t->key) ? t->right : t->left;
            }

            if (t == NULL) {
                std::cout << "찾으시는 값이 없네요." << std::endl;
                return;
            }

            // 단일 노드인 경우
            if ((t->left == NULL) && (t->right == NULL)) {
                if (p->left == t) {
                    p->left = NULL;
                } else {
                    p->right = NULL;
                }
            }

            // 서브트리가 하나
            else if ((t->left == NULL) || (t->right == NULL)) {
                child = (t->left != NULL) ? t->left : t->right;
                if (p->left == t) {
                    p->left = child;
                } else {
                    p->right = child;
                }
            }

            // 서브트리가 둘
            // 오른쪽 서브트리에서 제일 작은 값으로 바꾸자.
            else {
                succ_p = t;
                succ = t->right;

                while(succ->left != NULL) {
                    succ_p = succ;
                    succ = succ->left;
                }

                if (succ_p->left == succ) {
                    succ_p->left = succ->right;
                } else {
                    succ_p->right = succ->right;
                }

                t->key = succ->key;
                t = succ;
            }

            delete t;
        }

        int search(int key) {
            TreeNode *t = root;

            while (t != NULL) {
                if (t->key == key) {
                    std::cout << "발견했어요!" << std::endl;
                    return t->key;
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