#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int cmpfunc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

long long int power(int num, int times){
    long long int sum = 1;
    for(int i = 0; i < times; i++){
        sum *= num;
        if(sum > 5000000) return sum;
    }
    return sum;
}

void cal(int a, int num[]) {
    long long int sum = 0;
    for (int j = 0; j <= a; j++) {
        if (sum > 5000000) {
            printf("Too expensive\n");
            return;
        } else if (num[j] == 0) {
            printf("%lld\n", sum);
            return;
        } else {
            sum += 2 * (power(num[j], j + 1));
        }
    }
}

int main() {
    int qua;
    scanf("%d", &qua);
    int i = 0, num[40];

    for (int k = 0; k < qua; k++) {
        while (1) {
            scanf("%d", &num[i]);
            if (num[i] == 0) {
                qsort(num, i + 1, sizeof(int), cmpfunc);
                cal(i, num);
                memset(num, 0, sizeof(num));
                i = 0;
                break;
            } else {
                i++;
            }
        }
    }

    return 0;
}
