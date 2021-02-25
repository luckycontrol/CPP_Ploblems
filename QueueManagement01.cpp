#include <iostream>
#include <string>

using namespace std;

template <class T>
class Queue {

    private:
        int size;
        T* queue;

    public:
    Queue() {
        size = 0;
        queue = new T[100];
    }

    void add(T num) {
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

template <class T>
class Queue2: public Queue<T> {

    private:
        int size;
        T* queue;

    public:
        void print() {
            if (size <= 0) {
                cout << "Queue is empty" << endl;
                return;
            }

            for (int i=0; i<size; i++) {
                cout << queue[i] << endl;
            }
        }
};

int main() {

    Queue<int> q1;
    q1.add(42); q1.add(16); q1.add(8);
    q1.print();

    Queue<string> q2;
    q2.add("Dave"); q2.add("John"); q2.add("Any");
    q2.print();

    return 0;
}

