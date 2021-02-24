#include <iostream>

using namespace std;

class Queue {

    public:
    int size;
    int* queue;

    Queue() {
        size = 0;
        queue = new int[100];
    }

    void add(int num) {
        queue[size] = num;
        size += 1;
    }

    void remove() {
        if (size <= 0) {
            cout << "Queue is empty" << endl;
            return;
        } else {
            int pop = queue[0];

            for (int i=1; i<size; i++) {
                queue[i-1] = queue[i];
            }
            size -= 1;

            cout << "delete " << pop << endl;
        }
    }

    void print() {
        if (size <= 0) {
            cout << "Queue is empty" << endl;
            return;
        } else {
            for (int i=0; i<size; i++) {
                cout << queue[i] << " <- ";
            }
            cout << endl;
        }
    }

    // Queue operator+(Queue &q) {
    //     Queue newQ;
        
    //     const int size = (this->size > q.size) ? this->size : q.size;
    //     newQ.size = size;
    //     for (int i=size - 1; i>=0; i--) {
    //         newQ.queue[i] = this->queue[i] + q.queue[i];
    //     }

    //     return newQ;
    // }

    Queue operator+(Queue &q) {
        Queue newQ;

        for (int i=newQ.size; i<this->size; i++) {
            newQ.queue[i] = this->queue[i];
        }
        newQ.size = this->size;

        for (int i=0; i<q.size; i++) {
            newQ.queue[newQ.size + i] = q.queue[i];
        }
        newQ.size = newQ.size + q.size;

        return newQ; 
    }
};

int main() {

    Queue q1;
    q1.add(42); q1.add(16); q1.add(8);
    q1.print();

    Queue q2;
    q2.add(1); q2.add(2); q2.add(3);
    q2.print();

    Queue q3 = q1+q2;
    q3.print();

    return 0;
}

