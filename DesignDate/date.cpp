#include <iostream>
#include "date.h"

int main() {
    Date d;

    d.setDate(2021, 12, 30);

    d.addMonth(30);

    return 0;
}