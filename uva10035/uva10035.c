#include <stdio.h>

int main() {
    int num1, num2;
    while (scanf("%d %d", &num1, &num2) != EOF) {
        if (num1 == 0 && num2 == 0)
            break;
        
        int carry = 0;
        int carryCount = 0;

        while (num1 != 0 && num2 != 0) {
            int digitSum = num1 % 10 + num2 % 10 + carry;
            carry = digitSum >= 10 ? 1 : 0;
            carryCount += carry;
            num1 /= 10;
            num2 /= 10;
        }

        if (carryCount == 0)
            printf("No carry operation.\n");
        else if (carryCount == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", carryCount);
    }

    return 0;
}
