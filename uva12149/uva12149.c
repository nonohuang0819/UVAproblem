#include<stdio.h>
#include<string.h>

int main(){
    int which;
    while(scanf("%d", &which) != EOF){
        if(which == 0) continue;
        int n = 0;
        for(int i = 1; i <= which; i++){
            n += i * i;
        }
        printf("%d\n", n);
    }
    
    return 0;
}