#include "test.h"
#include <string>
#include <vector>

vector<int> test();

int main() {
    vector< vector<int> > vect;

    vect[0][0] = 10;
    vect[0][1] = 20;

    cout << vect.size() << endl;

    return 0;
}

vector<int> test() {

    vector<int> result;
    result.push_back(10);
    result.push_back(20);

    return result;
}