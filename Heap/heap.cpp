#include "heap.h"
#include <vector>

int main() {
    // 힙은 배열로 구현하는게 일반적이다.
    element arr[10] = {1, 5, 2, 8, 9, 15, 11, 13, 16, 19};

    element *newArr;
    newArr = Heap().heap_sort(arr, 10);

    for(int i=0; i<10; i++) {
        std::cout << newArr[i] << " <- ";
    }
    std::cout << std::endl;

    return 0;
}