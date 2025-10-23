#include <stdio.h>

int main(void){
    int prime[500];
    int prt = 0; 
    unsigned long counter = 0;

    prime[prt++] = 2;
    prime[prt++] = 3;

    for(int n = 5; n <= 1000; n += 2){
        int i;
        int flag = 0;

        for (i = 1; counter++, prime[i]*prime[i] <= n; i++){
            if (n % prime[i] == 0){
                flag = 1;
                break;
            }
        }

        if (!flag) prime[prt++] = n;
    }

    // 소수 출력
    for (int i = 0; i < prt; i++){
        printf("%d ", prime[i]);
    }
    printf("\n");

    printf("나눗셈 연산 횟수: %lu\n", counter); 

    return 0;
}