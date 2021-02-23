// 5명이 티켓을 구입한다.
// 지금은 이벤트 중이다.
// 5명의 나이를 입력받아, 제일 어린 나이의 퍼센트만큼 할인해준다.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int getMin(int ages[], int size);
double
 getResult(int min);

int main() {
    int ages[5];

    for (int i=0; i<5; i++) {
        cin >> ages[i];
    }

    int min = getMin(ages, 5);
    cout << "최솟값: " << min << endl;

    double result = getResult(min);
    cout << "결과: " << result << endl;

    return 0;
}

int getMin(int ages[], int size) {
    int min = ages[0];

    for (int i=1; i<size; i++) {
        if (min > ages[i]) {
            min = ages[i];
        }
    }

    return min;
}

double getResult(int min) {
    double discount = 50 * (min * 0.01);
    return 50 - discount;
}