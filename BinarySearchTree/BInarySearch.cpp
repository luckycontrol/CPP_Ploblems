#include "BinarySearch.h"

int main() {
    BinarySearchTree b = BinarySearchTree();

    b.insert(5);
    b.insert(10);
    b.insert(9);
    b.insert(7);

    b.search(9);

    b.insert(15);
    b.search(15);

    b.remove(10);
    std::cout << b.search(7) << std::endl;


    

    return 0;
}