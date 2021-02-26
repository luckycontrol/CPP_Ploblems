#include "test.h"
#include <string>
#include <vector>

vector<int> test();

int main() {
    vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);

    vector<int> result = test();

    for (int i=0; i<result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;
}

vector<int> test() {

    vector<int> result;
    result.push_back(10);
    result.push_back(20);

    return result;
}