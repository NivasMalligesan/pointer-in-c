#include <stdio.h>

int countNumbersWithUniqueDigits(int n) {
    if (n == 0) {
        return 1;
    }
    
    int result = 10;  // For n = 1, we have 10 possible values (0-9)
    int uniqueDigits = 9;
    int availableNumber = 9;
    
    for (int i = 2; i <= n && availableNumber > 0; i++) {
        uniqueDigits *= availableNumber;
        result += uniqueDigits;
        availableNumber--;
    }
    
    return result;
}

int main() {
    int n;

    // Test Cases
    for (n = 0; n <= 8; n++) {
        printf("n = %d, Output: %d\n", n, countNumbersWithUniqueDigits(n));
    }

    return 0;
}
