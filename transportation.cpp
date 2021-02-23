#include <iostream>

using namespace std;

int main() {
    int passengers = 0;

    cin >> passengers;

    while(passengers - 50 > 0) {
        passengers -= 50;
    }

    int result = 50 - passengers;
    
    cout << result << endl;

    return 0;
}