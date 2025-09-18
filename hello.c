#include <stdio.h>


int main(void) {

    int n;
    puts ("1부터 n까지의 합을 구합니다.");
    printf("n의 값 : ");
    scanf("%d", &n);

    int sum = 0; // 총합
    int i = 1;     // 반복 변수

    while (1 <= n){
                    // i가 n 이하인 동안 반복
        sum += i;   // sum에 i를 추가
        i++;        // i를 1 증가
    }

    printf("1부터 %d까지의 총합은 %d입니다.\n", n, sum);
    return 0;
}