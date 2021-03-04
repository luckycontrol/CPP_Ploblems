#include "BinarySearch.h"

int main() {
    BinarySearchTree b = BinarySearchTree();

    b.insert(5);
    b.insert(10);
    b.insert(9);
    b.insert(7);

    b.search(7);
    return 0;
}