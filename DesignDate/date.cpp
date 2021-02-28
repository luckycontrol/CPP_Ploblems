#include <iostream>
#include "date.h"

int main() {
    Date date;

    date.setDate(2021, 2, 27);

    date.addMonth(32);

    date.addMonth(-32);

    return 0;
}