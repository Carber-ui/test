#include <stdio.h>


int main(void) {

    int n;
    puts ("1부터 n까지의 합을 구합니다.");
    printf("n의 값 : ");
    scanf("%d", &n);

    int sum = 0; // 총합
    int i = 1;     // 반복 변수
    int sum2 = 0;  // for 반복문의 총합
    int sum3 = 0;  // 수학 공식을 이용한 총합

    while (1 <= n){
                    // i가 n 이하인 동안 반복
        sum += i;   // sum에 i를 추가
        i++;        // i를 1 증가
    }
    for (int i = 1; i <= n; i++) {
        sum += i;

    }
    sum3 = n * (n + 1) / 2;
    

    printf("while 1부터 %d까지의 총합은 %d입니다.\n", n, sum);
    printf("for 1부터 %d까지의 총합은 %d입니다.\n", n, sum);
    printf("수학 공식을 이용한 1부터 %d까지의 총합은 %d입니다.\n", n, sum3);
    return 0;
}