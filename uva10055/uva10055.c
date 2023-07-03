#include<stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main(){
    long long int num1, num2;
    while(scanf("%lld %lld", &num1, &num2) != EOF){
        printf("%lld", ABS(num1 - num2));
    }
    return 0;
}
