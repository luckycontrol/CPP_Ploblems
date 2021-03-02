#include <iostream>
#ifndef HEAP_H
#define HEAP_H
#define MAX_ELEMENT 200

typedef int element;

class Heap {
    private:
        int heap_size;
        element heap[MAX_ELEMENT];

    public:
        Heap() {
            heap_size = 0;
        }

        void print_heap() {
            if (heap_size <= 0 ) {
                std::cout << "히프가 비어있습니다." << std::endl;
                return;
            }

            for (int i=1; i<heap_size + 1; i++) {
                std::cout << heap[i] << " <- ";
            }

            std::cout << std::endl;
        }

        // 최대히프
        void insert_heap(element item) {
            int i;
            i = ++(heap_size);

            while((i != 1) && (item > heap[i / 2])) {
                heap[i] = heap[i / 2];
                i /= 2;
            }

            heap[i] = item;
        }
        
        element delete_heap() {
            int parent, child;
            element item, temp;

            item = heap[1];
            temp = heap[heap_size--];
            
            parent = 1;
            child = 2;

            while(child <= heap_size) {
                if((child < heap_size) && (heap[child] < heap[child + 1]))
                    child++;
                
                if(temp > heap[child]) break;

                heap[parent] = heap[child];
                parent = child;
                child *= 2;
            }

            heap[parent] = temp;
            return item;
        }

        element* heap_sort(element a[], int n) {
            int i;
            Heap heap;

            for (i=0; i<n; i++) {
                heap.insert_heap(a[i]);
            }

            for (i=(n-1); i>=0; i--) {
                a[i] = heap.delete_heap();
            }

            return a;
        }
};

#endif