#include <iostream>
#include <cassert>

int sumDigits(int nr) {
    int sum = 0;
    nr = std::abs(nr);

    while (nr > 0) {
        sum += nr % 10;
        nr /= 10;
    }

    return sum;
}

void testSumDigits() {
    assert(sumDigits(1234) == 10);
    assert(sumDigits(-1234) == 10);
    assert(sumDigits(0) == 0);
    assert(sumDigits(9999) == 36);
    assert(sumDigits(1) == 1);
    assert(sumDigits(-1) == 1);

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    testSumDigits();
    return 0;
}
