#include "heap.h"

int main() {
    // 힙은 배열로 구현하는게 일반적이다.

    Heap heap;

    heap.print_heap();

    heap.insert_heap(10);
    heap.print_heap();

    heap.insert_heap(100);
    heap.insert_heap(50);
    heap.insert_heap(70);
    heap.print_heap();

    heap.delete_heap();
    heap.print_heap();

    return 0;
}