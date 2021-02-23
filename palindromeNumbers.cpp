// palindromic 넘버는 앞과 뒤가 같은 수다.
// 636, 13431 같은..

#include <iostream>

using namespace std;

bool isPalindrome(int x);

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome";
    } else {
        cout << n << " is Not a palindrome";
    }

    return 0;
}

bool isPalindrome(int x) {
    int digit, rev, num = 0;

    num = x;

    do {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while(num != 0);

    if (x == rev) {
        return true;
    } else {
        return false;
    }
}

// 646
// digit = 6
// rev = 6
// num = 64

// digit = 4
// rev = 64
// num = 6

// digit =  0
// rev = 646
// num = 0

// 종료